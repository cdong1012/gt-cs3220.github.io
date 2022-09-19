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
        tracep->declBit(c+148,"clk", false,-1);
        tracep->declBit(c+149,"reset", false,-1);
        tracep->declBit(c+148,"pipeline clk", false,-1);
        tracep->declBit(c+149,"pipeline reset", false,-1);
        tracep->declBus(c+1,"pipeline cycle_count", false,-1, 31,0);
        tracep->declArray(c+2,"pipeline FE_latch_out", false,-1, 131,0);
        tracep->declArray(c+7,"pipeline DE_latch_out", false,-1, 238,0);
        tracep->declArray(c+15,"pipeline AGEX_latch_out", false,-1, 143,0);
        tracep->declArray(c+20,"pipeline MEM_latch_out", false,-1, 143,0);
        tracep->declBus(c+214,"pipeline from_DE_to_FE", false,-1, 0,0);
        tracep->declBus(c+215,"pipeline from_AGEX_to_FE", false,-1, 0,0);
        tracep->declBus(c+216,"pipeline from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+217,"pipeline from_WB_to_FE", false,-1, 0,0);
        tracep->declBus(c+218,"pipeline from_AGEX_to_DE", false,-1, 0,0);
        tracep->declBus(c+219,"pipeline from_MEM_to_DE", false,-1, 0,0);
        tracep->declQuad(c+25,"pipeline from_WB_to_DE", false,-1, 42,0);
        tracep->declBus(c+220,"pipeline from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+221,"pipeline from_WB_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+222,"pipeline from_WB_to_MEM", false,-1, 0,0);
        tracep->declBit(c+148,"pipeline my_FE_stage clk", false,-1);
        tracep->declBit(c+149,"pipeline my_FE_stage reset", false,-1);
        tracep->declBus(c+214,"pipeline my_FE_stage from_DE_to_FE", false,-1, 0,0);
        tracep->declBus(c+215,"pipeline my_FE_stage from_AGEX_to_FE", false,-1, 0,0);
        tracep->declBus(c+216,"pipeline my_FE_stage from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+217,"pipeline my_FE_stage from_WB_to_FE", false,-1, 0,0);
        tracep->declArray(c+2,"pipeline my_FE_stage FE_latch_out", false,-1, 131,0);
        tracep->declArray(c+2,"pipeline my_FE_stage FE_latch", false,-1, 131,0);
        tracep->declBus(c+27,"pipeline my_FE_stage PC_FE_latch", false,-1, 31,0);
        tracep->declBus(c+28,"pipeline my_FE_stage inst_FE", false,-1, 31,0);
        tracep->declBus(c+29,"pipeline my_FE_stage pcplus_FE", false,-1, 31,0);
        tracep->declBit(c+223,"pipeline my_FE_stage stall_pipe_FE", false,-1);
        tracep->declArray(c+30,"pipeline my_FE_stage FE_latch_contents", false,-1, 131,0);
        tracep->declBus(c+35,"pipeline my_FE_stage inst_count_FE", false,-1, 31,0);
        tracep->declBus(c+224,"pipeline my_FE_stage inst_count_AGEX", false,-1, 31,0);
        tracep->declBit(c+148,"pipeline my_DE_stage clk", false,-1);
        tracep->declBit(c+149,"pipeline my_DE_stage reset", false,-1);
        tracep->declArray(c+2,"pipeline my_DE_stage from_FE_latch", false,-1, 131,0);
        tracep->declBus(c+218,"pipeline my_DE_stage from_AGEX_to_DE", false,-1, 0,0);
        tracep->declBus(c+219,"pipeline my_DE_stage from_MEM_to_DE", false,-1, 0,0);
        tracep->declQuad(c+25,"pipeline my_DE_stage from_WB_to_DE", false,-1, 42,0);
        tracep->declBus(c+214,"pipeline my_DE_stage from_DE_to_FE", false,-1, 0,0);
        tracep->declArray(c+7,"pipeline my_DE_stage DE_latch_out", false,-1, 238,0);
        tracep->declArray(c+7,"pipeline my_DE_stage DE_latch", false,-1, 238,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+100+i*1,"pipeline my_DE_stage regs", true,(i+0), 31,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+132+i*1,"pipeline my_DE_stage csr_regs", true,(i+0), 31,0);}}
        tracep->declBus(c+36,"pipeline my_DE_stage inst_DE", false,-1, 31,0);
        tracep->declBus(c+37,"pipeline my_DE_stage PC_DE", false,-1, 31,0);
        tracep->declBus(c+38,"pipeline my_DE_stage pcplus_DE", false,-1, 31,0);
        tracep->declBus(c+39,"pipeline my_DE_stage inst_count_DE", false,-1, 31,0);
        tracep->declArray(c+40,"pipeline my_DE_stage DE_latch_contents", false,-1, 238,0);
        tracep->declBus(c+48,"pipeline my_DE_stage bus_canary_DE", false,-1, 3,0);
        tracep->declBus(c+49,"pipeline my_DE_stage RR_arith_result_DE", false,-1, 31,0);
        tracep->declBus(c+50,"pipeline my_DE_stage F3_DE", false,-1, 2,0);
        tracep->declBus(c+51,"pipeline my_DE_stage F7_DE", false,-1, 6,0);
        tracep->declBus(c+52,"pipeline my_DE_stage op_DE", false,-1, 6,0);
        tracep->declBus(c+53,"pipeline my_DE_stage op_I_DE", false,-1, 5,0);
        tracep->declBus(c+54,"pipeline my_DE_stage type_I_DE", false,-1, 3,0);
        tracep->declBus(c+55,"pipeline my_DE_stage type_immediate_DE", false,-1, 2,0);
        tracep->declBus(c+56,"pipeline my_DE_stage sxt_imm_DE", false,-1, 31,0);
        tracep->declBit(c+57,"pipeline my_DE_stage wr_reg_WB", false,-1);
        tracep->declBus(c+58,"pipeline my_DE_stage wregno_WB", false,-1, 4,0);
        tracep->declBus(c+59,"pipeline my_DE_stage regval_WB", false,-1, 31,0);
        tracep->declBus(c+60,"pipeline my_DE_stage wcsrno_WB", false,-1, 3,0);
        tracep->declBit(c+61,"pipeline my_DE_stage wr_csr_WB", false,-1);
        tracep->declBit(c+214,"pipeline my_DE_stage pipeline_stall_DE", false,-1);
        tracep->declBus(c+62,"pipeline my_DE_stage rs1_DE", false,-1, 31,0);
        tracep->declBus(c+63,"pipeline my_DE_stage rs2_DE", false,-1, 31,0);
        tracep->declBus(c+64,"pipeline my_DE_stage rd_DE", false,-1, 4,0);
        tracep->declBit(c+148,"pipeline my_AGEX_stage clk", false,-1);
        tracep->declBit(c+149,"pipeline my_AGEX_stage reset", false,-1);
        tracep->declBus(c+220,"pipeline my_AGEX_stage from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+221,"pipeline my_AGEX_stage from_WB_to_AGEX", false,-1, 0,0);
        tracep->declArray(c+7,"pipeline my_AGEX_stage from_DE_latch", false,-1, 238,0);
        tracep->declArray(c+15,"pipeline my_AGEX_stage AGEX_latch_out", false,-1, 143,0);
        tracep->declBus(c+215,"pipeline my_AGEX_stage from_AGEX_to_FE", false,-1, 0,0);
        tracep->declBus(c+218,"pipeline my_AGEX_stage from_AGEX_to_DE", false,-1, 0,0);
        tracep->declArray(c+15,"pipeline my_AGEX_stage AGEX_latch", false,-1, 143,0);
        tracep->declArray(c+65,"pipeline my_AGEX_stage AGEX_latch_contents", false,-1, 143,0);
        tracep->declBus(c+70,"pipeline my_AGEX_stage inst_AGEX", false,-1, 31,0);
        tracep->declBus(c+71,"pipeline my_AGEX_stage PC_AGEX", false,-1, 31,0);
        tracep->declBus(c+72,"pipeline my_AGEX_stage inst_count_AGEX", false,-1, 31,0);
        tracep->declBus(c+73,"pipeline my_AGEX_stage pcplus_AGEX", false,-1, 31,0);
        tracep->declBus(c+74,"pipeline my_AGEX_stage op_I_AGEX", false,-1, 5,0);
        tracep->declBus(c+75,"pipeline my_AGEX_stage rs1_AGEX", false,-1, 31,0);
        tracep->declBus(c+76,"pipeline my_AGEX_stage rs2_AGEX", false,-1, 31,0);
        tracep->declBus(c+77,"pipeline my_AGEX_stage wregno_AGEX", false,-1, 4,0);
        tracep->declBus(c+78,"pipeline my_AGEX_stage sxt_imm_AGEX", false,-1, 31,0);
        tracep->declBit(c+79,"pipeline my_AGEX_stage br_cond_AGEX", false,-1);
        tracep->declBus(c+80,"pipeline my_AGEX_stage bus_canary_AGEX", false,-1, 3,0);
        tracep->declBit(c+81,"pipeline my_AGEX_stage wr_reg_AGEX", false,-1);
        tracep->declBus(c+82,"pipeline my_AGEX_stage regval_AGEX", false,-1, 31,0);
        tracep->declBit(c+148,"pipeline my_MEM_stage clk", false,-1);
        tracep->declBit(c+149,"pipeline my_MEM_stage reset", false,-1);
        tracep->declBus(c+222,"pipeline my_MEM_stage from_WB_to_MEM", false,-1, 0,0);
        tracep->declArray(c+15,"pipeline my_MEM_stage from_AGEX_latch", false,-1, 143,0);
        tracep->declArray(c+20,"pipeline my_MEM_stage MEM_latch_out", false,-1, 143,0);
        tracep->declBus(c+216,"pipeline my_MEM_stage from_MEM_to_FE", false,-1, 0,0);
        tracep->declBus(c+219,"pipeline my_MEM_stage from_MEM_to_DE", false,-1, 0,0);
        tracep->declBus(c+220,"pipeline my_MEM_stage from_MEM_to_AGEX", false,-1, 0,0);
        tracep->declArray(c+20,"pipeline my_MEM_stage MEM_latch", false,-1, 143,0);
        tracep->declArray(c+15,"pipeline my_MEM_stage MEM_latch_contents", false,-1, 143,0);
        tracep->declBus(c+83,"pipeline my_MEM_stage op_I_MEM", false,-1, 5,0);
        tracep->declBus(c+84,"pipeline my_MEM_stage inst_count_MEM", false,-1, 31,0);
        tracep->declBus(c+85,"pipeline my_MEM_stage inst_MEM", false,-1, 31,0);
        tracep->declBus(c+86,"pipeline my_MEM_stage PC_MEM", false,-1, 31,0);
        tracep->declBus(c+87,"pipeline my_MEM_stage bus_canary_MEM", false,-1, 3,0);
        tracep->declBus(c+225,"pipeline my_MEM_stage memaddr_MEM", false,-1, 31,0);
        tracep->declBus(c+88,"pipeline my_MEM_stage rd_val_MEM", false,-1, 31,0);
        tracep->declBus(c+226,"pipeline my_MEM_stage wr_val_MEM", false,-1, 31,0);
        tracep->declBit(c+227,"pipeline my_MEM_stage wr_mem_MEM", false,-1);
        tracep->declBit(c+89,"pipeline my_MEM_stage wr_reg_MEM", false,-1);
        tracep->declBus(c+90,"pipeline my_MEM_stage wregno_MEM", false,-1, 4,0);
        tracep->declBus(c+91,"pipeline my_MEM_stage regval_MEM", false,-1, 31,0);
        tracep->declBit(c+148,"pipeline my_WB_stage clk", false,-1);
        tracep->declBit(c+149,"pipeline my_WB_stage reset", false,-1);
        tracep->declArray(c+20,"pipeline my_WB_stage from_MEM_latch", false,-1, 143,0);
        tracep->declBus(c+217,"pipeline my_WB_stage from_WB_to_FE", false,-1, 0,0);
        tracep->declQuad(c+25,"pipeline my_WB_stage from_WB_to_DE", false,-1, 42,0);
        tracep->declBus(c+221,"pipeline my_WB_stage from_WB_to_AGEX", false,-1, 0,0);
        tracep->declBus(c+222,"pipeline my_WB_stage from_WB_to_MEM", false,-1, 0,0);
        tracep->declBus(c+92,"pipeline my_WB_stage op_I_WB", false,-1, 5,0);
        tracep->declBus(c+93,"pipeline my_WB_stage inst_WB", false,-1, 31,0);
        tracep->declBus(c+94,"pipeline my_WB_stage PC_WB", false,-1, 31,0);
        tracep->declBus(c+95,"pipeline my_WB_stage inst_count_WB", false,-1, 31,0);
        tracep->declBus(c+96,"pipeline my_WB_stage bus_canary_WB", false,-1, 3,0);
        tracep->declBit(c+97,"pipeline my_WB_stage wr_reg_WB", false,-1);
        tracep->declBus(c+98,"pipeline my_WB_stage wregno_WB", false,-1, 4,0);
        tracep->declBus(c+99,"pipeline my_WB_stage regval_WB", false,-1, 31,0);
        tracep->declBus(c+228,"pipeline my_WB_stage wcsrno_WB", false,-1, 3,0);
        tracep->declBit(c+229,"pipeline my_WB_stage wr_csr_WB", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+150+i*1,"pipeline my_WB_stage last_WB_value", true,(i+0), 31,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+182+i*1,"pipeline my_WB_stage WB_counters", true,(i+0), 31,0);}}
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
    WData/*255:0*/ __Vtemp8[8];
    WData/*159:0*/ __Vtemp11[5];
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        tracep->fullWData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
        tracep->fullWData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),239);
        tracep->fullWData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),144);
        tracep->fullWData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),144);
        tracep->fullQData(oldp+25,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),43);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                   [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                >> 2U))]),32);
        tracep->fullIData(oldp+29,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
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
        tracep->fullWData(oldp+30,(__Vtemp3),132);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        tracep->fullIData(oldp+36,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+37,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+38,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+39,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                  >> 4U))),32);
        __Vtemp8[0U] = (IData)((((QData)((IData)((0x1fU 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x15U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0xbU))))) 
                                 << 0x24U) | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)) 
                                               << 4U) 
                                              | (QData)((IData)(
                                                                (0xfU 
                                                                 & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))));
        __Vtemp8[1U] = ((0xfffffe00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs2_DE 
                                        << 9U)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (0x1fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x15U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xbU))))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)) 
                                                                << 4U) 
                                                               | (QData)((IData)(
                                                                                (0xfU 
                                                                                & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))) 
                                                           >> 0x20U)));
        __Vtemp8[2U] = ((0x1ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs2_DE 
                                   >> 0x17U)) | (0xfffffe00U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                << 0x1cU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs1_DE)))) 
                                                    << 9U)));
        __Vtemp8[3U] = ((0x1ffU & ((IData)((((QData)((IData)(
                                                             ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                               << 0x1cU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                 >> 4U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs1_DE)))) 
                                   >> 0x17U)) | (0xfffffe00U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 4U)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs1_DE))) 
                                                             >> 0x20U)) 
                                                    << 9U)));
        __Vtemp8[4U] = ((0xffff8000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        << 0xbU)) | 
                        ((0xfffffe00U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                         << 9U)) | 
                         (0x1ffU & ((IData)(((((QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                 << 0x1cU) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                   >> 4U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs1_DE))) 
                                             >> 0x20U)) 
                                    >> 0x17U))));
        __Vtemp8[5U] = ((0x7fffU & ((0x7800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0xbU)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       >> 0x15U))) 
                        | (0xffff8000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                          << 0xbU)));
        __Vtemp8[6U] = ((0x7fffU & ((0x7800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 0xbU)) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                       >> 0x15U))) 
                        | (0xffff8000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          << 0xbU)));
        __Vtemp8[7U] = (0x7fffU & ((0x7800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0xbU)) 
                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x15U)));
        tracep->fullWData(oldp+40,(__Vtemp8),239);
        tracep->fullCData(oldp+48,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
        tracep->fullIData(oldp+49,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE),32);
        tracep->fullCData(oldp+50,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x10U)))),3);
        tracep->fullCData(oldp+51,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 3U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x1dU)))),7);
        tracep->fullCData(oldp+52,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 4U)))),7);
        tracep->fullCData(oldp+53,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        tracep->fullCData(oldp+54,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        tracep->fullCData(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
        tracep->fullBit(oldp+57,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x2aU)))));
        tracep->fullCData(oldp+58,((0x1fU & (IData)(
                                                    (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                     >> 0x25U)))),5);
        tracep->fullIData(oldp+59,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 5U))),32);
        tracep->fullCData(oldp+60,((0xfU & (IData)(
                                                   (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                    >> 1U)))),4);
        tracep->fullBit(oldp+61,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        tracep->fullIData(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs1_DE),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__rs2_DE),32);
        tracep->fullCData(oldp+64,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x15U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xbU)))),5);
        __Vtemp11[0U] = ((0xfffffc00U & ((IData)((((QData)((IData)(
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                     << 0x17U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                       >> 9U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX)))) 
                                         << 0xaU)) 
                         | (((0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 9U)))) 
                             << 9U) | ((0x1f0U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]) 
                                       | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))));
        __Vtemp11[1U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                << 0x17U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  >> 9U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX)))) 
                                    >> 0x16U)) | (0xfffffc00U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                                << 0x17U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                >> 9U)))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX))) 
                                                              >> 0x20U)) 
                                                     << 0xaU)));
        __Vtemp11[2U] = ((0xffff0000U & ((IData)((((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                      << 0x11U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                        >> 0xfU)))) 
                                         << 0x10U)) 
                         | ((0xfc00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        << 1U)) | (0x3ffU 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                                << 0x17U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                                >> 9U)))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX))) 
                                                               >> 0x20U)) 
                                                      >> 0x16U))));
        __Vtemp11[3U] = ((0xffffU & ((IData)((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                  << 0x11U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                    >> 0xfU)))) 
                                     >> 0x10U)) | (0xffff0000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                                    << 0x11U) 
                                                                   | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                                      >> 0xfU))) 
                                                               >> 0x20U)) 
                                                      << 0x10U)));
        __Vtemp11[4U] = (0xffffU & ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                               << 0x31U) 
                                              | (((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                  << 0x11U) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                    >> 0xfU))) 
                                             >> 0x20U)) 
                                    >> 0x10U));
        tracep->fullWData(oldp+65,(__Vtemp11),144);
        tracep->fullIData(oldp+70,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                     << 0x11U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xfU))),32);
        tracep->fullIData(oldp+71,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                     << 0x11U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xfU))),32);
        tracep->fullIData(oldp+72,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 9U))),32);
        tracep->fullIData(oldp+73,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                     << 0x11U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xfU))),32);
        tracep->fullCData(oldp+74,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x17U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 9U)))),6);
        tracep->fullIData(oldp+75,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 9U))),32);
        tracep->fullIData(oldp+76,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 9U))),32);
        tracep->fullCData(oldp+77,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                >> 4U)))),5);
        tracep->fullIData(oldp+78,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 4U))),32);
        tracep->fullBit(oldp+79,((0x1cU == (0x3fU & 
                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              << 0x17U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 9U))))));
        tracep->fullCData(oldp+80,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
        tracep->fullBit(oldp+81,((0xcU == (0x3fU & 
                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             << 0x17U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 9U))))));
        tracep->fullIData(oldp+82,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX),32);
        tracep->fullCData(oldp+83,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                              << 0x16U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                >> 0xaU)))),6);
        tracep->fullIData(oldp+84,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                     << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0xaU))),32);
        tracep->fullIData(oldp+85,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 0x10U))),32);
        tracep->fullIData(oldp+86,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                     << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 0x10U))),32);
        tracep->fullCData(oldp+87,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
        tracep->fullIData(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                   [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                                >> 2U))]),32);
        tracep->fullBit(oldp+89,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 9U))));
        tracep->fullCData(oldp+90,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                >> 4U)))),5);
        tracep->fullIData(oldp+91,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                  >> 0xaU))),32);
        tracep->fullCData(oldp+92,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                              << 0x16U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 0xaU)))),6);
        tracep->fullIData(oldp+93,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                     << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                  >> 0x10U))),32);
        tracep->fullIData(oldp+94,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                     << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                  >> 0x10U))),32);
        tracep->fullIData(oldp+95,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                     << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 0xaU))),32);
        tracep->fullCData(oldp+96,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        tracep->fullBit(oldp+97,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        >> 9U))));
        tracep->fullCData(oldp+98,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                              << 0x1cU) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 4U)))),5);
        tracep->fullIData(oldp+99,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                  >> 4U))),32);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        tracep->fullIData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        tracep->fullIData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        tracep->fullIData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        tracep->fullIData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        tracep->fullIData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        tracep->fullIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        tracep->fullIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        tracep->fullIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        tracep->fullIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        tracep->fullIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        tracep->fullIData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        tracep->fullIData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        tracep->fullIData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        tracep->fullIData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        tracep->fullIData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        tracep->fullIData(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        tracep->fullIData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        tracep->fullIData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        tracep->fullIData(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        tracep->fullIData(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        tracep->fullIData(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        tracep->fullIData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
        tracep->fullIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
        tracep->fullIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
        tracep->fullIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
        tracep->fullIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
        tracep->fullIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
        tracep->fullIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
        tracep->fullIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        tracep->fullBit(oldp+148,(vlTOPp->clk));
        tracep->fullBit(oldp+149,(vlTOPp->reset));
        tracep->fullIData(oldp+150,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        tracep->fullIData(oldp+151,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        tracep->fullIData(oldp+152,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        tracep->fullIData(oldp+153,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        tracep->fullIData(oldp+154,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        tracep->fullIData(oldp+155,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        tracep->fullIData(oldp+156,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        tracep->fullIData(oldp+157,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        tracep->fullIData(oldp+159,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        tracep->fullIData(oldp+160,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        tracep->fullIData(oldp+161,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        tracep->fullIData(oldp+162,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        tracep->fullIData(oldp+163,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        tracep->fullIData(oldp+164,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        tracep->fullIData(oldp+165,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        tracep->fullIData(oldp+166,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        tracep->fullIData(oldp+167,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        tracep->fullIData(oldp+168,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        tracep->fullIData(oldp+169,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        tracep->fullIData(oldp+170,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        tracep->fullIData(oldp+171,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        tracep->fullIData(oldp+172,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        tracep->fullIData(oldp+174,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        tracep->fullIData(oldp+175,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        tracep->fullIData(oldp+176,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        tracep->fullIData(oldp+177,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        tracep->fullIData(oldp+178,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        tracep->fullIData(oldp+179,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        tracep->fullIData(oldp+180,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        tracep->fullIData(oldp+181,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        tracep->fullIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        tracep->fullIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        tracep->fullIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        tracep->fullIData(oldp+185,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        tracep->fullIData(oldp+186,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        tracep->fullIData(oldp+187,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        tracep->fullIData(oldp+188,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        tracep->fullIData(oldp+189,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        tracep->fullIData(oldp+190,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        tracep->fullIData(oldp+191,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        tracep->fullIData(oldp+192,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        tracep->fullIData(oldp+193,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        tracep->fullIData(oldp+195,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        tracep->fullIData(oldp+196,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        tracep->fullIData(oldp+197,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        tracep->fullIData(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        tracep->fullIData(oldp+199,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        tracep->fullIData(oldp+200,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        tracep->fullIData(oldp+201,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        tracep->fullIData(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        tracep->fullIData(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        tracep->fullIData(oldp+204,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        tracep->fullIData(oldp+205,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        tracep->fullIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        tracep->fullIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        tracep->fullIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        tracep->fullIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        tracep->fullIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        tracep->fullIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        tracep->fullIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        tracep->fullIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
        tracep->fullBit(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__pipeline_stall_DE));
        tracep->fullBit(oldp+215,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_FE));
        tracep->fullBit(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_FE));
        tracep->fullBit(oldp+218,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        tracep->fullBit(oldp+219,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_DE));
        tracep->fullBit(oldp+220,(vlSymsp->TOP__pipeline.__PVT__from_MEM_to_AGEX));
        tracep->fullBit(oldp+221,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_AGEX));
        tracep->fullBit(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_MEM));
        tracep->fullBit(oldp+223,(0U));
        tracep->fullIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
        tracep->fullIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM),32);
        tracep->fullIData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_val_MEM),32);
        tracep->fullBit(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_mem_MEM));
        tracep->fullCData(oldp+228,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wcsrno_WB),4);
        tracep->fullBit(oldp+229,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_csr_WB));
    }
}
