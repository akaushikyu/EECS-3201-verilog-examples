// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcircuit.h for the primary calling header

#ifndef VERILATED_VCIRCUIT___024ROOT_H_
#define VERILATED_VCIRCUIT___024ROOT_H_  // guard

#include "verilated.h"


class Vcircuit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcircuit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(wxyz_i,3,0);
    VL_OUT8(f,0,0);
    CData/*0:0*/ circuit__DOT__s1__DOT__tmp1;
    CData/*0:0*/ circuit__DOT__s1__DOT__tmp2;
    CData/*0:0*/ circuit__DOT__s1__DOT__tmp3;
    CData/*0:0*/ circuit__DOT__s2__DOT__tmp1;
    CData/*0:0*/ circuit__DOT__s2__DOT__tmp2;
    CData/*0:0*/ circuit__DOT__s2__DOT__tmp3;
    CData/*0:0*/ circuit__DOT__s3__DOT__tmp1;
    CData/*0:0*/ circuit__DOT__s3__DOT__tmp2;
    CData/*0:0*/ circuit__DOT__s3__DOT__tmp3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcircuit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcircuit___024root(Vcircuit__Syms* symsp, const char* v__name);
    ~Vcircuit___024root();
    VL_UNCOPYABLE(Vcircuit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
