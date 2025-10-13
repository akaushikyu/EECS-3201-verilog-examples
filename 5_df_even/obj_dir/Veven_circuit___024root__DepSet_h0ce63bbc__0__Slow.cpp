// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Veven_circuit.h for the primary calling header

#include "Veven_circuit__pch.h"
#include "Veven_circuit__Syms.h"
#include "Veven_circuit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Veven_circuit___024root___dump_triggers__stl(Veven_circuit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Veven_circuit___024root___eval_triggers__stl(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___eval_triggers__stl\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Veven_circuit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
