 `include "define.vh" 

module MEM_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire  [`from_WB_to_MEM_WIDTH-1:0] from_WB_to_MEM,  
  input wire  [`AGEX_latch_WIDTH-1:0]     from_AGEX_latch, 
  output wire [`MEM_latch_WIDTH-1:0]      MEM_latch_out,
  output wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,
  output wire [`from_MEM_to_DE_WIDTH-1:0] from_MEM_to_DE,
  output wire [`from_WB_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX
);
  // D-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] dmem[`DMEMWORDS-1:0];
 
 // DMEM and IMEM should contains the same contents 
  initial begin
    $readmemh(`IDMEMINITFILE , dmem);
  end
  
  reg [`MEM_latch_WIDTH-1:0] MEM_latch; 

  wire[`MEM_latch_WIDTH-1:0] MEM_latch_contents; 

  wire [`IOPBITS-1:0] op_I_MEM;
  wire [`DBITS-1:0] inst_count_MEM; 
  wire [`INSTBITS-1:0] inst_MEM; 
  wire [`DBITS-1:0] PC_MEM;
 
  wire [`BUS_CANARY_WIDTH-1:0] bus_canary_MEM;

  // **TODO: Complete the rest of the pipeline 

  wire [`DBITS-1:0] memaddr_MEM;  // memory address. need to be computed in AGEX stage and pass through a latch 
  wire [`DBITS-1:0] rd_val_MEM;  // memory read value 
  wire [`DBITS-1:0] wr_val_MEM;  // memory write value 
  wire wr_mem_MEM;  // is this instruction writing a value into memory? 
  // Read from D-MEM  (read code is completed if there is a correct memaddr_MEM ) 
  assign rd_val_MEM = dmem[memaddr_MEM[`DMEMADDRBITS-1:`DMEMWORDBITS]];

  wire wr_reg_MEM; // is this instruction writing into a register file? 
  wire [`REGNOBITS-1:0] wregno_MEM; // destination register ID 
  wire [`DBITS-1:0] regval_MEM;  // the contents to be written in the register file (or CSR )

  wire[`REGWORDS-1:0] ALU_result_MEM;
  
  assign wr_mem_MEM = op_I_MEM == `SW_I;
  assign wr_val_MEM = ALU_result_MEM;

  // Write to D-MEM
  always @ (posedge clk) begin
  if (wr_mem_MEM)
    // fill out the correct signal name to do write operations     
      dmem[memaddr_MEM[`DMEMADDRBITS-1:`DMEMWORDBITS]] <= wr_val_MEM; 
  end

  reg [`REGWORDS-1:0] intercepted_ALU_result_MEM;
  always @ (*) begin
    if (op_I_MEM == `LW_I)
      intercepted_ALU_result_MEM = rd_val_MEM;
    else begin
      intercepted_ALU_result_MEM = ALU_result_MEM;
    end
  end

  wire wr_reg_MEM; 
  assign MEM_latch_out = MEM_latch; 
  assign {
                                inst_MEM,
                                PC_MEM,
                                op_I_MEM,
                                inst_count_MEM, 
                                ALU_result_MEM, // pass ALU result from agex a long
                                 // more signals might need
                                 memaddr_MEM,
                                 wr_reg_MEM,
                                 bus_canary_MEM
                                 } = from_AGEX_latch;  
 
  assign MEM_latch_contents = {
                                inst_MEM,
                                PC_MEM,
                                op_I_MEM,
                                inst_count_MEM, 
                                intercepted_ALU_result_MEM,
                                wr_reg_MEM,
                                bus_canary_MEM                   
  }; 

  always @ (posedge clk) begin
    $display("%h PC_MEM", PC_MEM);
    if (reset) begin
      MEM_latch <= {`MEM_latch_WIDTH{1'b0}}; 
    end else begin 
      MEM_latch <= MEM_latch_contents;
    end    
  end
  
endmodule
