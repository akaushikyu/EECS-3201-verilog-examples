// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcircuit.h for the primary calling header

#include "Vcircuit__pch.h"
#include "Vcircuit__Syms.h"
#include "Vcircuit___024root.h"

void Vcircuit___024root___ctor_var_reset(Vcircuit___024root* vlSelf);

Vcircuit___024root::Vcircuit___024root(Vcircuit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcircuit___024root___ctor_var_reset(this);
}

void Vcircuit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcircuit___024root::~Vcircuit___024root() {
}
