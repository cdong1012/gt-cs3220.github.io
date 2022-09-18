// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline.h"
#include "Vpipeline__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpipeline) {
    Vpipeline__Syms* __restrict vlSymsp = __VlSymsp = new Vpipeline__Syms(this, name());
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(pipeline, Vpipeline_pipeline);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpipeline::__Vconfigure(Vpipeline__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vpipeline::~Vpipeline() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpipeline::_eval_initial(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline::_eval_initial\n"); );
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline._initial__TOP__pipeline__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vpipeline::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline::final\n"); );
    // Variables
    Vpipeline__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpipeline::_eval_settle(Vpipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline::_eval_settle\n"); );
    Vpipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__pipeline__my_WB_stage._settle__TOP__pipeline__my_WB_stage__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__pipeline._settle__TOP__pipeline__5(vlSymsp);
}

void Vpipeline::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
