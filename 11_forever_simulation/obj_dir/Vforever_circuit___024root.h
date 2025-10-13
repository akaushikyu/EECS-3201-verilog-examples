// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vforever_circuit.h for the primary calling header

#ifndef VERILATED_VFOREVER_CIRCUIT___024ROOT_H_
#define VERILATED_VFOREVER_CIRCUIT___024ROOT_H_  // guard

#include "verilated.h"


class Vforever_circuit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vforever_circuit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(b,0,0);
    VL_IN8(c,0,0);
    CData/*0:0*/ forever_circuit__DOT__tmp2;
    VL_IN8(a,0,0);
    VL_OUT8(f,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__1;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__2;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vforever_circuit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vforever_circuit___024root(Vforever_circuit__Syms* symsp, const char* v__name);
    ~Vforever_circuit___024root();
    VL_UNCOPYABLE(Vforever_circuit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
