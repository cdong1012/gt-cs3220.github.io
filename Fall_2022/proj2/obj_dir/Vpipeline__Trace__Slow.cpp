// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


//======================

void Vpipeline::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vpipeline::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vpipeline::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vpipeline::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vpipeline::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+129,"clk", false,-1);
        tracep->declBit(c+130,"reset", false,-1);
        tracep->declBit(c+129,"pipeline clk", false,-1);
        tracep->declBit(c+130,"pipeline reset", false,-1);
        tracep->declBus(c+56,"pipeline cycle_count", false,-1, 31,0);
        tracep->declArray(c+57,"pipeline FE_latch_out", false,-1, 131,0);
        tracep->declArray(c+62,"pipeline DE_latch_out", false,-1, 169,0);
        tracep->declArray(c+68,"pipeline AGEX_latch_out", false,-1, 105,0);
        tracep->declArray(c+72,"pipeline MEM_latch_out", false,-1, 105,0);
        tracep->declBus(c+195,"pipeline from_DE_to_FE", false,-1, 0,0);
        tracep->declBus(c+196,"pipeline from_AGEX_to_FE", false,-1, 0,0);
        tracep->declBus(c+197,"pipeline from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+198,"pipeline from_WB_to_FE", false,-1, 0,0);
        tracep->declBus(c+199,"pipeline from_AGEX_to_DE", false,-1, 0,0);
        tracep->declBus(c+200,"pipeline from_MEM_to_DE", false,-1, 0,0);
        tracep->declQuad(c+1,"pipeline from_WB_to_DE", false,-1, 42,0);
        tracep->declBus(c+201,"pipeline from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+202,"pipeline from_WB_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+203,"pipeline from_WB_to_MEM", false,-1, 0,0);
        tracep->declBit(c+129,"pipeline my_FE_stage clk", false,-1);
        tracep->declBit(c+130,"pipeline my_FE_stage reset", false,-1);
        tracep->declBus(c+195,"pipeline my_FE_stage from_DE_to_FE", false,-1, 0,0);
        tracep->declBus(c+196,"pipeline my_FE_stage from_AGEX_to_FE", false,-1, 0,0);
        tracep->declBus(c+197,"pipeline my_FE_stage from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+198,"pipeline my_FE_stage from_WB_to_FE", false,-1, 0,0);
        tracep->declArray(c+57,"pipeline my_FE_stage FE_latch_out", false,-1, 131,0);
        tracep->declArray(c+57,"pipeline my_FE_stage FE_latch", false,-1, 131,0);
        tracep->declBus(c+76,"pipeline my_FE_stage PC_FE_latch", false,-1, 31,0);
        tracep->declBus(c+77,"pipeline my_FE_stage inst_FE", false,-1, 31,0);
        tracep->declBus(c+78,"pipeline my_FE_stage pcplus_FE", false,-1, 31,0);
        tracep->declBit(c+204,"pipeline my_FE_stage stall_pipe_FE", false,-1);
        tracep->declArray(c+79,"pipeline my_FE_stage FE_latch_contents", false,-1, 131,0);
        tracep->declBus(c+84,"pipeline my_FE_stage inst_count_FE", false,-1, 31,0);
        tracep->declBus(c+205,"pipeline my_FE_stage inst_count_AGEX", false,-1, 31,0);
        tracep->declBit(c+129,"pipeline my_DE_stage clk", false,-1);
        tracep->declBit(c+130,"pipeline my_DE_stage reset", false,-1);
        tracep->declArray(c+57,"pipeline my_DE_stage from_FE_latch", false,-1, 131,0);
        tracep->declBus(c+199,"pipeline my_DE_stage from_AGEX_to_DE", false,-1, 0,0);
        tracep->declBus(c+200,"pipeline my_DE_stage from_MEM_to_DE", false,-1, 0,0);
        tracep->declQuad(c+1,"pipeline my_DE_stage from_WB_to_DE", false,-1, 42,0);
        tracep->declBus(c+195,"pipeline my_DE_stage from_DE_to_FE", false,-1, 0,0);
        tracep->declArray(c+62,"pipeline my_DE_stage DE_latch_out", false,-1, 169,0);
        tracep->declArray(c+62,"pipeline my_DE_stage DE_latch", false,-1, 169,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+8+i*1,"pipeline my_DE_stage regs", true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+40+i*1,"pipeline my_DE_stage csr_regs", true,(i+0), 31,0);}}
        tracep->declBus(c+85,"pipeline my_DE_stage inst_DE", false,-1, 31,0);
        tracep->declBus(c+86,"pipeline my_DE_stage PC_DE", false,-1, 31,0);
        tracep->declBus(c+87,"pipeline my_DE_stage pcplus_DE", false,-1, 31,0);
        tracep->declBus(c+88,"pipeline my_DE_stage inst_count_DE", false,-1, 31,0);
        tracep->declArray(c+89,"pipeline my_DE_stage DE_latch_contents", false,-1, 169,0);
        tracep->declBus(c+95,"pipeline my_DE_stage bus_canary_DE", false,-1, 3,0);
        tracep->declBus(c+96,"pipeline my_DE_stage RR_arith_result_DE", false,-1, 31,0);
        tracep->declBus(c+97,"pipeline my_DE_stage F3_DE", false,-1, 2,0);
        tracep->declBus(c+98,"pipeline my_DE_stage F7_DE", false,-1, 6,0);
        tracep->declBus(c+99,"pipeline my_DE_stage op_DE", false,-1, 6,0);
        tracep->declBus(c+100,"pipeline my_DE_stage op_I_DE", false,-1, 5,0);
        tracep->declBus(c+101,"pipeline my_DE_stage type_I_DE", false,-1, 3,0);
        tracep->declBus(c+102,"pipeline my_DE_stage type_immediate_DE", false,-1, 2,0);
        tracep->declBus(c+103,"pipeline my_DE_stage sxt_imm_DE", false,-1, 31,0);
        tracep->declBit(c+3,"pipeline my_DE_stage wr_reg_WB", false,-1);
        tracep->declBus(c+4,"pipeline my_DE_stage wregno_WB", false,-1, 4,0);
        tracep->declBus(c+5,"pipeline my_DE_stage regval_WB", false,-1, 31,0);
        tracep->declBus(c+6,"pipeline my_DE_stage wcsrno_WB", false,-1, 3,0);
        tracep->declBit(c+7,"pipeline my_DE_stage wr_csr_WB", false,-1);
        tracep->declBit(c+195,"pipeline my_DE_stage pipeline_stall_DE", false,-1);
        tracep->declBus(c+104,"pipeline my_DE_stage rs1_DE", false,-1, 4,0);
        tracep->declBus(c+105,"pipeline my_DE_stage rs2_DE", false,-1, 4,0);
        tracep->declBit(c+129,"pipeline my_AGEX_stage clk", false,-1);
        tracep->declBit(c+130,"pipeline my_AGEX_stage reset", false,-1);
        tracep->declBus(c+201,"pipeline my_AGEX_stage from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+202,"pipeline my_AGEX_stage from_WB_to_AGEX", false,-1, 0,0);
        tracep->declArray(c+62,"pipeline my_AGEX_stage from_DE_latch", false,-1, 169,0);
        tracep->declArray(c+68,"pipeline my_AGEX_stage AGEX_latch_out", false,-1, 105,0);
        tracep->declBus(c+196,"pipeline my_AGEX_stage from_AGEX_to_FE", false,-1, 0,0);
        tracep->declBus(c+199,"pipeline my_AGEX_stage from_AGEX_to_DE", false,-1, 0,0);
        tracep->declArray(c+68,"pipeline my_AGEX_stage AGEX_latch", false,-1, 105,0);
        tracep->declArray(c+106,"pipeline my_AGEX_stage AGEX_latch_contents", false,-1, 105,0);
        tracep->declBus(c+110,"pipeline my_AGEX_stage inst_AGEX", false,-1, 31,0);
        tracep->declBus(c+111,"pipeline my_AGEX_stage PC_AGEX", false,-1, 31,0);
        tracep->declBus(c+112,"pipeline my_AGEX_stage inst_count_AGEX", false,-1, 31,0);
        tracep->declBus(c+113,"pipeline my_AGEX_stage pcplus_AGEX", false,-1, 31,0);
        tracep->declBus(c+114,"pipeline my_AGEX_stage op_I_AGEX", false,-1, 5,0);
        tracep->declBus(c+115,"pipeline my_AGEX_stage RR_arith_result_AGEX", false,-1, 31,0);
        tracep->declBit(c+116,"pipeline my_AGEX_stage br_cond_AGEX", false,-1);
        tracep->declBus(c+117,"pipeline my_AGEX_stage bus_canary_AGEX", false,-1, 3,0);
        tracep->declBit(c+129,"pipeline my_MEM_stage clk", false,-1);
        tracep->declBit(c+130,"pipeline my_MEM_stage reset", false,-1);
        tracep->declBus(c+203,"pipeline my_MEM_stage from_WB_to_MEM", false,-1, 0,0);
        tracep->declArray(c+68,"pipeline my_MEM_stage from_AGEX_latch", false,-1, 105,0);
        tracep->declArray(c+72,"pipeline my_MEM_stage MEM_latch_out", false,-1, 105,0);
        tracep->declBus(c+197,"pipeline my_MEM_stage from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+200,"pipeline my_MEM_stage from_MEM_to_DE", false,-1, 0,0);
        tracep->declBus(c+201,"pipeline my_MEM_stage from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declArray(c+72,"pipeline my_MEM_stage MEM_latch", false,-1, 105,0);
        tracep->declArray(c+68,"pipeline my_MEM_stage MEM_latch_contents", false,-1, 105,0);
        tracep->declBus(c+118,"pipeline my_MEM_stage op_I_MEM", false,-1, 5,0);
        tracep->declBus(c+119,"pipeline my_MEM_stage inst_count_MEM", false,-1, 31,0);
        tracep->declBus(c+120,"pipeline my_MEM_stage inst_MEM", false,-1, 31,0);
        tracep->declBus(c+121,"pipeline my_MEM_stage PC_MEM", false,-1, 31,0);
        tracep->declBus(c+122,"pipeline my_MEM_stage bus_canary_MEM", false,-1, 3,0);
        tracep->declBus(c+206,"pipeline my_MEM_stage memaddr_MEM", false,-1, 31,0);
        tracep->declBus(c+123,"pipeline my_MEM_stage rd_val_MEM", false,-1, 31,0);
        tracep->declBus(c+207,"pipeline my_MEM_stage wr_val_MEM", false,-1, 31,0);
        tracep->declBit(c+208,"pipeline my_MEM_stage wr_mem_MEM", false,-1);
        tracep->declBit(c+129,"pipeline my_WB_stage clk", false,-1);
        tracep->declBit(c+130,"pipeline my_WB_stage reset", false,-1);
        tracep->declArray(c+72,"pipeline my_WB_stage from_MEM_latch", false,-1, 105,0);
        tracep->declBus(c+198,"pipeline my_WB_stage from_WB_to_FE", false,-1, 0,0);
        tracep->declQuad(c+1,"pipeline my_WB_stage from_WB_to_DE", false,-1, 42,0);
        tracep->declBus(c+202,"pipeline my_WB_stage from_WB_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+203,"pipeline my_WB_stage from_WB_to_MEM", false,-1, 0,0);
        tracep->declBus(c+124,"pipeline my_WB_stage op_I_WB", false,-1, 5,0);
        tracep->declBus(c+125,"pipeline my_WB_stage inst_WB", false,-1, 31,0);
        tracep->declBus(c+126,"pipeline my_WB_stage PC_WB", false,-1, 31,0);
        tracep->declBus(c+127,"pipeline my_WB_stage inst_count_WB", false,-1, 31,0);
        tracep->declBus(c+128,"pipeline my_WB_stage bus_canary_WB", false,-1, 3,0);
        tracep->declBit(c+209,"pipeline my_WB_stage wr_reg_WB", false,-1);
        tracep->declBus(c+210,"pipeline my_WB_stage wregno_WB", false,-1, 4,0);
        tracep->declBus(c+211,"pipeline my_WB_stage regval_WB", false,-1, 31,0);
        tracep->declBus(c+212,"pipeline my_WB_stage wcsrno_WB", false,-1, 3,0);
        tracep->declBit(c+213,"pipeline my_WB_stage wr_csr_WB", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+131+i*1,"pipeline my_WB_stage last_WB_value", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+163+i*1,"pipeline my_WB_stage WB_counters", true,(i+0), 31,0);}}
    }
}

