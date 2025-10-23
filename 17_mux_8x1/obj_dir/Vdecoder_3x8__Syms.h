// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODER_3X8__SYMS_H_
#define VERILATED_VDECODER_3X8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecoder_3x8.h"

// INCLUDE MODULE CLASSES
#include "Vdecoder_3x8___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdecoder_3x8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecoder_3x8* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecoder_3x8___024root         TOP;

    // CONSTRUCTORS
    Vdecoder_3x8__Syms(VerilatedContext* contextp, const char* namep, Vdecoder_3x8* modelp);
    ~Vdecoder_3x8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
