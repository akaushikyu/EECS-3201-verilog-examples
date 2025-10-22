// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"
#include "Vcomparator___024root.h"

VL_ATTR_COLD void Vcomparator___024root___eval_static(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_static\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcomparator___024root___eval_initial(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_initial\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcomparator___024root___eval_final(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_final\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__stl(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcomparator___024root___eval_phase__stl(Vcomparator___024root* vlSelf);

VL_ATTR_COLD void Vcomparator___024root___eval_settle(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_settle\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcomparator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("comparator.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcomparator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__stl(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___dump_triggers__stl\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcomparator___024root___ico_sequent__TOP__0(Vcomparator___024root* vlSelf);

VL_ATTR_COLD void Vcomparator___024root___eval_stl(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_stl\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcomparator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vcomparator___024root___eval_triggers__stl(Vcomparator___024root* vlSelf);

VL_ATTR_COLD bool Vcomparator___024root___eval_phase__stl(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__stl\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcomparator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcomparator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__ico(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___dump_triggers__ico\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___dump_triggers__act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___dump_triggers__nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcomparator___024root___ctor_var_reset(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___ctor_var_reset\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->inp_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12960145724498640179ull);
    vlSelf->inp_2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2019063296402204914ull);
    vlSelf->eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3626420587408340920ull);
    vlSelf->gt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3567955492495217351ull);
    vlSelf->lt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11733701658396108522ull);
}
