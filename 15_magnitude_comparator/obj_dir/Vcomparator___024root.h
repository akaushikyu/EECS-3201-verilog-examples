// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcomparator.h for the primary calling header

#ifndef VERILATED_VCOMPARATOR___024ROOT_H_
#define VERILATED_VCOMPARATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vcomparator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcomparator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(inp_1,3,0);
    VL_IN8(inp_2,3,0);
    VL_OUT8(eq,0,0);
    VL_OUT8(gt,0,0);
    VL_OUT8(lt,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcomparator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcomparator___024root(Vcomparator__Syms* symsp, const char* v__name);
    ~Vcomparator___024root();
    VL_UNCOPYABLE(Vcomparator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
