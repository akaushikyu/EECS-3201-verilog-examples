// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFOREVER_CIRCUIT__SYMS_H_
#define VERILATED_VFOREVER_CIRCUIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vforever_circuit.h"

// INCLUDE MODULE CLASSES
#include "Vforever_circuit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vforever_circuit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vforever_circuit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vforever_circuit___024root     TOP;

    // CONSTRUCTORS
    Vforever_circuit__Syms(VerilatedContext* contextp, const char* namep, Vforever_circuit* modelp);
    ~Vforever_circuit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
