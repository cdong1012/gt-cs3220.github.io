// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline_WB_STAGE.h"
#include "Vpipeline__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpipeline_WB_STAGE) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpipeline_WB_STAGE::__Vconfigure(Vpipeline__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vpipeline_WB_STAGE::~Vpipeline_WB_STAGE() {
}

void Vpipeline_WB_STAGE::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_WB_STAGE::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(144, __PVT__from_MEM_latch);
    __PVT__from_WB_to_FE = VL_RAND_RESET_I(1);
    __PVT__from_WB_to_DE = VL_RAND_RESET_Q(43);
    __PVT__from_WB_to_AGEX = VL_RAND_RESET_I(1);
    __PVT__from_WB_to_MEM = VL_RAND_RESET_I(1);
    __PVT__wr_reg_WB2 = VL_RAND_RESET_I(1);
    __PVT__wregno_WB2 = VL_RAND_RESET_I(5);
    __PVT__regval_WB2 = VL_RAND_RESET_I(32);
    __PVT__wcsrno_WB = VL_RAND_RESET_I(4);
    __PVT__wr_csr_WB = VL_RAND_RESET_I(1);
    __PVT__reg_busy_bits_WB = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            last_WB_value[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            WB_counters[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
