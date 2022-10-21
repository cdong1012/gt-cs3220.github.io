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
  wire [`DBITS-1:0] PC_AGEX;
  wire [`DBITS-1:0] inst_count_AGEX; 
  wire [`DBITS-1:0] pcplus_AGEX; 
  wire [`IOPBITS-1:0] op_I_AGEX;
  reg br_cond_AGEX; // 1 means a branch condition is satisified. 0 means a branch condition is not satisifed 

  reg [`REGWORDS-1:0]  regword1_AGEX;
  reg [`REGWORDS-1:0]  regword2_AGEX;
  reg [`DBITS-1:0] memaddr_AGEX;

  wire[`BUS_CANARY_WIDTH-1:0] bus_canary_AGEX; 
  reg [`DBITS-1:0] jump_target_AGEX;

  wire  [`DBITS-1:0] sxt_imm_AGEX;
  // **TODO: Complete the rest of the pipeline 

  reg actual_branch_taken_flag_AGEX;
  always @ (*) begin
    actual_branch_taken_flag_AGEX = 0;
    case (op_I_AGEX)
      `BEQ_I : begin
        $display("\tBEQ: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, sxt_imm_AGEX);
        if (regword1_AGEX == $signed(regword2_AGEX)) begin
          // br_cond_AGEX = 1; 
          actual_branch_taken_flag_AGEX = 1;
          jump_target_AGEX = PC_AGEX + sxt_imm_AGEX;
        end
      end
      `BNE_I : begin
        $display("\tBNE: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, sxt_imm_AGEX);
        if (regword1_AGEX != $signed(regword2_AGEX)) begin
          actual_branch_taken_flag_AGEX = 1;
          // br_cond_AGEX = 1; 
          jump_target_AGEX = PC_AGEX + sxt_imm_AGEX;
        end
      end
      `BLT_I : begin
        // $display("\tBLT: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, regword3_AGEX);
        if ($signed(regword1_AGEX) < $signed(regword2_AGEX)) begin
          actual_branch_taken_flag_AGEX = 1;
          // br_cond_AGEX = 1; 
          jump_target_AGEX = PC_AGEX + sxt_imm_AGEX;
        end
      end
      `BGE_I : begin
        // $display("\tBGE: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, regword3_AGEX);
        if ($signed(regword1_AGEX) >= $signed(regword2_AGEX)) begin
          actual_branch_taken_flag_AGEX = 1;
          // br_cond_AGEX = 1; 
          jump_target_AGEX = PC_AGEX + sxt_imm_AGEX;
        end
      end
      `BLTU_I : begin
        // $display("\tBLTU: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, regword3_AGEX);
        if (regword1_AGEX < regword2_AGEX) begin
          actual_branch_taken_flag_AGEX = 1;
          // br_cond_AGEX = 1; 
          jump_target_AGEX = PC_AGEX + sxt_imm_AGEX;
        end
      end
      `BGEU_I : begin
        // $display("\tBGEU: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, regword3_AGEX);
        if (regword1_AGEX >= regword2_AGEX) begin
          actual_branch_taken_flag_AGEX = 1;
          // br_cond_AGEX = 1; 
          jump_target_AGEX = PC_AGEX + sxt_imm_AGEX;
        end
      end
      `JAL_I : begin
        // $display("\tJAL: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, regword3_AGEX);
          actual_branch_taken_flag_AGEX = 1;
        // br_cond_AGEX = 1; 
        jump_target_AGEX = PC_AGEX + sxt_imm_AGEX;
        ALU_result_AGEX = PC_AGEX + 4;
      end
      `JALR_I : begin
        // $display("\tJALR: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, regword3_AGEX);
          actual_branch_taken_flag_AGEX = 1;
        // br_cond_AGEX = 1; 
        jump_target_AGEX = (regword1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
        ALU_result_AGEX = PC_AGEX + 4;
      end
      `JR_I : begin
        // $display("\tJALR: Compare %d with %d. Jump %d", regword1_AGEX, regword2_AGEX, regword3_AGEX);
          actual_branch_taken_flag_AGEX = 1;
        // br_cond_AGEX = 1; 
        jump_target_AGEX = (regword1_AGEX + sxt_imm_AGEX) & 32'hfffffffe;
        ALU_result_AGEX = PC_AGEX + 4;
      end
      default : begin
        br_cond_AGEX = 1'b0;
        actual_branch_taken_flag_AGEX = prediction_flag_AGEX;
      end
    endcase

    if (actual_branch_taken_flag_AGEX == prediction_flag_AGEX) begin
      // prediction is correct, update BTB
      prediction_correct_cond_AGEX = 1;

      // note: we need to propagate the old bhr
      // send prediction cond too 

      // 1. insert target address into the BTB
      // 2. Index the BP with the index value that was propagated with the instruction to update the BP.
      // - branch_history_register_FE ^ PC_FE_latch[7:0] to update 2-bit saturating counter
      pattern_history_table_index_AGEX = old_branch_history_register_AGEX ^ PC_AGEX[7:0];

      // 3. update the bhr (use the old BHR)
      // - new_bhr = old_bhr << 1 | actual_branch_taken_flag_AGEX
      new_branch_history_register_AGEX = (old_branch_history_register_AGEX << 1) | {7'd0, actual_branch_taken_flag_AGEX};
      $display("Prediction is correct");

      // - passing target address back to fe : jump_target_AGEX
      // - passing prediction_correct_cond_AGEX, jump_target_AGEX, pattern_history_table_index_AGEX, new_branch_history_register_AGEX, and 

    end
    else begin
      // prediction not correct -> flush
      prediction_correct_cond_AGEX = 0;
      $display("Prediction is not correct");
      br_cond_AGEX = 1;
    end
  end
  // compute ALU operations  (alu out or memory addresses)
  reg [`REGWORDS-1:0] ALU_result_AGEX;
 
  always @ (*) begin
    case (op_I_AGEX)
      `ADD_I:
        ALU_result_AGEX = regword1_AGEX + regword2_AGEX;
      `SUB_I:
        ALU_result_AGEX = regword1_AGEX - regword2_AGEX;
      `AND_I:
        ALU_result_AGEX = regword1_AGEX & regword2_AGEX;
      `OR_I:
        ALU_result_AGEX = regword1_AGEX | regword2_AGEX;
      `XOR_I:
        ALU_result_AGEX = regword1_AGEX ^ regword2_AGEX;
      `SLT_I:
        ALU_result_AGEX = {31'b0,$signed(regword1_AGEX) < $signed(regword2_AGEX)};
      `SLTU_I:
        ALU_result_AGEX = {31'b0,regword1_AGEX < regword2_AGEX};
      `SRA_I:
        ALU_result_AGEX = $signed(regword1_AGEX) >>> regword2_AGEX[4:0];
      `SRL_I:
        ALU_result_AGEX = regword1_AGEX >> regword2_AGEX[4:0];
      `SLL_I:
        ALU_result_AGEX = regword1_AGEX << regword2_AGEX[4:0];
      `MUL_I:
        ALU_result_AGEX = regword1_AGEX * regword2_AGEX;
      `ADDI_I:
        ALU_result_AGEX = regword1_AGEX + sxt_imm_AGEX;
      `ANDI_I:
        ALU_result_AGEX = regword1_AGEX & sxt_imm_AGEX;
      `ORI_I:
        ALU_result_AGEX = regword1_AGEX | sxt_imm_AGEX;
      `XORI_I:
        ALU_result_AGEX = regword1_AGEX ^ sxt_imm_AGEX;
      `SLTI_I:
        ALU_result_AGEX = {31'b0,$signed(regword1_AGEX) < $signed(sxt_imm_AGEX)};
      `SLTIU_I:
        ALU_result_AGEX = {31'b0,regword1_AGEX < sxt_imm_AGEX};
      `SRAI_I:
        ALU_result_AGEX = $signed(regword1_AGEX) >>> inst_AGEX[24:20];
      `SRLI_I:
        ALU_result_AGEX = regword1_AGEX >> inst_AGEX[24:20];
      `SLLI_I:
        ALU_result_AGEX = regword1_AGEX << inst_AGEX[24:20];
      `LUI_I: 
        ALU_result_AGEX = sxt_imm_AGEX;
      `AUIPC_I:
        ALU_result_AGEX = PC_AGEX + sxt_imm_AGEX;
      `LW_I: begin
        memaddr_AGEX = regword1_AGEX + sxt_imm_AGEX;
        ALU_result_AGEX = 0;
        // $display("\tADDI: ALU_result_AGEX = %h", ALU_result_AGEX);
      end 
      `SW_I: begin
        memaddr_AGEX = regword1_AGEX + sxt_imm_AGEX;
        ALU_result_AGEX = regword2_AGEX;
        // $display("\tADDI: ALU_result_AGEX = %h", ALU_result_AGEX);
      end 
    endcase 
  end 

  assign from_AGEX_to_FE = {jump_target_AGEX, br_cond_AGEX, prediction_correct_cond_AGEX, pattern_history_table_index_AGEX, new_branch_history_register_AGEX, PC_AGEX};
  assign from_AGEX_to_DE = {br_cond_AGEX};

  wire wr_reg_AGEX; 
  wire prediction_flag_AGEX;
  wire [7:0] old_branch_history_register_AGEX;
  reg [7:0] new_branch_history_register_AGEX;
  reg [7:0] pattern_history_table_index_AGEX;
  reg prediction_correct_cond_AGEX; // true if we predict correctly
  assign  {
    inst_AGEX,
    PC_AGEX,
    pcplus_AGEX,
    op_I_AGEX,
    inst_count_AGEX, 
    // more signals might need
    regword1_AGEX,
    regword2_AGEX,
    sxt_imm_AGEX,
    wr_reg_AGEX,
    prediction_flag_AGEX,
    old_branch_history_register_AGEX,
    bus_canary_AGEX
  } = from_DE_latch;    
 
  assign AGEX_latch_contents = {
    inst_AGEX,
    PC_AGEX,
    op_I_AGEX,
    inst_count_AGEX, 
    ALU_result_AGEX,
    memaddr_AGEX,
    wr_reg_AGEX,
    bus_canary_AGEX     
  }; 

  always @ (posedge clk) begin
    $display("%h AGEX PC", PC_AGEX);
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
