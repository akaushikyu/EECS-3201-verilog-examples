// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_2x4.h for the primary calling header

#include "Vdecoder_2x4__pch.h"
#include "Vdecoder_2x4__Syms.h"
#include "Vdecoder_2x4___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_2x4___024root___dump_triggers__act(Vdecoder_2x4___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_2x4___024root___eval_triggers__act(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_triggers__act\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.ab_i) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ab_i__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__ab_i__0 = vlSelfRef.ab_i;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder_2x4___024root___dump_triggers__act(vlSelf);
    }
#endif
}
