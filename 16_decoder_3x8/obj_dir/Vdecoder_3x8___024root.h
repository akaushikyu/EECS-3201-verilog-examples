// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder_3x8.h for the primary calling header

#ifndef VERILATED_VDECODER_3X8___024ROOT_H_
#define VERILATED_VDECODER_3X8___024ROOT_H_  // guard

#include "verilated.h"


class Vdecoder_3x8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder_3x8___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(enable,0,0);
    VL_IN8(in_i,2,0);
    VL_OUT8(out_o,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecoder_3x8__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecoder_3x8___024root(Vdecoder_3x8__Syms* symsp, const char* v__name);
    ~Vdecoder_3x8___024root();
    VL_UNCOPYABLE(Vdecoder_3x8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
