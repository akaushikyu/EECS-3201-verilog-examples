// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_3x8.h for the primary calling header

#include "Vdecoder_3x8__pch.h"
#include "Vdecoder_3x8__Syms.h"
#include "Vdecoder_3x8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_3x8___024root___dump_triggers__ico(Vdecoder_3x8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_3x8___024root___eval_triggers__ico(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_triggers__ico\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder_3x8___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_3x8___024root___dump_triggers__act(Vdecoder_3x8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_3x8___024root___eval_triggers__act(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_triggers__act\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder_3x8___024root___dump_triggers__act(vlSelf);
    }
#endif
}
