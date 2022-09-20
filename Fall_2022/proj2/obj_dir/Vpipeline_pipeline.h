// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef _VPIPELINE_PIPELINE_H_
#define _VPIPELINE_PIPELINE_H_  // guard

#include "verilated_heavy.h"
#include "Vpipeline__Dpi.h"

//==========

class Vpipeline__Syms;
class Vpipeline_VerilatedVcd;
class Vpipeline_WB_STAGE;


//----------

VL_MODULE(Vpipeline_pipeline) {
  public:
    // CELLS
    Vpipeline_WB_STAGE* my_WB_stage;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__from_AGEX_to_FE;
    CData/*0:0*/ __PVT__from_MEM_to_FE;
    CData/*0:0*/ __PVT__from_AGEX_to_DE;
    CData/*0:0*/ __PVT__from_MEM_to_DE;
    CData/*0:0*/ __PVT__from_MEM_to_AGEX;
    CData/*5:0*/ __PVT__my_DE_stage__DOT__op_I_DE;
    CData/*3:0*/ __PVT__my_DE_stage__DOT__type_I_DE;
    CData/*2:0*/ __PVT__my_DE_stage__DOT__type_immediate_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__stall_signal_DE;
    CData/*0:0*/ __PVT__my_AGEX_stage__DOT__wr_reg_AGEX;
    CData/*0:0*/ __PVT__my_MEM_stage__DOT__wr_mem_MEM;
    IData/*31:0*/ __PVT__cycle_count;
    WData/*131:0*/ __PVT__my_FE_stage__DOT__FE_latch[5];
    IData/*31:0*/ __PVT__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__pcplus_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_AGEX;
    WData/*238:0*/ __PVT__my_DE_stage__DOT__DE_latch[8];
    IData/*31:0*/ __PVT__my_DE_stage__DOT__RR_arith_result_DE;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__sxt_imm_DE;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__reg_busy_bits_DE;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__unnamedblk2__DOT__i;
    WData/*143:0*/ __PVT__my_AGEX_stage__DOT__AGEX_latch[5];
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__regval_AGEX;
    IData/*31:0*/ __PVT__my_AGEX_stage__DOT__busy_bits_AGEX;
    WData/*143:0*/ __PVT__my_MEM_stage__DOT__MEM_latch[5];
    IData/*31:0*/ __PVT__my_MEM_stage__DOT__memaddr_MEM;
    IData/*31:0*/ __PVT__my_MEM_stage__DOT__wr_val_MEM;
    IData/*31:0*/ __PVT__my_MEM_stage__DOT__busy_bits_MEM;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__imem[16384];
    IData/*31:0*/ __PVT__my_DE_stage__DOT__regs[32];
    IData/*31:0*/ __PVT__my_DE_stage__DOT__csr_regs[16];
    IData/*31:0*/ __PVT__my_MEM_stage__DOT__dmem[16384];
    
    // LOCAL VARIABLES
    CData/*5:0*/ __Vtableidx1;
    CData/*1:0*/ __Vtablechg1[64];
    static CData/*3:0*/ __Vtable1___PVT__my_DE_stage__DOT__type_I_DE[64];
    static CData/*2:0*/ __Vtable1___PVT__my_DE_stage__DOT__type_immediate_DE[64];
    
    // INTERNAL VARIABLES
  private:
    Vpipeline__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpipeline_pipeline);  ///< Copying not allowed
  public:
    Vpipeline_pipeline(const char* name = "TOP");
    ~Vpipeline_pipeline();
    
    // INTERNAL METHODS
    void __Vconfigure(Vpipeline__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__pipeline__1(Vpipeline__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__pipeline__2(Vpipeline__Syms* __restrict vlSymsp);
    static void _sequent__TOP__pipeline__3(Vpipeline__Syms* __restrict vlSymsp);
    static void _settle__TOP__pipeline__4(Vpipeline__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard