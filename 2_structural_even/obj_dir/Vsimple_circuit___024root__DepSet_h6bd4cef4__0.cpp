// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_circuit.h for the primary calling header

#include "Vsimple_circuit__pch.h"
#include "Vsimple_circuit___024root.h"

void Vsimple_circuit___024root___ico_sequent__TOP__0(Vsimple_circuit___024root* vlSelf);

void Vsimple_circuit___024root___eval_ico(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_ico\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsimple_circuit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsimple_circuit___024root___ico_sequent__TOP__0(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___ico_sequent__TOP__0\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.simple_circuit__DOT____VdfgRegularize_h470a8644_0_1 
        = (1U & ((~ (IData)(vlSelfRef.y)) & (~ (IData)(vlSelfRef.z))));
    vlSelfRef.simple_circuit__DOT____VdfgRegularize_h470a8644_0_0 
        = ((~ (IData)(vlSelfRef.z)) & (IData)(vlSelfRef.y));
    vlSelfRef.f = (((~ (IData)(vlSelfRef.x)) & (IData)(vlSelfRef.simple_circuit__DOT____VdfgRegularize_h470a8644_0_1)) 
                   | (((~ (IData)(vlSelfRef.x)) & (IData)(vlSelfRef.simple_circuit__DOT____VdfgRegularize_h470a8644_0_0)) 
                      | ((IData)(vlSelfRef.x) & ((IData)(vlSelfRef.simple_circuit__DOT____VdfgRegularize_h470a8644_0_1) 
                                                 | (IData)(vlSelfRef.simple_circuit__DOT____VdfgRegularize_h470a8644_0_0)))));
}

void Vsimple_circuit___024root___eval_triggers__ico(Vsimple_circuit___024root* vlSelf);

bool Vsimple_circuit___024root___eval_phase__ico(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_phase__ico\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsimple_circuit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsimple_circuit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsimple_circuit___024root___eval_act(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_act\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsimple_circuit___024root___eval_nba(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_nba\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsimple_circuit___024root___eval_triggers__act(Vsimple_circuit___024root* vlSelf);

bool Vsimple_circuit___024root___eval_phase__act(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_phase__act\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsimple_circuit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsimple_circuit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsimple_circuit___024root___eval_phase__nba(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_phase__nba\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsimple_circuit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__ico(Vsimple_circuit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__nba(Vsimple_circuit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_circuit___024root___dump_triggers__act(Vsimple_circuit___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_circuit___024root___eval(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsimple_circuit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("simple_circuit.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsimple_circuit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsimple_circuit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("simple_circuit.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsimple_circuit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("simple_circuit.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsimple_circuit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsimple_circuit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsimple_circuit___024root___eval_debug_assertions(Vsimple_circuit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_circuit___024root___eval_debug_assertions\n"); );
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.x & 0xfeU)))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY(((vlSelfRef.y & 0xfeU)))) {
        Verilated::overWidthError("y");}
    if (VL_UNLIKELY(((vlSelfRef.z & 0xfeU)))) {
        Verilated::overWidthError("z");}
}
#endif  // VL_DEBUG
