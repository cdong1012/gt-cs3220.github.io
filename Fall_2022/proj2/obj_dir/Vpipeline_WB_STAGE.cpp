// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline_WB_STAGE.h"
#include "Vpipeline__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__1(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__1\n"); );
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdlyvval__WB_counters__v0;
    IData/*31:0*/ __Vdlyvval__WB_counters__v1;
    IData/*31:0*/ __Vdlyvval__WB_counters__v2;
    IData/*31:0*/ __Vdlyvval__WB_counters__v3;
    IData/*31:0*/ __Vdlyvval__WB_counters__v4;
    IData/*31:0*/ __Vdlyvval__WB_counters__v5;
    IData/*31:0*/ __Vdlyvval__WB_counters__v6;
    // Body
    vlSymsp->TOP__pipeline__my_WB_stage.__PVT__reg_busy_bits_WB = 0U;
    __Vdlyvval__WB_counters__v0 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                    << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                 >> 0x10U));
    __Vdlyvval__WB_counters__v1 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                    << 0x10U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                 >> 0x10U));
    __Vdlyvval__WB_counters__v2 = (1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                         >> 9U));
    __Vdlyvval__WB_counters__v3 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                    << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                 >> 0xaU));
    __Vdlyvval__WB_counters__v4 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                    << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                 >> 0xaU));
    __Vdlyvval__WB_counters__v5 = (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                               >> 0xaU)));
    __Vdlyvval__WB_counters__v6 = (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             << 0x1cU) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                               >> 4U)));
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U] 
        = __Vdlyvval__WB_counters__v0;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U] 
        = __Vdlyvval__WB_counters__v1;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U] 
        = __Vdlyvval__WB_counters__v2;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U] 
        = __Vdlyvval__WB_counters__v3;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U] 
        = __Vdlyvval__WB_counters__v4;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U] 
        = __Vdlyvval__WB_counters__v5;
    vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U] 
        = __Vdlyvval__WB_counters__v6;
}

VL_INLINE_OPT void Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__2(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__2\n"); );
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
        = (((QData)((IData)((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 9U)))) << 0x2aU) 
           | (((QData)((IData)((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                          << 0x1cU) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 4U))))) 
               << 0x25U) | (((QData)((IData)(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                               << 0x16U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                 >> 0xaU)))) 
                             << 5U) | (QData)((IData)(
                                                      (((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wcsrno_WB) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_csr_WB)))))));
}

VL_INLINE_OPT void Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__3(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__3\n"); );
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__last_WB_value__v0;
    CData/*0:0*/ __Vdlyvset__last_WB_value__v0;
    IData/*31:0*/ __Vdlyvval__last_WB_value__v0;
    // Body
    __Vdlyvset__last_WB_value__v0 = 0U;
    if ((0x200U & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
        __Vdlyvval__last_WB_value__v0 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                          << 0x16U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                            >> 0xaU));
        __Vdlyvset__last_WB_value__v0 = 1U;
        __Vdlyvdim0__last_WB_value__v0 = (0x1fU & (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                    << 0x1cU) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                      >> 4U)));
    }
    if (__Vdlyvset__last_WB_value__v0) {
        vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[__Vdlyvdim0__last_WB_value__v0] 
            = __Vdlyvval__last_WB_value__v0;
    }
}
