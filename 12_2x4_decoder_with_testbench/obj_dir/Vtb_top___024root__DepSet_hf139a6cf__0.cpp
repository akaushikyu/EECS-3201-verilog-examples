// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"
#include "Vtb_top__Syms.h"
#include "Vtb_top___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.tb_top__DOT__tb_enable = 0U;
    vlSelfRef.tb_top__DOT__tb_ab = 0U;
    vlSelfRef.tb_top__DOT__tb_xy = 7U;
    vlSelfRef.tb_top__DOT__tb_cd = 5U;
    VL_WRITEF_NX("Result of data1(7) && data2(5) : 1\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb_top.v", 
                                         32);
    vlSelfRef.tb_top__DOT__tb_ab = 0U;
    vlSelfRef.tb_top__DOT__tb_enable = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "tb_top.v", 
                                         36);
    vlSelfRef.tb_top__DOT__tb_ab = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "tb_top.v", 
                                         39);
    vlSelfRef.tb_top__DOT__tb_ab = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2dULL, nullptr, 
                                         "tb_top.v", 
                                         42);
    vlSelfRef.tb_top__DOT__tb_ab = 2U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(Vtb_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_top__DOT__tb_ab) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__tb_ab__0)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.tb_top__DOT__tb_enable) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__tb_enable__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.tb_top__DOT__tb_wxyz) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__tb_wxyz__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__tb_ab__0 
        = vlSelfRef.tb_top__DOT__tb_ab;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__tb_enable__0 
        = vlSelfRef.tb_top__DOT__tb_enable;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__tb_wxyz__0 
        = vlSelfRef.tb_top__DOT__tb_wxyz;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("time=%0t, enable = %x: ab = %x, --> wxyz = %x\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.tb_top__DOT__tb_enable),
                     2,vlSelfRef.tb_top__DOT__tb_ab,
                     4,(IData)(vlSelfRef.tb_top__DOT__tb_wxyz));
    }
}
