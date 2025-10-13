// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vforever_circuit.h for the primary calling header

#include "Vforever_circuit__pch.h"
#include "Vforever_circuit___024root.h"

void Vforever_circuit___024root___ico_comb__TOP__0(Vforever_circuit___024root* vlSelf);

void Vforever_circuit___024root___eval_ico(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_ico\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vforever_circuit___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vforever_circuit___024root___ico_comb__TOP__0(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___ico_comb__TOP__0\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ forever_circuit__DOT__tmp1;
    forever_circuit__DOT__tmp1 = 0;
    // Body
    forever_circuit__DOT__tmp1 = ((IData)(vlSelfRef.forever_circuit__DOT__tmp2) 
                                  ^ (IData)(vlSelfRef.b));
    vlSelfRef.forever_circuit__DOT__tmp2 = ((IData)(forever_circuit__DOT__tmp1) 
                                            | (IData)(vlSelfRef.c));
    vlSelfRef.f = vlSelfRef.forever_circuit__DOT__tmp2;
}

void Vforever_circuit___024root___eval_triggers__ico(Vforever_circuit___024root* vlSelf);

bool Vforever_circuit___024root___eval_phase__ico(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_phase__ico\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vforever_circuit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vforever_circuit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vforever_circuit___024root___eval_act(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_act\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vforever_circuit___024root___ico_comb__TOP__0(vlSelf);
    }
}

void Vforever_circuit___024root___eval_nba(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_nba\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vforever_circuit___024root___eval_triggers__act(Vforever_circuit___024root* vlSelf);

bool Vforever_circuit___024root___eval_phase__act(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_phase__act\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vforever_circuit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vforever_circuit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vforever_circuit___024root___eval_phase__nba(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_phase__nba\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vforever_circuit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__ico(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__nba(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vforever_circuit___024root___dump_triggers__act(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG

void Vforever_circuit___024root___eval(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vforever_circuit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("forever_circuit.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vforever_circuit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vforever_circuit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("forever_circuit.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vforever_circuit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("forever_circuit.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vforever_circuit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vforever_circuit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vforever_circuit___024root___eval_debug_assertions(Vforever_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root___eval_debug_assertions\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY(((vlSelfRef.c & 0xfeU)))) {
        Verilated::overWidthError("c");}
}
#endif  // VL_DEBUG
