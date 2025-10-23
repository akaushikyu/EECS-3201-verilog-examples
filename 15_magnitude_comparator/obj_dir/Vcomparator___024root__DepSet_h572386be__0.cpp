// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"
#include "Vcomparator__Syms.h"
#include "Vcomparator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__ico(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomparator___024root___eval_triggers__ico(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_triggers__ico\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcomparator___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__act(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomparator___024root___eval_triggers__act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_triggers__act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcomparator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
