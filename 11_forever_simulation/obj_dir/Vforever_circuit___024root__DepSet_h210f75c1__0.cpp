// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vforever_circuit.h for the primary calling header

#include "Vforever_circuit__pch.h"
#include "Vforever_circuit__Syms.h"
#include "Vforever_circuit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__ico(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG

void Vforever_circuit___024root___eval_triggers__ico(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_triggers__ico\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.setBit(1U, ((IData)(vlSelfRef.forever_circuit__DOT__tmp2) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__1 
        = vlSelfRef.forever_circuit__DOT__tmp2;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vforever_circuit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__act(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG

void Vforever_circuit___024root___eval_triggers__act(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_triggers__act\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.forever_circuit__DOT__tmp2) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__2)));
    vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__2 
        = vlSelfRef.forever_circuit__DOT__tmp2;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vforever_circuit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
