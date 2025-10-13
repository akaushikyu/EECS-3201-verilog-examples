// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Veven_circuit.h for the primary calling header

#ifndef VERILATED_VEVEN_CIRCUIT___024ROOT_H_
#define VERILATED_VEVEN_CIRCUIT___024ROOT_H_  // guard

#include "verilated.h"


class Veven_circuit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Veven_circuit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,0,0);
    VL_IN8(y,0,0);
    VL_IN8(z,0,0);
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
    Veven_circuit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Veven_circuit___024root(Veven_circuit__Syms* symsp, const char* v__name);
    ~Veven_circuit___024root();
    VL_UNCOPYABLE(Veven_circuit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
