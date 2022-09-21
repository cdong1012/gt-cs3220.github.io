// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vpipeline::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp14[5];
    WData/*159:0*/ __Vtemp17[5];
    WData/*159:0*/ __Vtemp20[5];
    WData/*255:0*/ __Vtemp22[8];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk2__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
            tracep->chgWData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
            tracep->chgWData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),239);
            tracep->chgWData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),144);
            tracep->chgWData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),144);
            tracep->chgQData(oldp+26,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE),33);
            tracep->chgBit(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__br_cond_AGEX));
            tracep->chgQData(oldp+29,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),43);
            tracep->chgIData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
            tracep->chgIData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                      [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                   >> 2U))]),32);
            tracep->chgIData(oldp+33,(((IData)(4U) 
                                       + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
            __Vtemp14[0U] = (0xfU | (0xfffffff0U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                      << 4U)));
            __Vtemp14[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & (((IData)(4U) 
                                              + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                             << 4U)));
            __Vtemp14[2U] = ((0xfU & (((IData)(4U) 
                                       + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                       [
                                                                       (0x3fffU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                           >> 2U))])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                             << 4U)));
            __Vtemp14[3U] = ((0xfU & ((IData)((((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                [
                                                                (0x3fffU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                    >> 2U))])) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
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
            __Vtemp14[4U] = (0xfU & ((IData)(((((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                [
                                                                (0x3fffU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                    >> 2U))])) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     >> 0x1cU));
            tracep->chgWData(oldp+34,(__Vtemp14),132);
            tracep->chgIData(oldp+39,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
            tracep->chgIData(oldp+40,((IData)((vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE 
                                               >> 1U))),32);
            tracep->chgBit(oldp+41,((1U & (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_FE))));
            tracep->chgIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+44,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+45,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                        >> 4U))),32);
            tracep->chgCData(oldp+46,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
            tracep->chgCData(oldp+47,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x10U)))),3);
            tracep->chgCData(oldp+48,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1dU)))),7);
            tracep->chgCData(oldp+49,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)))),7);
            tracep->chgCData(oldp+50,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
            tracep->chgCData(oldp+51,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
            tracep->chgCData(oldp+52,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
            tracep->chgBit(oldp+54,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                   >> 0x2aU)))));
            tracep->chgCData(oldp+55,((0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x25U)))),5);
            tracep->chgIData(oldp+56,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 5U))),32);
            tracep->chgCData(oldp+57,((0xfU & (IData)(
                                                      (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                       >> 1U)))),4);
            tracep->chgBit(oldp+58,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
            tracep->chgCData(oldp+59,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xbU)))),5);
            __Vtemp17[0U] = ((0xfffffc00U & ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                         << 0x17U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                           >> 9U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX)))) 
                                             << 0xaU)) 
                             | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_reg_AGEX) 
                                 << 9U) | ((0x1f0U 
                                            & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]) 
                                           | (0xfU 
                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))));
            __Vtemp17[1U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                    << 0x17U) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      >> 9U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX)))) 
                                        >> 0x16U)) 
                             | (0xfffffc00U & ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                            << 0x17U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                              >> 9U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX))) 
                                                        >> 0x20U)) 
                                               << 0xaU)));
            __Vtemp17[2U] = ((0xffff0000U & ((IData)(
                                                     (((QData)((IData)(
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
                                            << 1U)) 
                                | (0x3ffU & ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                                          << 0x17U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                            >> 9U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX))) 
                                                      >> 0x20U)) 
                                             >> 0x16U))));
            __Vtemp17[3U] = ((0xffffU & ((IData)((((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                      << 0x11U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                        >> 0xfU)))) 
                                         >> 0x10U)) 
                             | (0xffff0000U & ((IData)(
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
            __Vtemp17[4U] = (0xffffU & ((IData)(((((QData)((IData)(
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
            tracep->chgWData(oldp+60,(__Vtemp17),144);
            tracep->chgIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                        << 0x11U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        >> 0xfU))),32);
            tracep->chgIData(oldp+66,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        << 0x11U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0xfU))),32);
            tracep->chgIData(oldp+67,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        << 0x17U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 9U))),32);
            tracep->chgIData(oldp+68,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x11U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xfU))),32);
            tracep->chgCData(oldp+69,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                 << 0x17U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 9U)))),6);
            tracep->chgIData(oldp+70,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        << 0x17U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 9U))),32);
            tracep->chgIData(oldp+71,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x17U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 9U))),32);
            tracep->chgCData(oldp+72,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 4U)))),5);
            tracep->chgIData(oldp+73,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 4U))),32);
            tracep->chgCData(oldp+74,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
            tracep->chgBit(oldp+75,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_reg_AGEX));
            tracep->chgIData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX),32);
            tracep->chgCData(oldp+77,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                 << 0x16U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                   >> 0xaU)))),6);
            tracep->chgIData(oldp+78,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        >> 0xaU))),32);
            tracep->chgIData(oldp+79,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        >> 0x10U))),32);
            tracep->chgIData(oldp+80,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        >> 0x10U))),32);
            tracep->chgCData(oldp+81,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
            tracep->chgIData(oldp+82,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                      [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                                   >> 2U))]),32);
            tracep->chgBit(oldp+83,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 9U))));
            tracep->chgCData(oldp+84,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                   >> 4U)))),5);
            tracep->chgIData(oldp+85,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                        >> 0xaU))),32);
            tracep->chgCData(oldp+86,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                 << 0x16U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                   >> 0xaU)))),6);
            tracep->chgIData(oldp+87,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 0x10U))),32);
            tracep->chgIData(oldp+88,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        >> 0x10U))),32);
            tracep->chgIData(oldp+89,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        >> 0xaU))),32);
            tracep->chgCData(oldp+90,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
            tracep->chgBit(oldp+91,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                           >> 9U))));
            tracep->chgCData(oldp+92,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                   >> 4U)))),5);
            tracep->chgIData(oldp+93,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                        << 0x16U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                        >> 0xaU))),32);
            tracep->chgIData(oldp+94,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__reg_busy_bits_WB),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_signal_DE));
            __Vtemp20[3U] = ((0x1ffU & ((IData)((((QData)((IData)(
                                                                  ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                      >> 4U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                   [
                                                                   (0x1fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0xdU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x13U)))])))) 
                                        >> 0x17U)) 
                             | (0xfffffe00U & ((IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                            << 0x1cU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                              >> 4U)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                           [
                                                                           (0x1fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0xdU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x13U)))]))) 
                                                        >> 0x20U)) 
                                               << 9U)));
            __Vtemp22[0U] = (IData)((((QData)((IData)(
                                                      (0x1fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0x15U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0xbU))))) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     (0xfU 
                                                                      & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))));
            __Vtemp22[1U] = ((0xfffffe00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x18U)))] 
                                             << 9U)) 
                             | (IData)(((((QData)((IData)(
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
            __Vtemp22[2U] = ((0x1ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                        [(0x1fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x18U)))] 
                                        >> 0x17U)) 
                             | (0xfffffe00U & ((IData)(
                                                       (((QData)((IData)(
                                                                         ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                           << 0x1cU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                             >> 4U)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0xdU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x13U)))])))) 
                                               << 9U)));
            __Vtemp22[3U] = __Vtemp20[3U];
            __Vtemp22[4U] = ((0xffff8000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             << 0xbU)) 
                             | ((0xfffffe00U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                                << 9U)) 
                                | (0x1ffU & ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                          << 0x1cU) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                            >> 4U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0xdU) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x13U)))]))) 
                                                      >> 0x20U)) 
                                             >> 0x17U))));
            __Vtemp22[5U] = ((0x7fffU & ((0x7800U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           << 0xbU)) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 0x15U))) 
                             | (0xffff8000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               << 0xbU)));
            __Vtemp22[6U] = ((0x7fffU & ((0x7800U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           << 0xbU)) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 0x15U))) 
                             | (0xffff8000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 0xbU)));
            __Vtemp22[7U] = (0x7fffU & ((0x7800U & 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0xbU)) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x15U)));
            tracep->chgWData(oldp+96,(__Vtemp22),239);
            tracep->chgIData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_busy_bits_DE),32);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                       [(0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0xdU) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x13U)))]),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                       [(0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x18U)))]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
            tracep->chgIData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
            tracep->chgIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
            tracep->chgIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
            tracep->chgIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
            tracep->chgIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
            tracep->chgIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
            tracep->chgIData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
            tracep->chgIData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
            tracep->chgIData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
            tracep->chgIData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
            tracep->chgIData(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
            tracep->chgIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
            tracep->chgIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
            tracep->chgIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
            tracep->chgIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
            tracep->chgIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
            tracep->chgIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
            tracep->chgIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
            tracep->chgIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
            tracep->chgIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
            tracep->chgIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
            tracep->chgIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
            tracep->chgIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        }
        tracep->chgBit(oldp+155,(vlTOPp->clk));
        tracep->chgBit(oldp+156,(vlTOPp->reset));
        tracep->chgIData(oldp+157,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        tracep->chgIData(oldp+158,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        tracep->chgIData(oldp+159,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        tracep->chgIData(oldp+160,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        tracep->chgIData(oldp+161,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        tracep->chgIData(oldp+162,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        tracep->chgIData(oldp+163,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        tracep->chgIData(oldp+164,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        tracep->chgIData(oldp+165,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        tracep->chgIData(oldp+166,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        tracep->chgIData(oldp+167,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        tracep->chgIData(oldp+168,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        tracep->chgIData(oldp+169,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        tracep->chgIData(oldp+170,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        tracep->chgIData(oldp+171,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        tracep->chgIData(oldp+172,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        tracep->chgIData(oldp+173,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        tracep->chgIData(oldp+174,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        tracep->chgIData(oldp+175,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        tracep->chgIData(oldp+176,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        tracep->chgIData(oldp+177,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        tracep->chgIData(oldp+178,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        tracep->chgIData(oldp+179,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        tracep->chgIData(oldp+180,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        tracep->chgIData(oldp+181,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        tracep->chgIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        tracep->chgIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        tracep->chgIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        tracep->chgIData(oldp+185,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        tracep->chgIData(oldp+186,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        tracep->chgIData(oldp+187,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        tracep->chgIData(oldp+188,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        tracep->chgIData(oldp+189,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        tracep->chgIData(oldp+190,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        tracep->chgIData(oldp+191,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        tracep->chgIData(oldp+192,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        tracep->chgIData(oldp+193,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        tracep->chgIData(oldp+194,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        tracep->chgIData(oldp+195,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        tracep->chgIData(oldp+196,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        tracep->chgIData(oldp+197,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        tracep->chgIData(oldp+198,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        tracep->chgIData(oldp+199,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        tracep->chgIData(oldp+200,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        tracep->chgIData(oldp+201,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        tracep->chgIData(oldp+202,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        tracep->chgIData(oldp+203,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        tracep->chgIData(oldp+204,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        tracep->chgIData(oldp+205,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        tracep->chgIData(oldp+206,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        tracep->chgIData(oldp+207,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        tracep->chgIData(oldp+208,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        tracep->chgIData(oldp+209,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        tracep->chgIData(oldp+210,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        tracep->chgIData(oldp+211,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        tracep->chgIData(oldp+212,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        tracep->chgIData(oldp+213,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        tracep->chgIData(oldp+214,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        tracep->chgIData(oldp+215,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        tracep->chgIData(oldp+216,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        tracep->chgIData(oldp+217,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        tracep->chgIData(oldp+218,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        tracep->chgIData(oldp+219,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        tracep->chgIData(oldp+220,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
    }
}

void Vpipeline::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vpipeline__Syms* __restrict vlSymsp = static_cast<Vpipeline__Syms*>(userp);
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
