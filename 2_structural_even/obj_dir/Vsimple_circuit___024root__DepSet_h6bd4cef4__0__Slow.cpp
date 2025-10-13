// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_circuit.h for the primary calling header

#include "Vsimple_circuit__pch.h"
#include "Vsimple_circuit___024root.h"

VL_ATTR_COLD void Vsimple_circuit___024root___eval_static(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_static\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsimple_circuit___024root___eval_initial(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_initial\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsimple_circuit___024root___eval_final(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_final\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__stl(Vsimple_circuit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsimple_circuit___024root___eval_phase__stl(Vsimple_circuit___024root* vlSelf);

VL_ATTR_COLD void Vsimple_circuit___024root___eval_settle(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_settle\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsimple_circuit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("simple_circuit.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsimple_circuit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__stl(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___dump_triggers__stl\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vsimple_circuit___024root___ico_sequent__TOP__0(Vsimple_circuit___024root* vlSelf);

VL_ATTR_COLD void Vsimple_circuit___024root___eval_stl(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_stl\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsimple_circuit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsimple_circuit___024root___eval_triggers__stl(Vsimple_circuit___024root* vlSelf);

VL_ATTR_COLD bool Vsimple_circuit___024root___eval_phase__stl(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_phase__stl\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsimple_circuit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsimple_circuit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__ico(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___dump_triggers__ico\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__act(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___dump_triggers__act\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__nba(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___dump_triggers__nba\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_circuit___024root___ctor_var_reset(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___ctor_var_reset\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9409450202036847209ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11123243248953317070ull);
    vlSelf->z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9847161165854524911ull);
    vlSelf->f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6217145520856553898ull);
    vlSelf->simple_circuit__DOT____VdfgRegularize_h470a8644_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4417959326802981837ull);
    vlSelf->simple_circuit__DOT____VdfgRegularize_h470a8644_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8725604819609751073ull);
}
