// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCIRCUIT__SYMS_H_
#define VERILATED_VCIRCUIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcircuit.h"

// INCLUDE MODULE CLASSES
#include "Vcircuit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcircuit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcircuit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcircuit___024root             TOP;

    // CONSTRUCTORS
    Vcircuit__Syms(VerilatedContext* contextp, const char* namep, Vcircuit* modelp);
    ~Vcircuit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
