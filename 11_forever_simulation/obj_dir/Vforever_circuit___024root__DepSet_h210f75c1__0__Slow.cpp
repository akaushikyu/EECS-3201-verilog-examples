// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vforever_circuit.h for the primary calling header

#include "Vforever_circuit__pch.h"
#include "Vforever_circuit__Syms.h"
#include "Vforever_circuit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__stl(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vforever_circuit___024root___eval_triggers__stl(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_triggers__stl\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, ((IData)(vlSelfRef.forever_circuit__DOT__tmp2) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__0 
        = vlSelfRef.forever_circuit__DOT__tmp2;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vforever_circuit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
