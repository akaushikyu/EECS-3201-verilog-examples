// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"
#include "Vcomparator___024root.h"

void Vcomparator___024root___ico_sequent__TOP__0(Vcomparator___024root* vlSelf);

void Vcomparator___024root___eval_ico(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_ico\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcomparator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcomparator___024root___ico_sequent__TOP__0(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___ico_sequent__TOP__0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.eq = ((IData)(vlSelfRef.inp_1) == (IData)(vlSelfRef.inp_2));
    vlSelfRef.gt = ((IData)(vlSelfRef.inp_1) > (IData)(vlSelfRef.inp_2));
    vlSelfRef.lt = ((IData)(vlSelfRef.inp_1) < (IData)(vlSelfRef.inp_2));
}

void Vcomparator___024root___eval_triggers__ico(Vcomparator___024root* vlSelf);

bool Vcomparator___024root___eval_phase__ico(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__ico\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcomparator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcomparator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcomparator___024root___eval_act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcomparator___024root___eval_nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcomparator___024root___eval_triggers__act(Vcomparator___024root* vlSelf);

bool Vcomparator___024root___eval_phase__act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcomparator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcomparator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcomparator___024root___eval_phase__nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcomparator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__ico(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__nba(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__act(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG

void Vcomparator___024root___eval(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcomparator___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("comparator.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcomparator___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcomparator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("comparator.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcomparator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("comparator.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcomparator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcomparator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcomparator___024root___eval_debug_assertions(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_debug_assertions\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.inp_1 & 0xf0U)))) {
        Verilated::overWidthError("inp_1");}
    if (VL_UNLIKELY(((vlSelfRef.inp_2 & 0xf0U)))) {
        Verilated::overWidthError("inp_2");}
}
#endif  // VL_DEBUG
