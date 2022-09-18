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
    WData/*159:0*/ __Vtemp11[5];
    WData/*191:0*/ __Vtemp15[6];
    WData/*127:0*/ __Vtemp16[4];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgQData(oldp+0,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),43);
            tracep->chgBit(oldp+2,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x2aU)))));
            tracep->chgCData(oldp+3,((0x1fU & (IData)(
                                                      (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                       >> 0x25U)))),5);
            tracep->chgIData(oldp+4,((IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                              >> 5U))),32);
            tracep->chgCData(oldp+5,((0xfU & (IData)(
                                                     (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                      >> 1U)))),4);
            tracep->chgBit(oldp+6,((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
            tracep->chgIData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
            tracep->chgIData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
            tracep->chgIData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
            tracep->chgIData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
            tracep->chgIData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
            tracep->chgIData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
            tracep->chgIData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
            tracep->chgIData(oldp+24,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
            tracep->chgIData(oldp+25,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
            tracep->chgIData(oldp+26,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
            tracep->chgIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
            tracep->chgIData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
            tracep->chgIData(oldp+30,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
            tracep->chgIData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
            tracep->chgIData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
            tracep->chgIData(oldp+33,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
            tracep->chgIData(oldp+34,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
            tracep->chgIData(oldp+35,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
            tracep->chgIData(oldp+36,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
            tracep->chgIData(oldp+38,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
            tracep->chgIData(oldp+39,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[0]),32);
            tracep->chgIData(oldp+40,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[1]),32);
            tracep->chgIData(oldp+41,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[2]),32);
            tracep->chgIData(oldp+42,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[3]),32);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[4]),32);
            tracep->chgIData(oldp+44,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[5]),32);
            tracep->chgIData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[6]),32);
            tracep->chgIData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[7]),32);
            tracep->chgIData(oldp+47,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[8]),32);
            tracep->chgIData(oldp+48,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[9]),32);
            tracep->chgIData(oldp+49,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[10]),32);
            tracep->chgIData(oldp+50,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[11]),32);
            tracep->chgIData(oldp+51,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[12]),32);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[13]),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[14]),32);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[15]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+55,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
            tracep->chgWData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),132);
            tracep->chgWData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),170);
            tracep->chgWData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),106);
            tracep->chgWData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),106);
            tracep->chgIData(oldp+75,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                      [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                   >> 2U))]),32);
            tracep->chgIData(oldp+77,(((IData)(4U) 
                                       + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
            __Vtemp11[0U] = (0xfU | (0xfffffff0U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                      << 4U)));
            __Vtemp11[1U] = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & (((IData)(4U) 
                                              + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                             << 4U)));
            __Vtemp11[2U] = ((0xfU & (((IData)(4U) 
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
            __Vtemp11[3U] = ((0xfU & ((IData)((((QData)((IData)(
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
            __Vtemp11[4U] = (0xfU & ((IData)(((((QData)((IData)(
                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                                [
                                                                (0x3fffU 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                    >> 2U))])) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     >> 0x1cU));
            tracep->chgWData(oldp+78,(__Vtemp11),132);
            tracep->chgIData(oldp+83,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
            tracep->chgIData(oldp+84,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+85,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+86,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 4U))),32);
            tracep->chgIData(oldp+87,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        << 0x1cU) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                        >> 4U))),32);
            __Vtemp15[0U] = ((0xfffffff0U & ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                           >> 4U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE)))) 
                                             << 4U)) 
                             | (0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]));
            __Vtemp15[1U] = ((0xfU & ((IData)((((QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                  << 0x1cU) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                    >> 4U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE)))) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                          << 0x1cU) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                            >> 4U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE))) 
                                                      >> 0x20U)) 
                                             << 4U)));
            __Vtemp15[2U] = ((0xfffffc00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             << 6U)) 
                             | ((0xfffffff0U & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                                << 4U)) 
                                | (0xfU & ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                        << 0x1cU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                          >> 4U)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE))) 
                                                    >> 0x20U)) 
                                           >> 0x1cU))));
            __Vtemp15[3U] = ((0x3ffU & ((0x3c0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                   << 6U)) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                           >> 0x1aU))) 
                             | (0xfffffc00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               << 6U)));
            __Vtemp15[4U] = ((0x3ffU & ((0x3c0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   << 6U)) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           >> 0x1aU))) 
                             | (0xfffffc00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 6U)));
            __Vtemp15[5U] = (0x3ffU & ((0x3c0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 6U)) 
                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1aU)));
            tracep->chgWData(oldp+88,(__Vtemp15),170);
            tracep->chgCData(oldp+94,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),4);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__RR_arith_result_DE),32);
            tracep->chgCData(oldp+96,((7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x10U)))),3);
            tracep->chgCData(oldp+97,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1dU)))),7);
            tracep->chgCData(oldp+98,((0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0x1cU) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)))),7);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
            tracep->chgCData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
            tracep->chgIData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE),32);
            tracep->chgCData(oldp+103,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 0xdU) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x13U)))),5);
            tracep->chgCData(oldp+104,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x18U)))),5);
            __Vtemp16[0U] = (IData)((((QData)((IData)(
                                                      (0x3fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           << 0x1cU) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             >> 4U))))) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      << 0x1cU) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                        >> 4U)))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     (0xfU 
                                                                      & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))));
            __Vtemp16[1U] = ((0xfffffc00U & ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                       << 0x36U) 
                                                      | (((QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                          << 0x16U) 
                                                         | ((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                            >> 0xaU)))) 
                                             << 0xaU)) 
                             | (IData)(((((QData)((IData)(
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
            __Vtemp16[2U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                  << 0x36U) 
                                                 | (((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                     << 0x16U) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                       >> 0xaU)))) 
                                        >> 0x16U)) 
                             | (0xfffffc00U & ((IData)(
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
            __Vtemp16[3U] = (0x3ffU & ((IData)(((((QData)((IData)(
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
            tracep->chgWData(oldp+105,(__Vtemp16),106);
            tracep->chgIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xaU))),32);
            tracep->chgIData(oldp+110,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0xaU))),32);
            tracep->chgIData(oldp+111,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x1cU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+112,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0xaU))),32);
            tracep->chgCData(oldp+113,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 4U)))),6);
            tracep->chgIData(oldp+114,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         << 0x1cU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 4U))),32);
            tracep->chgBit(oldp+115,((0x1cU == (0x3fU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x1cU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 4U))))));
            tracep->chgCData(oldp+116,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),4);
            tracep->chgCData(oldp+117,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                    >> 4U)))),6);
            tracep->chgIData(oldp+118,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                         << 0x1cU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+119,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                           >> 0xaU))),32);
            tracep->chgIData(oldp+120,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))),32);
            tracep->chgCData(oldp+121,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),4);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                       [(0x3fffU & 
                                         (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                                          >> 2U))]),32);
            tracep->chgCData(oldp+123,((0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                  << 0x1cU) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                    >> 4U)))),6);
            tracep->chgIData(oldp+124,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                           >> 0xaU))),32);
            tracep->chgIData(oldp+125,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                           >> 0xaU))),32);
            tracep->chgIData(oldp+126,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                         << 0x1cU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                           >> 4U))),32);
            tracep->chgCData(oldp+127,((0xfU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),4);
        }
        tracep->chgBit(oldp+128,(vlTOPp->clk));
        tracep->chgBit(oldp+129,(vlTOPp->reset));
        tracep->chgIData(oldp+130,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0]),32);
        tracep->chgIData(oldp+131,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1]),32);
        tracep->chgIData(oldp+132,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2]),32);
        tracep->chgIData(oldp+133,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3]),32);
        tracep->chgIData(oldp+134,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4]),32);
        tracep->chgIData(oldp+135,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5]),32);
        tracep->chgIData(oldp+136,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6]),32);
        tracep->chgIData(oldp+137,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7]),32);
        tracep->chgIData(oldp+138,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8]),32);
        tracep->chgIData(oldp+139,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9]),32);
        tracep->chgIData(oldp+140,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[10]),32);
        tracep->chgIData(oldp+141,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[11]),32);
        tracep->chgIData(oldp+142,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[12]),32);
        tracep->chgIData(oldp+143,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[13]),32);
        tracep->chgIData(oldp+144,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[14]),32);
        tracep->chgIData(oldp+145,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[15]),32);
        tracep->chgIData(oldp+146,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[16]),32);
        tracep->chgIData(oldp+147,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[17]),32);
        tracep->chgIData(oldp+148,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[18]),32);
        tracep->chgIData(oldp+149,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[19]),32);
        tracep->chgIData(oldp+150,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[20]),32);
        tracep->chgIData(oldp+151,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[21]),32);
        tracep->chgIData(oldp+152,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[22]),32);
        tracep->chgIData(oldp+153,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[23]),32);
        tracep->chgIData(oldp+154,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[24]),32);
        tracep->chgIData(oldp+155,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[25]),32);
        tracep->chgIData(oldp+156,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[26]),32);
        tracep->chgIData(oldp+157,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[27]),32);
        tracep->chgIData(oldp+158,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[28]),32);
        tracep->chgIData(oldp+159,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[29]),32);
        tracep->chgIData(oldp+160,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[30]),32);
        tracep->chgIData(oldp+161,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[31]),32);
        tracep->chgIData(oldp+162,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0]),32);
        tracep->chgIData(oldp+163,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1]),32);
        tracep->chgIData(oldp+164,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2]),32);
        tracep->chgIData(oldp+165,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3]),32);
        tracep->chgIData(oldp+166,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4]),32);
        tracep->chgIData(oldp+167,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5]),32);
        tracep->chgIData(oldp+168,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6]),32);
        tracep->chgIData(oldp+169,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7]),32);
        tracep->chgIData(oldp+170,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[8]),32);
        tracep->chgIData(oldp+171,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[9]),32);
        tracep->chgIData(oldp+172,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[10]),32);
        tracep->chgIData(oldp+173,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[11]),32);
        tracep->chgIData(oldp+174,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[12]),32);
        tracep->chgIData(oldp+175,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[13]),32);
        tracep->chgIData(oldp+176,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[14]),32);
        tracep->chgIData(oldp+177,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[15]),32);
        tracep->chgIData(oldp+178,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[16]),32);
        tracep->chgIData(oldp+179,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[17]),32);
        tracep->chgIData(oldp+180,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[18]),32);
        tracep->chgIData(oldp+181,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[19]),32);
        tracep->chgIData(oldp+182,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[20]),32);
        tracep->chgIData(oldp+183,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[21]),32);
        tracep->chgIData(oldp+184,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[22]),32);
        tracep->chgIData(oldp+185,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[23]),32);
        tracep->chgIData(oldp+186,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[24]),32);
        tracep->chgIData(oldp+187,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[25]),32);
        tracep->chgIData(oldp+188,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[26]),32);
        tracep->chgIData(oldp+189,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[27]),32);
        tracep->chgIData(oldp+190,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[28]),32);
        tracep->chgIData(oldp+191,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[29]),32);
        tracep->chgIData(oldp+192,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[30]),32);
        tracep->chgIData(oldp+193,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[31]),32);
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
