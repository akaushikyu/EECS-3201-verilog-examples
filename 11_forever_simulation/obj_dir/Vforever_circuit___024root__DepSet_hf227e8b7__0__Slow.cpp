// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vforever_circuit.h for the primary calling header

#include "Vforever_circuit__pch.h"
#include "Vforever_circuit___024root.h"

VL_ATTR_COLD void Vforever_circuit___024root___eval_static(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_static\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__0 
        = vlSelfRef.forever_circuit__DOT__tmp2;
    vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__1 
        = vlSelfRef.forever_circuit__DOT__tmp2;
    vlSelfRef.__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__2 
        = vlSelfRef.forever_circuit__DOT__tmp2;
}

VL_ATTR_COLD void Vforever_circuit___024root___eval_initial__TOP(Vforever_circuit___024root* vlSelf);

VL_ATTR_COLD void Vforever_circuit___024root___eval_initial(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_initial\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vforever_circuit___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vforever_circuit___024root___eval_initial__TOP(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_initial__TOP\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.forever_circuit__DOT__tmp2 = vlSelfRef.a;
}

VL_ATTR_COLD void Vforever_circuit___024root___eval_final(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_final\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__stl(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vforever_circuit___024root___eval_phase__stl(Vforever_circuit___024root* vlSelf);

VL_ATTR_COLD void Vforever_circuit___024root___eval_settle(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_settle\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vforever_circuit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("forever_circuit.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vforever_circuit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__stl(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___dump_triggers__stl\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] forever_circuit.tmp2)\n");
    }
}
#endif  // VL_DEBUG

void Vforever_circuit___024root___ico_comb__TOP__0(Vforever_circuit___024root* vlSelf);

VL_ATTR_COLD void Vforever_circuit___024root___eval_stl(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_stl\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vforever_circuit___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vforever_circuit___024root___eval_triggers__stl(Vforever_circuit___024root* vlSelf);

VL_ATTR_COLD bool Vforever_circuit___024root___eval_phase__stl(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_phase__stl\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vforever_circuit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vforever_circuit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__ico(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___dump_triggers__ico\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] forever_circuit.tmp2)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__act(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___dump_triggers__act\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] forever_circuit.tmp2)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__nba(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___dump_triggers__nba\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] forever_circuit.tmp2)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vforever_circuit___024root___ctor_var_reset(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___ctor_var_reset\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900879642891266615ull);
    vlSelf->c = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15598372446745583797ull);
    vlSelf->f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6217145520856553898ull);
    vlSelf->forever_circuit__DOT__tmp2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 894167910650747202ull);
    vlSelf->__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11476096660962311815ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7394327901593675955ull);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__forever_circuit__DOT__tmp2__2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12604242653208493237ull);
    vlSelf->__VactDidInit = 0;
}
