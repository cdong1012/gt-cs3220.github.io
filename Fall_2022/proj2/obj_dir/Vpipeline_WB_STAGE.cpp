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
    CData/*4:0*/ __Vdlyvdim0__last_WB_value__v0;
    CData/*0:0*/ __Vdlyvset__last_WB_value__v0;
    IData/*31:0*/ __Vdlyvval__last_WB_value__v0;
    // Body
    __Vdlyvset__last_WB_value__v0 = 0U;
    if (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_reg_WB) {
        __Vdlyvval__last_WB_value__v0 = vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB;
        __Vdlyvset__last_WB_value__v0 = 1U;
        __Vdlyvdim0__last_WB_value__v0 = vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wregno_WB;
    }
    if (__Vdlyvset__last_WB_value__v0) {
        vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[__Vdlyvdim0__last_WB_value__v0] 
            = __Vdlyvval__last_WB_value__v0;
    }
}

VL_INLINE_OPT void Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__2(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_sequent__TOP__pipeline__my_WB_stage__2\n"); );
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
    __Vdlyvval__WB_counters__v0 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                    << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                 >> 0xaU));
    __Vdlyvval__WB_counters__v1 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                    << 0x16U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                 >> 0xaU));
    __Vdlyvval__WB_counters__v2 = vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wr_reg_WB;
    __Vdlyvval__WB_counters__v3 = vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB;
    __Vdlyvval__WB_counters__v4 = ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                    << 0x1cU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                 >> 4U));
    __Vdlyvval__WB_counters__v5 = (0x3fU & ((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             << 0x1cU) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                               >> 4U)));
    __Vdlyvval__WB_counters__v6 = vlSymsp->TOP__pipeline__my_WB_stage.__PVT__wregno_WB;
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
