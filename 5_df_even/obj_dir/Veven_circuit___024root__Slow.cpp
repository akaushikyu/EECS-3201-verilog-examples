// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Veven_circuit.h for the primary calling header

#include "Veven_circuit__pch.h"
#include "Veven_circuit__Syms.h"
#include "Veven_circuit___024root.h"

void Veven_circuit___024root___ctor_var_reset(Veven_circuit___024root* vlSelf);

Veven_circuit___024root::Veven_circuit___024root(Veven_circuit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Veven_circuit___024root___ctor_var_reset(this);
}

void Veven_circuit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Veven_circuit___024root::~Veven_circuit___024root() {
}
