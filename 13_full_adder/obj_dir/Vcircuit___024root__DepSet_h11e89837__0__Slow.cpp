// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcircuit.h for the primary calling header

#include "Vcircuit__pch.h"
#include "Vcircuit___024root.h"

VL_ATTR_COLD void Vcircuit___024root___eval_static(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___eval_static\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcircuit___024root___eval_initial(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___eval_initial\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcircuit___024root___eval_final(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___eval_final\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuit___024root___dump_triggers__stl(Vcircuit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcircuit___024root___eval_phase__stl(Vcircuit___024root* vlSelf);

VL_ATTR_COLD void Vcircuit___024root___eval_settle(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___eval_settle\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcircuit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("circuit.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcircuit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuit___024root___dump_triggers__stl(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___dump_triggers__stl\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vcircuit___024root___ico_sequent__TOP__0(Vcircuit___024root* vlSelf);
VL_ATTR_COLD void Vcircuit___024root____Vm_traceActivitySetAll(Vcircuit___024root* vlSelf);

VL_ATTR_COLD void Vcircuit___024root___eval_stl(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___eval_stl\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcircuit___024root___ico_sequent__TOP__0(vlSelf);
        Vcircuit___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vcircuit___024root___eval_triggers__stl(Vcircuit___024root* vlSelf);

VL_ATTR_COLD bool Vcircuit___024root___eval_phase__stl(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___eval_phase__stl\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcircuit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcircuit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuit___024root___dump_triggers__ico(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___dump_triggers__ico\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcircuit___024root___dump_triggers__act(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___dump_triggers__act\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuit___024root___dump_triggers__nba(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___dump_triggers__nba\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcircuit___024root____Vm_traceActivitySetAll(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root____Vm_traceActivitySetAll\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vcircuit___024root___ctor_var_reset(Vcircuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root___ctor_var_reset\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->wxyz_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1273426393469048603ull);
    vlSelf->f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6217145520856553898ull);
    vlSelf->circuit__DOT__s1__DOT__tmp1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4369501664926893014ull);
    vlSelf->circuit__DOT__s1__DOT__tmp2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9394567800306739751ull);
    vlSelf->circuit__DOT__s1__DOT__tmp3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4981414715596786486ull);
    vlSelf->circuit__DOT__s2__DOT__tmp1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7078591949184597715ull);
    vlSelf->circuit__DOT__s2__DOT__tmp2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 449526535792118139ull);
    vlSelf->circuit__DOT__s2__DOT__tmp3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4671731004095578149ull);
    vlSelf->circuit__DOT__s3__DOT__tmp1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11532811965157011397ull);
    vlSelf->circuit__DOT__s3__DOT__tmp2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9180961436555954912ull);
    vlSelf->circuit__DOT__s3__DOT__tmp3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6610553379922079162ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
