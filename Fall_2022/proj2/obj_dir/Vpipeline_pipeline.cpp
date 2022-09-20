// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline_pipeline.h"
#include "Vpipeline__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__2(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__2\n"); );
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__my_MEM_stage__DOT__dmem__v0;
    SData/*13:0*/ __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    WData/*131:0*/ __Vdly__my_FE_stage__DOT__FE_latch[5];
    IData/*31:0*/ __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    WData/*159:0*/ __Vtemp16[5];
    // Body
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch;
    __Vdly__my_FE_stage__DOT__FE_latch[0U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U];
    __Vdly__my_FE_stage__DOT__FE_latch[1U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U];
    __Vdly__my_FE_stage__DOT__FE_latch[2U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U];
    __Vdly__my_FE_stage__DOT__FE_latch[3U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U];
    __Vdly__my_FE_stage__DOT__FE_latch[4U] = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U];
    vlSymsp->TOP__pipeline.__PVT__cycle_count = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : 
                                                 ((IData)(1U) 
                                                  + vlSymsp->TOP__pipeline.__PVT__cycle_count));
    if (vlTOPp->reset) {
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
    } else {
        if ((1U & (~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_signal_DE)))) {
            __Vdly__my_FE_stage__DOT__inst_count_FE 
                = ((IData)(1U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE);
        }
    }
    if (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_mem_MEM) {
        __Vdlyvval__my_MEM_stage__DOT__dmem__v0 = vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__wr_val_MEM;
        __Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        __Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 
            (0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__memaddr_MEM 
                        >> 2U));
    }
    if (vlTOPp->reset) {
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
    } else {
        __Vdly__my_FE_stage__DOT__PC_FE_latch = ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_signal_DE)
                                                  ? vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch
                                                  : vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE);
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U];
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U];
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U];
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U];
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U];
    }
    if (vlTOPp->reset) {
        __Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        __Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
    } else {
        if (VL_UNLIKELY(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_signal_DE)) {
            __Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U];
            __Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U];
            __Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U];
            __Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U];
            __Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U];
            VL_WRITEF("------------------------------\nFETCH STALLINGGGG\n------------------------------\n\n");
        } else {
            __Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = (0xfU | (0xfffffff0U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                                          << 4U)));
            __Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = ((0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
                            >> 0x1cU)) | (0xfffffff0U 
                                          & (((IData)(4U) 
                                              + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                             << 4U)));
            __Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = ((0xfU & (((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
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
            __Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = ((0xfU & ((IData)((((QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                      [
                                                      (0x3fffU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                          >> 2U))])) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
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
            __Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = (0xfU & ((IData)(((((QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                      [
                                                      (0x3fffU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                          >> 2U))])) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                    >> 0x20U)) >> 0x1cU));
        }
    }
    if (__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem[__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = __Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
        = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    if (vlTOPp->reset) {
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
    } else {
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = ((0xfffffc00U & ((IData)((((QData)((IData)(
                                                         ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                           << 0x17U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             >> 9U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX)))) 
                               << 0xaU)) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_reg_AGEX) 
                                             << 9U) 
                                            | ((0x1f0U 
                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U]) 
                                               | (0xfU 
                                                  & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))));
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = ((0x3ffU & ((IData)((((QData)((IData)(
                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      << 0x17U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        >> 9U)))) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX)))) 
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
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = ((0xffff0000U & ((IData)((((QData)((IData)(
                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                         << 0x31U) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              >> 0xfU)))) 
                               << 0x10U)) | ((0xfc00U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 << 1U)) 
                                             | (0x3ffU 
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
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = ((0xffffU & ((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                     << 0x31U) | (((QData)((IData)(
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
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = (0xffffU & ((IData)(((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U])) 
                                     << 0x31U) | (((QData)((IData)(
                                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])) 
                                                   << 0x11U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                     >> 0xfU))) 
                                   >> 0x20U)) >> 0x10U));
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE 
        = ((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch);
    if (vlTOPp->reset) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] = 0U;
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] = 0U;
    } else {
        if (VL_UNLIKELY(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__stall_signal_DE)) {
            VL_WRITEF("DECODE stalling adddi r%2# , r%2#, %x\n",
                      5,(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   << 0x15U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xbU))),
                      5,(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   << 0xdU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x13U))),
                      32,vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE);
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] = 0U;
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] = 0U;
        } else {
            __Vtemp16[3U] = ((0x1ffU & ((IData)((((QData)((IData)(
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
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = (IData)((((QData)((IData)((0x1fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0x15U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0xbU))))) 
                            << 0x24U) | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE)) 
                                          << 4U) | (QData)((IData)(
                                                                   (0xfU 
                                                                    & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))));
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = ((0xfffffe00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                   [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 8U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x18U)))] 
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
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = ((0x1ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 8U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x18U)))] 
                              >> 0x17U)) | (0xfffffe00U 
                                            & ((IData)(
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
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = __Vtemp16[3U];
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = ((0xffff8000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                   << 0xbU)) | ((0xfffffe00U 
                                                 & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                                    << 9U)) 
                                                | (0x1ffU 
                                                   & ((IData)(
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
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = ((0x7fffU & ((0x7800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           << 0xbU)) 
                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  >> 0x15U))) | (0xffff8000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                    << 0xbU)));
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = ((0x7fffU & ((0x7800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           << 0xbU)) 
                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  >> 0x15U))) | (0xffff8000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    << 0xbU)));
            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = (0x7fffU & ((0x7800U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 0xbU)) 
                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x15U)));
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = __Vdly__my_FE_stage__DOT__FE_latch[4U];
    if (VL_UNLIKELY((0xcU == (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        << 0x17U) | 
                                       (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 9U)))))) {
        VL_WRITEF("ADDI:\n");
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_reg_AGEX = 1U;
        VL_WRITEF("\trs1: %x\n",32,((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 9U)));
        VL_WRITEF("\timm: %x\n",32,((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 4U)));
        VL_WRITEF("\trd: %x\n",5,(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            << 0x1cU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 4U))));
        vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX 
            = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                 << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                              >> 9U)) + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          << 0x1cU) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 4U)));
        VL_WRITEF("\tALU_result_AGEX: %x\n",32,vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__regval_AGEX);
    } else {
        if ((1U != (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0x17U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 9U))))) {
            vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__wr_reg_AGEX = 0U;
        }
    }
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE 
        = ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 4U)))) 
             & (0U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x10U))))) 
            & (0U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 3U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1dU)))))
            ? 1U : ((((0x33U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x1cU) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 4U)))) 
                      & (0U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x10U) | 
                                      (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x10U))))) 
                     & (0x20U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 3U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x1dU)))))
                     ? 2U : ((((0x33U == (0x7fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x1cU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 4U)))) 
                               & (7U == (7U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x10U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U))))) 
                              & (0U == (0x7fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 3U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x1dU)))))
                              ? 3U : ((((0x33U == (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 4U)))) 
                                        & (6U == (7U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x10U))))) 
                                       & (0U == (0x7fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 3U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1dU)))))
                                       ? 4U : ((((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 4U)))) 
                                                 & (4U 
                                                    == 
                                                    (7U 
                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x10U))))) 
                                                & (0U 
                                                   == 
                                                   (0x7fU 
                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 3U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x1dU)))))
                                                ? 5U
                                                : (
                                                   (((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 0x1cU) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 4U)))) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x10U))))) 
                                                    & (0U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 3U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x1dU)))))
                                                    ? 6U
                                                    : 
                                                   ((((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 0x1cU) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 4U)))) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x10U))))) 
                                                     & (0U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 3U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x1dU)))))
                                                     ? 7U
                                                     : 
                                                    ((((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 0x1cU) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 4U)))) 
                                                       & (5U 
                                                          == 
                                                          (7U 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x10U))))) 
                                                      & (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 3U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x1dU)))))
                                                      ? 8U
                                                      : 
                                                     ((((0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 0x1cU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 4U)))) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x10U))))) 
                                                       & (0U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 3U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x1dU)))))
                                                       ? 9U
                                                       : 
                                                      ((((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x1cU) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 4U)))) 
                                                         & (1U 
                                                            == 
                                                            (7U 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x10U))))) 
                                                        & (0U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 3U) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1dU)))))
                                                        ? 0xaU
                                                        : 
                                                       ((((0x33U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 4U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x10U))))) 
                                                         & (1U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 3U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1dU)))))
                                                         ? 0xbU
                                                         : 
                                                        (((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x1cU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 4U)))) 
                                                          & (0U 
                                                             == 
                                                             (7U 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x10U)))))
                                                          ? 0xcU
                                                          : 
                                                         (((0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 0x1cU) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 4U)))) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x10U)))))
                                                           ? 0xdU
                                                           : 
                                                          (((0x13U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 0x1cU) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 4U)))) 
                                                            & (6U 
                                                               == 
                                                               (7U 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0x10U) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x10U)))))
                                                            ? 0xeU
                                                            : 
                                                           (((0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 0x1cU) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 4U)))) 
                                                             & (4U 
                                                                == 
                                                                (7U 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x10U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x10U)))))
                                                             ? 0xfU
                                                             : 
                                                            (((0x13U 
                                                               == 
                                                               (0x7fU 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 0x1cU) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 4U)))) 
                                                              & (2U 
                                                                 == 
                                                                 (7U 
                                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 0x10U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x10U)))))
                                                              ? 0x10U
                                                              : 
                                                             (((0x13U 
                                                                == 
                                                                (0x7fU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 4U)))) 
                                                               & (3U 
                                                                  == 
                                                                  (7U 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0x10U) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x10U)))))
                                                               ? 0x11U
                                                               : 
                                                              ((((0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0x1cU) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 4U)))) 
                                                                 & (5U 
                                                                    == 
                                                                    (7U 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x10U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x10U))))) 
                                                                & (0x20U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 3U) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x1dU)))))
                                                                ? 0x12U
                                                                : 
                                                               ((((0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0x1cU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U)))) 
                                                                  & (5U 
                                                                     == 
                                                                     (7U 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 0x10U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x10U))))) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 3U) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x1dU)))))
                                                                 ? 0x13U
                                                                 : 
                                                                ((((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 4U)))) 
                                                                   & (1U 
                                                                      == 
                                                                      (7U 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0x10U) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x10U))))) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 3U) 
                                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x1dU)))))
                                                                  ? 0x14U
                                                                  : 
                                                                 ((0x37U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0x1cU) 
                                                                       | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U))))
                                                                   ? 0x15U
                                                                   : 
                                                                  ((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 0x1cU) 
                                                                        | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 4U))))
                                                                    ? 0x16U
                                                                    : 
                                                                   (((3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 0x1cU) 
                                                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 4U)))) 
                                                                     & (2U 
                                                                        == 
                                                                        (7U 
                                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 0x10U) 
                                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x10U)))))
                                                                     ? 0x17U
                                                                     : 
                                                                    (((0x23U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x1cU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U)))) 
                                                                      & (2U 
                                                                         == 
                                                                         (7U 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0x10U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                      ? 0x18U
                                                                      : 
                                                                     ((0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x1cU) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 4U))))
                                                                       ? 0x19U
                                                                       : 
                                                                      (((0x67U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 0x1cU) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                        & (0U 
                                                                           == 
                                                                           (7U 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                        ? 0x1bU
                                                                        : 
                                                                       (((0x63U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0x1cU) 
                                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                         & (0U 
                                                                            == 
                                                                            (7U 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                         ? 0x1cU
                                                                         : 
                                                                        (((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                          & (1U 
                                                                             == 
                                                                             (7U 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                          ? 0x1dU
                                                                          : 
                                                                         (((0x63U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                           & (4U 
                                                                              == 
                                                                              (7U 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                           ? 0x1eU
                                                                           : 
                                                                          (((0x63U 
                                                                             == 
                                                                             (0x7fU 
                                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                            & (5U 
                                                                               == 
                                                                               (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                            ? 0x1fU
                                                                            : 
                                                                           (((0x63U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                             & (6U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                             ? 0x20U
                                                                             : 
                                                                            (((0x63U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                              & (7U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                              ? 0x21U
                                                                              : 
                                                                             (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                               & (2U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                               ? 0x22U
                                                                               : 
                                                                              (((0x73U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)))) 
                                                                                & (1U 
                                                                                == 
                                                                                (7U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x10U)))))
                                                                                ? 0x23U
                                                                                : 0x25U))))))))))))))))))))))))))))))))));
    vlSymsp->TOP__pipeline.__Vtableidx1 = vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE;
    if ((1U & vlSymsp->TOP__pipeline.__Vtablechg1[vlSymsp->TOP__pipeline.__Vtableidx1])) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE 
            = vlSymsp->TOP__pipeline.__Vtable1___PVT__my_DE_stage__DOT__type_I_DE
            [vlSymsp->TOP__pipeline.__Vtableidx1];
    }
    if ((2U & vlSymsp->TOP__pipeline.__Vtablechg1[vlSymsp->TOP__pipeline.__Vtableidx1])) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE 
            = vlSymsp->TOP__pipeline.__Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE
            [vlSymsp->TOP__pipeline.__Vtableidx1];
    }
    vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__sxt_imm_DE 
        = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
            ? ((0xfffff800U & ((- (IData)((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 >> 3U)))) 
                               << 0xbU)) | (0x7ffU 
                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 8U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x18U))))
            : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                ? ((0xfffff800U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 3U)))) 
                                   << 0xbU)) | ((0x7e0U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 8U) 
                                                    | (0xe0U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x18U)))) 
                                                | (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 0x15U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0xbU)))))
                : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                    ? ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 3U)))) 
                                       << 0xbU)) | 
                       ((0x400U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                   >> 1U)) | ((0x3f0U 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 7U) 
                                                  | (0x70U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x19U)))) 
                                              | (0xfU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x14U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0xcU))))))
                    : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                        ? ((0xfff80000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 3U)))) 
                                           << 0x13U)) 
                           | (0x7ffffU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x10U))))
                        : ((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                            ? ((0xfff80000U & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 3U)))) 
                                               << 0x13U)) 
                               | ((0x7f800U & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x1bU) 
                                               | (0x7fff800U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 5U)))) 
                                  | ((0x400U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xeU)) 
                                     | (0x3ffU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 7U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x19U))))))
                            : 0U)))));
}

