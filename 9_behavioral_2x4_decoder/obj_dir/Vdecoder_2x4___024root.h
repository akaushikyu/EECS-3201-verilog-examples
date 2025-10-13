// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder_2x4.h for the primary calling header

#ifndef VERILATED_VDECODER_2X4___024ROOT_H_
#define VERILATED_VDECODER_2X4___024ROOT_H_  // guard

#include "verilated.h"


class Vdecoder_2x4__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder_2x4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(enable,0,0);
    VL_IN8(ab_i,1,0);
    VL_OUT8(wxyz_o,3,0);
    CData/*0:0*/ decoder_2x4__DOT__z;
    CData/*0:0*/ decoder_2x4__DOT__y;
    CData/*0:0*/ decoder_2x4__DOT__x;
    CData/*0:0*/ decoder_2x4__DOT__w;
    CData/*1:0*/ __Vtrigprevexpr___TOP__ab_i__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecoder_2x4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecoder_2x4___024root(Vdecoder_2x4__Syms* symsp, const char* v__name);
    ~Vdecoder_2x4___024root();
    VL_UNCOPYABLE(Vdecoder_2x4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
