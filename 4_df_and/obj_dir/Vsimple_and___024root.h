// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimple_and.h for the primary calling header

#ifndef VERILATED_VSIMPLE_AND___024ROOT_H_
#define VERILATED_VSIMPLE_AND___024ROOT_H_  // guard

#include "verilated.h"


class Vsimple_and__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsimple_and___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsimple_and__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimple_and___024root(Vsimple_and__Syms* symsp, const char* v__name);
    ~Vsimple_and___024root();
    VL_UNCOPYABLE(Vsimple_and___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
