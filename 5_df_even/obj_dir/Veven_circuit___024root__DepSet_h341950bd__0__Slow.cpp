// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Veven_circuit.h for the primary calling header

#include "Veven_circuit__pch.h"
#include "Veven_circuit___024root.h"

VL_ATTR_COLD void Veven_circuit___024root___eval_static(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___eval_static\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Veven_circuit___024root___eval_initial(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___eval_initial\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Veven_circuit___024root___eval_final(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___eval_final\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Veven_circuit___024root___dump_triggers__stl(Veven_circuit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Veven_circuit___024root___eval_phase__stl(Veven_circuit___024root* vlSelf);

VL_ATTR_COLD void Veven_circuit___024root___eval_settle(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___eval_settle\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Veven_circuit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("even_circuit.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Veven_circuit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Veven_circuit___024root___dump_triggers__stl(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___dump_triggers__stl\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Veven_circuit___024root___ico_sequent__TOP__0(Veven_circuit___024root* vlSelf);

VL_ATTR_COLD void Veven_circuit___024root___eval_stl(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___eval_stl\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Veven_circuit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Veven_circuit___024root___eval_triggers__stl(Veven_circuit___024root* vlSelf);

VL_ATTR_COLD bool Veven_circuit___024root___eval_phase__stl(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___eval_phase__stl\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Veven_circuit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Veven_circuit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Veven_circuit___024root___dump_triggers__ico(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___dump_triggers__ico\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Veven_circuit___024root___dump_triggers__act(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___dump_triggers__act\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Veven_circuit___024root___dump_triggers__nba(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___dump_triggers__nba\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Veven_circuit___024root___ctor_var_reset(Veven_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root___ctor_var_reset\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9409450202036847209ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11123243248953317070ull);
    vlSelf->z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9847161165854524911ull);
    vlSelf->f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6217145520856553898ull);
}
