// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_2x4.h for the primary calling header

#include "Vdecoder_2x4__pch.h"
#include "Vdecoder_2x4___024root.h"

void Vdecoder_2x4___024root___eval_act(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_act\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdecoder_2x4___024root___nba_sequent__TOP__0(Vdecoder_2x4___024root* vlSelf);

void Vdecoder_2x4___024root___eval_nba(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_nba\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdecoder_2x4___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vdecoder_2x4___024root___nba_sequent__TOP__0(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___nba_sequent__TOP__0\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.decoder_2x4__DOT__z = ((IData)(vlSelfRef.enable) 
                                     & (3U == (IData)(vlSelfRef.ab_i)));
    vlSelfRef.decoder_2x4__DOT__y = ((IData)(vlSelfRef.enable) 
                                     & (2U == (IData)(vlSelfRef.ab_i)));
    vlSelfRef.decoder_2x4__DOT__x = ((IData)(vlSelfRef.enable) 
                                     & (1U == (IData)(vlSelfRef.ab_i)));
    vlSelfRef.decoder_2x4__DOT__w = ((IData)(vlSelfRef.enable) 
                                     & (0U == (IData)(vlSelfRef.ab_i)));
    vlSelfRef.wxyz_o = ((((IData)(vlSelfRef.decoder_2x4__DOT__z) 
                          << 3U) | ((IData)(vlSelfRef.decoder_2x4__DOT__y) 
                                    << 2U)) | (((IData)(vlSelfRef.decoder_2x4__DOT__x) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.decoder_2x4__DOT__w)));
}

void Vdecoder_2x4___024root___eval_triggers__act(Vdecoder_2x4___024root* vlSelf);

bool Vdecoder_2x4___024root___eval_phase__act(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_phase__act\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdecoder_2x4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdecoder_2x4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdecoder_2x4___024root___eval_phase__nba(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_phase__nba\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdecoder_2x4___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_2x4___024root___dump_triggers__nba(Vdecoder_2x4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_2x4___024root___dump_triggers__act(Vdecoder_2x4___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_2x4___024root___eval(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdecoder_2x4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("decoder_2x4.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdecoder_2x4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("decoder_2x4.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdecoder_2x4___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdecoder_2x4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdecoder_2x4___024root___eval_debug_assertions(Vdecoder_2x4___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root___eval_debug_assertions\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY(((vlSelfRef.ab_i & 0xfcU)))) {
        Verilated::overWidthError("ab_i");}
}
#endif  // VL_DEBUG
