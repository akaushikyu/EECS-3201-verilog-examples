// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder_3x8.h for the primary calling header

#include "Vdecoder_3x8__pch.h"
#include "Vdecoder_3x8___024root.h"

void Vdecoder_3x8___024root___ico_sequent__TOP__0(Vdecoder_3x8___024root* vlSelf);

void Vdecoder_3x8___024root___eval_ico(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_ico\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdecoder_3x8___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vdecoder_3x8__ConstPool__TABLE_h4eb56a11_0;

VL_INLINE_OPT void Vdecoder_3x8___024root___ico_sequent__TOP__0(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___ico_sequent__TOP__0\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.in_i) << 1U) 
                    | (IData)(vlSelfRef.enable));
    vlSelfRef.out_o = Vdecoder_3x8__ConstPool__TABLE_h4eb56a11_0
        [__Vtableidx1];
}

void Vdecoder_3x8___024root___eval_triggers__ico(Vdecoder_3x8___024root* vlSelf);

bool Vdecoder_3x8___024root___eval_phase__ico(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_phase__ico\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdecoder_3x8___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdecoder_3x8___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdecoder_3x8___024root___eval_act(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_act\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdecoder_3x8___024root___eval_nba(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_nba\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdecoder_3x8___024root___eval_triggers__act(Vdecoder_3x8___024root* vlSelf);

bool Vdecoder_3x8___024root___eval_phase__act(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_phase__act\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdecoder_3x8___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdecoder_3x8___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdecoder_3x8___024root___eval_phase__nba(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_phase__nba\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdecoder_3x8___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_3x8___024root___dump_triggers__ico(Vdecoder_3x8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_3x8___024root___dump_triggers__nba(Vdecoder_3x8___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder_3x8___024root___dump_triggers__act(Vdecoder_3x8___024root* vlSelf);
#endif  // VL_DEBUG

void Vdecoder_3x8___024root___eval(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdecoder_3x8___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("decoder_3x8.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdecoder_3x8___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdecoder_3x8___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("decoder_3x8.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdecoder_3x8___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("decoder_3x8.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdecoder_3x8___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdecoder_3x8___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdecoder_3x8___024root___eval_debug_assertions(Vdecoder_3x8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root___eval_debug_assertions\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY(((vlSelfRef.in_i & 0xf8U)))) {
        Verilated::overWidthError("in_i");}
}
#endif  // VL_DEBUG
