// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_circuit.h for the primary calling header

#include "Vsimple_circuit__pch.h"
#include "Vsimple_circuit__Syms.h"
#include "Vsimple_circuit___024root.h"

void Vsimple_circuit___024root___ctor_var_reset(Vsimple_circuit___024root* vlSelf);

Vsimple_circuit___024root::Vsimple_circuit___024root(Vsimple_circuit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimple_circuit___024root___ctor_var_reset(this);
}

void Vsimple_circuit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsimple_circuit___024root::~Vsimple_circuit___024root() {
}