void Vpipeline::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vpipeline::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vpipeline::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp3[5];
    WData/*191:0*/ __Vtemp7[6];
    WData/*127:0*/ __Vtemp8[4];
    // Body
    {
        tracep->fullQData(oldp+1,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),43);
        tracep->fullBit(oldp+3,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x2aU)))));
        tracep->fullCData(oldp+4,((0x1fU & (IData)(
                                                   (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                    >> 0x25U)))),5);
        tracep->fullIData(oldp+5,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 5U))),32);
        tracep->fullCData(oldp+6,((0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                   >> 1U)))),4);
        tracep->fullBit(oldp+7,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        tracep->fullIData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        tracep->fullIData(oldp+43,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        tracep->fullIData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        tracep->fullIData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        tracep->fullIData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        tracep->fullIData(oldp+49,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        tracep->fullIData(oldp+51,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        tracep->fullWData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        tracep->fullWData(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),170);
        tracep->fullWData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),106);
        tracep->fullWData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),106);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                   [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                >> 2U))]),32);
        tracep->fullIData(oldp+78,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        __Vtemp3[0U] = (0xfU | (0xfffffff0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                               << 4U)));
        __Vtemp3[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x1cU)) | (0xfffffff0U 
                                               & (((IData)(4U) 
                                                   + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                  << 4U)));
        __Vtemp3[2U] = ((0xfU & (((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x1cU)) | (0xfffffff0U 
                                               & ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                            [
                                                                            (0x3fffU 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                  << 4U)));
        __Vtemp3[3U] = ((0xfU & ((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x1cU)) | (0xfffffff0U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                             [
                                                                             (0x3fffU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                                >> 2U))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                           >> 0x20U)) 
                                                  << 4U)));
        __Vtemp3[4U] = (0xfU & ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                               >> 2U))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                         >> 0x20U)) 
                                >> 0x1cU));
        tracep->fullWData(oldp+79,(__Vtemp3),132);
        tracep->fullIData(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        tracep->fullIData(oldp+85,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+86,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+87,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+88,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                  >> 4U))),32);
        __Vtemp7[0U] = ((0xfffffff0U & ((IData)((((QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                      >> 4U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE)))) 
                                        << 4U)) | (0xfU 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]));
        __Vtemp7[1U] = ((0xfU & ((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                             << 0x1cU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                               >> 4U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE)))) 
                                 >> 0x1cU)) | (0xfffffff0U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE))) 
                                                           >> 0x20U)) 
                                                  << 4U)));
        __Vtemp7[2U] = ((0xfffffc00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        << 6U)) | (
                                                   (0xfffffff0U 
                                                    & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                                       << 4U)) 
                                                   | (0xfU 
                                                      & ((IData)(
                                                                 ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE))) 
                                                                  >> 0x20U)) 
                                                         >> 0x1cU))));
        __Vtemp7[3U] = ((0x3ffU & ((0x3c0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              << 6U)) 
                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                      >> 0x1aU))) | 
                        (0xfffffc00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        << 6U)));
        __Vtemp7[4U] = ((0x3ffU & ((0x3c0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              << 6U)) 
                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 0x1aU))) | 
                        (0xfffffc00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        << 6U)));
        __Vtemp7[5U] = (0x3ffU & ((0x3c0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 6U)) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     >> 0x1aU)));
        tracep->fullWData(oldp+89,(__Vtemp7),170);
        tracep->fullCData(oldp+95,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        tracep->fullIData(oldp+96,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE),32);
        tracep->fullCData(oldp+97,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x10U)))),3);
        tracep->fullCData(oldp+98,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 3U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x1dU)))),7);
        tracep->fullCData(oldp+99,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 4U)))),7);
        tracep->fullCData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        tracep->fullCData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        tracep->fullCData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        tracep->fullCData(oldp+104,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xdU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x13U)))),5);
        tracep->fullCData(oldp+105,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x18U)))),5);
        __Vtemp8[0U] = (IData)((((QData)((IData)((0x3fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0x1cU) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 4U))))) 
                                 << 0x24U) | (((QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                 << 0x1cU) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                   >> 4U)))) 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))));
        __Vtemp8[1U] = ((0xfffffc00U & ((IData)((((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                     << 0x16U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                       >> 0xaU)))) 
                                        << 0xaU)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (0x3fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                                >> 4U))))) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(
                                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                                >> 4U)))) 
                                                                  << 4U) 
                                                                 | (QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))) 
                                                             >> 0x20U)));
        __Vtemp8[2U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                  >> 0xaU)))) 
                                   >> 0x16U)) | (0xfffffc00U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0x36U) 
                                                              | (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                  << 0x16U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                                    >> 0xaU))) 
                                                             >> 0x20U)) 
                                                    << 0xaU)));
        __Vtemp8[3U] = (0x3ffU & ((IData)(((((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                  >> 0xaU))) 
                                           >> 0x20U)) 
                                  >> 0x16U));
        tracep->fullWData(oldp+106,(__Vtemp8),106);
        tracep->fullIData(oldp+110,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0xaU))),32);
        tracep->fullIData(oldp+111,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0xaU))),32);
        tracep->fullIData(oldp+112,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 4U))),32);
        tracep->fullIData(oldp+113,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0xaU))),32);
        tracep->fullCData(oldp+114,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x1cU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 4U)))),6);
        tracep->fullIData(oldp+115,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 4U))),32);
        tracep->fullBit(oldp+116,((0x1cU == (0x3fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 4U))))));
        tracep->fullCData(oldp+117,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        tracep->fullCData(oldp+118,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                               << 0x1cU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                 >> 4U)))),6);
        tracep->fullIData(oldp+119,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 4U))),32);
        tracep->fullIData(oldp+120,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                   >> 0xaU))),32);
        tracep->fullIData(oldp+121,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                   >> 0xaU))),32);
        tracep->fullCData(oldp+122,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        tracep->fullIData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                    [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                                 >> 2U))]),32);
        tracep->fullCData(oldp+124,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                               << 0x1cU) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                 >> 4U)))),6);
        tracep->fullIData(oldp+125,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                   >> 0xaU))),32);
        tracep->fullIData(oldp+126,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                   >> 0xaU))),32);
        tracep->fullIData(oldp+127,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                      << 0x1cU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                   >> 4U))),32);
        tracep->fullCData(oldp+128,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        tracep->fullBit(oldp+129,(vlTOPp->clk));
        tracep->fullBit(oldp+130,(vlTOPp->reset));
        tracep->fullIData(oldp+131,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        tracep->fullIData(oldp+136,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        tracep->fullIData(oldp+137,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        tracep->fullIData(oldp+138,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        tracep->fullIData(oldp+141,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        tracep->fullIData(oldp+143,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        tracep->fullIData(oldp+145,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        tracep->fullIData(oldp+146,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        tracep->fullIData(oldp+148,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        tracep->fullIData(oldp+149,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        tracep->fullIData(oldp+150,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        tracep->fullIData(oldp+151,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        tracep->fullIData(oldp+152,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        tracep->fullIData(oldp+153,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        tracep->fullIData(oldp+154,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        tracep->fullIData(oldp+155,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        tracep->fullIData(oldp+156,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        tracep->fullIData(oldp+157,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        tracep->fullIData(oldp+159,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        tracep->fullIData(oldp+160,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        tracep->fullIData(oldp+161,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        tracep->fullIData(oldp+162,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        tracep->fullIData(oldp+163,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        tracep->fullIData(oldp+164,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        tracep->fullIData(oldp+165,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        tracep->fullIData(oldp+166,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        tracep->fullIData(oldp+167,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        tracep->fullIData(oldp+168,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        tracep->fullIData(oldp+169,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        tracep->fullIData(oldp+170,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        tracep->fullIData(oldp+171,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        tracep->fullIData(oldp+172,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        tracep->fullIData(oldp+174,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        tracep->fullIData(oldp+175,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        tracep->fullIData(oldp+176,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        tracep->fullIData(oldp+177,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        tracep->fullIData(oldp+178,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        tracep->fullIData(oldp+179,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        tracep->fullIData(oldp+180,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        tracep->fullIData(oldp+181,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        tracep->fullIData(oldp+187,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        tracep->fullIData(oldp+191,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        tracep->fullIData(oldp+192,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        tracep->fullIData(oldp+193,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
        tracep->fullBit(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE));
        tracep->fullBit(oldp+197,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_FE));
        tracep->fullBit(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_FE));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        tracep->fullBit(oldp+200,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_DE));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_AGEX));
        tracep->fullBit(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_AGEX));
        tracep->fullBit(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_MEM));
        tracep->fullBit(oldp+204,(1U));
        tracep->fullIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
        tracep->fullIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM),32);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_val_MEM),32);
        tracep->fullBit(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_mem_MEM));
        tracep->fullBit(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_reg_WB));
        tracep->fullCData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wregno_WB),5);
        tracep->fullIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
        tracep->fullCData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wcsrno_WB),4);
        tracep->fullBit(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_csr_WB));
    }
}
