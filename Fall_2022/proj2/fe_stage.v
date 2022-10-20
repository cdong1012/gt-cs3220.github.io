 `include "define.vh" 

module FE_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire  [`from_DE_to_FE_WIDTH-1:0]  from_DE_to_FE,
  input wire  [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire  [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire  [`from_WB_to_FE_WIDTH-1:0]  from_WB_to_FE, 
  output wire [`FE_latch_WIDTH-1:0]       FE_latch_out
);


  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  
  // // Display memory contents with verilator 
  // always @(posedge clk) begin
  //   for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
  //       $display("%h", imem[i]);
  //   end
  // end
  

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 

  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 
  
  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 

  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;
  
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE, 
                                // if you add more bits here, please increase the width of latch in define.vh 
                                prediction_flag_FE,

                                `BUS_CANARY_VALUE // for an error checking of bus encoding/decoding  
                                };

  // **TODO: Complete the rest of the pipeline 

  assign stall_pipe_FE = from_DE_to_FE;  // pass the DE stage stall signal to FE stage 
  wire [`DBITS-1:0] jump_target_FE;
  wire br_cond_FE;
  assign {jump_target_FE, br_cond_FE}= from_AGEX_to_FE;

  // Part 4: Branch prediction
  reg [26 + 1 + 32 - 1:0] branch_target_buffer_FE [0:15];
  reg [7:0] branch_history_register_FE;
  reg [1:0] pattern_history_table_FE [0:(2**8)-1];
  reg prediction_flag_FE; // true if predict taken, false if not taken

  // pattern history table (PHT) initialization
  initial begin
    // Each of the 2bit counter in the PHT is initialized with 00.
    for (integer i = 0; i <= 8'hFF; i++) 
      pattern_history_table_FE[i] = {2'b00};
  end

  always @ (posedge clk) begin
    /* you need to extend this always block */
    if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      end
    else if (!stall_pipe_FE) begin
      if (br_cond_FE)
        PC_FE_latch <= jump_target_FE;
      else begin 
        
        // check BTB and Branch predictor
        // BTB hit => {TAG, index} == PC && valid =1
        if ({2'b00, branch_target_buffer_FE[PC_FE_latch[3:0]][58:33], PC_FE_latch[3:0]} == PC_FE_latch
          && branch_target_buffer_FE[PC_FE_latch[3:0]][32] == 1'b1) begin
            $display("BTB hit!");
            // predict_func(pc, actual_dir) 
            //   { 
            //     index = PC xor BHR 
            //     taken = (2bit_counters[index] >= 2) ? 1 : 0 
            //     correctly_predictied = (actual_dir == taken) ? 1 : 0  // stats 
            //   }
            if (pattern_history_table_FE[branch_history_register_FE ^ PC_FE_latch[7:0]] >= 2'd2) begin
              $display("Predict taken");
              PC_FE_latch <= branch_target_buffer_FE[PC_FE_latch[3:0]][31:0];
              // TODO: pass a boolean value for predict (true for taken, false for not taken) into the fe latch 
              // and the decode latch to the agex stage
              // The agex stage will check the predict value and see if we mispredict -> flush the instruction in decode if we did
            end
            else
                PC_FE_latch <= pcplus_FE;
          end
          else
            PC_FE_latch <= pcplus_FE;
      end
      inst_count_FE <= inst_count_FE + 1;
      end 
    else 
      if (br_cond_FE)
        PC_FE_latch <= jump_target_FE;
      else 
        PC_FE_latch <= PC_FE_latch;
  end
  

  always @ (posedge clk) begin
    $display("%h PC_FE_latch", PC_FE_latch);
    if (reset) 
        begin 
            FE_latch <= {`FE_latch_WIDTH{1'b0}}; 
            // ...
        end 
     else  
        begin 
          // this is just an example. you need to expand the contents of if/else
          if (br_cond_FE)
            FE_latch <= 0; 
          else if (stall_pipe_FE)
            FE_latch <= FE_latch; 
          else 
            FE_latch <= FE_latch_contents; 
        end  
  end

endmodule