VL_INLINE_OPT void Vpipeline_pipeline::_sequent__TOP__pipeline__3(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline::_sequent__TOP__pipeline__3\n"); );
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    CData/*3:0*/ __Vdlyvdim0__my_DE_stage__DOT__csr_regs__v0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__csr_regs__v0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__csr_regs__v0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__csr_regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                       >> 0x2aU)))) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_busy_bits_DE = 0U;
    }
    if ((1U & (~ (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                          >> 0x2aU))))) {
        if ((1U & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE))) {
            __Vdlyvval__my_DE_stage__DOT__csr_regs__v0 
                = (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 5U));
            __Vdlyvset__my_DE_stage__DOT__csr_regs__v0 = 1U;
            __Vdlyvdim0__my_DE_stage__DOT__csr_regs__v0 
                = (0xfU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                   >> 1U)));
        }
    }
    if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                       >> 0x2aU)))) {
        __Vdlyvval__my_DE_stage__DOT__regs__v0 = (IData)(
                                                         (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                          >> 5U));
        __Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__regs__v0 = (0x1fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                              >> 0x25U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__csr_regs__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__csr_regs[__Vdlyvdim0__my_DE_stage__DOT__csr_regs__v0] 
            = __Vdlyvval__my_DE_stage__DOT__csr_regs__v0;
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[__Vdlyvdim0__my_DE_stage__DOT__regs__v0] 
            = __Vdlyvval__my_DE_stage__DOT__regs__v0;
    }
}
