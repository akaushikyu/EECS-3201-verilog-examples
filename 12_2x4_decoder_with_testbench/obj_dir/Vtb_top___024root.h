// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_top___024unit;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_top__DOT__tb_enable;
    CData/*1:0*/ tb_top__DOT__tb_ab;
    CData/*2:0*/ tb_top__DOT__tb_xy;
    CData/*2:0*/ tb_top__DOT__tb_cd;
    CData/*3:0*/ tb_top__DOT__tb_wxyz;
    CData/*0:0*/ tb_top__DOT__dut__DOT__z;
    CData/*0:0*/ tb_top__DOT__dut__DOT__y;
    CData/*0:0*/ tb_top__DOT__dut__DOT__x;
    CData/*0:0*/ tb_top__DOT__dut__DOT__w;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__tb_ab__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__tb_enable__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__tb_wxyz__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* v__name);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
