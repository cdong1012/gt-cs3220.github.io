 `include "define.vh" 

module AGEX_STAGE(
  input  wire                               clk,
  input  wire                               reset,
  input  wire [`from_MEM_to_AGEX_WIDTH-1:0] from_MEM_to_AGEX,    
  input  wire [`from_WB_to_AGEX_WIDTH-1:0]  from_WB_to_AGEX,   
  input  wire [`DE_latch_WIDTH-1:0]         from_DE_latch,
  output wire [`AGEX_latch_WIDTH-1:0]       AGEX_latch_out,
  output wire [`from_AGEX_to_FE_WIDTH-1:0]  from_AGEX_to_FE,
  output wire [`from_AGEX_to_DE_WIDTH-1:0]  from_AGEX_to_DE
);

  reg [`AGEX_latch_WIDTH-1:0] AGEX_latch; 
  // wire to send the AGEX latch contents to other pipeline stages 
  assign AGEX_latch_out = AGEX_latch;

  wire[`AGEX_latch_WIDTH-1:0] AGEX_latch_contents; 
   
  wire [`INSTBITS-1:0]inst_AGEX; 
  wire [`DBITS-1:0]PC_AGEX;
  wire [`DBITS-1:0] inst_count_AGEX; 
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire [`IOPBITS-1:0] op_I_AGEX;

  wire [`DBITS-1:0] rs1_AGEX;
  wire [`DBITS-1:0] rs2_AGEX;
  wire [`REGNOBITS-1:0] wregno_AGEX;
  reg [`DBITS-1:0] sxt_imm_AGEX;

  reg br_cond_AGEX; // 1 means a branch condition is satisified. 0 means a branch condition is not satisifed 

  wire[`BUS_CANARY_WIDTH-1:0] bus_canary_AGEX; 

  reg wr_reg_AGEX; // is this instruction writing into a register file? 
  reg [`REGNOBITS-1:0] wregno_AGEX; // destination register ID 
  reg [`DBITS-1:0] regval_AGEX;  // the contents to be written in the register file (or CSR )

  reg [`REGWORDS-1:0] busy_bits_AGEX;
  // **TODO: Complete the rest of the pipeline 
  
  assign from_AGEX_to_FE = {sxt_imm_AGEX, br_cond_AGEX} ;  
  assign from_AGEX_to_DE = {br_cond_AGEX};

  always @ (*) begin
    case (op_I_AGEX)
      `BEQ_I : begin
              $display("BEQ:");
      $display("\trs1: %h", rs1_AGEX);
      $display("\trs2: %h", rs2_AGEX);
      $display("\timm: %h", sxt_imm_AGEX);
      if (rs1_AGEX == rs2_AGEX)
        br_cond_AGEX = 1; // write correct code to check the branch condition. 
      end
      
      /*
      `BNE_I : ...
      `BLT_I : ...
      `BGE_I : ...
      `BLTU_I: ..
      `BGEU_I : ...
      */
      default : br_cond_AGEX = 1'b0;
    endcase
  end


  // compute ALU operations  (alu out or memory addresses)
  always @ (*) begin
  // $display("YEEETTTTT!!!! %h", op_I_AGEX);
  case (op_I_AGEX)
    `ADDI_I: begin
      $display("ADDI:");
      $display("\trs1: %h", rs1_AGEX);
      $display("\timm: %h", sxt_imm_AGEX);
      $display("\trd: %h", wregno_AGEX);
      regval_AGEX = rs1_AGEX + sxt_imm_AGEX;
      wr_reg_AGEX = 1;
      $display("\tALU_result_AGEX: %h", regval_AGEX);
    end
    `ADD_I: begin
      regval_AGEX = rs1_AGEX  + rs2_AGEX;
      wr_reg_AGEX = 1;
      $display("ADD:");
      $display("\trs1: %h", rs1_AGEX);
      $display("\trs2: %h", rs2_AGEX);
      $display("\trd: %h", wregno_AGEX);
      regval_AGEX = rs1_AGEX + rs2_AGEX;
      wr_reg_AGEX = 1;
      $display("\tALU_result_AGEX: %h", regval_AGEX);
    end
       //  ...
    default : begin
      wr_reg_AGEX = 0;
    end
	 endcase 
   
  end 

  // branch target needs to be computed here 
  // computed branch target needs to send to other pipeline stages (pctarget_AGEX)

  always @(*)begin  
  /*
    if (op_I_AGEX == `JAL_I) 
    ... 
    */
  end 
  wire [`REGWORDS-1:0] busy_bits_AGEX; // busy bits for registers 

  assign  {
    inst_AGEX,
    PC_AGEX,
    pcplus_AGEX,
    op_I_AGEX,
    inst_count_AGEX, 
    rs1_AGEX,
    rs2_AGEX,
    wregno_AGEX,
    sxt_imm_AGEX,
            // more signals might need
    bus_canary_AGEX
  } = from_DE_latch;    
 
  assign AGEX_latch_contents = {
    inst_AGEX,
    PC_AGEX,
    op_I_AGEX,
    inst_count_AGEX, 
    regval_AGEX, // the result of arithmetic calculation
    wr_reg_AGEX, // is this instruction writing into a register file? 
    wregno_AGEX, // destination register ID 
            // more signals might need
    bus_canary_AGEX     
  }; 


  always @ (posedge clk) begin
    if (reset) begin
      AGEX_latch <= {`AGEX_latch_WIDTH{1'b0}};
      // might need more code here  
    end 
    else begin
      // need to complete 
      AGEX_latch <= AGEX_latch_contents;
    end 
  end

endmodule
