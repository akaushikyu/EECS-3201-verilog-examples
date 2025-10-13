// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_circuit.h for the primary calling header

#include "Vsimple_circuit__pch.h"
#include "Vsimple_circuit__Syms.h"
#include "Vsimple_circuit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__ico(Vsimple_circuit___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_circuit___024root___eval_triggers__ico(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_triggers__ico\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_circuit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__act(Vsimple_circuit___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_circuit___024root___eval_triggers__act(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_triggers__act\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_circuit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
