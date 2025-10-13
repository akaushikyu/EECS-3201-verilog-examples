// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_2x4.h for the primary calling header

#include "Vdecoder_2x4__pch.h"
#include "Vdecoder_2x4___024root.h"

VL_ATTR_COLD void Vdecoder_2x4___024root___eval_static(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_static\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ab_i__0 = vlSelfRef.ab_i;
}

VL_ATTR_COLD void Vdecoder_2x4___024root___eval_initial(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_initial\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecoder_2x4___024root___eval_final(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_final\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdecoder_2x4___024root___eval_settle(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_settle\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_2x4___024root___dump_triggers__act(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___dump_triggers__act\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( ab_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_2x4___024root___dump_triggers__nba(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___dump_triggers__nba\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( ab_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecoder_2x4___024root___ctor_var_reset(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___ctor_var_reset\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->ab_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11112051954856911882ull);
    vlSelf->wxyz_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5041502852616481251ull);
    vlSelf->decoder_2x4__DOT__z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6240857484231059170ull);
    vlSelf->decoder_2x4__DOT__y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3715024913666102445ull);
    vlSelf->decoder_2x4__DOT__x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7610823469135276803ull);
    vlSelf->decoder_2x4__DOT__w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16603550622589048025ull);
    vlSelf->__Vtrigprevexpr___TOP__ab_i__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1832074229248311463ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
