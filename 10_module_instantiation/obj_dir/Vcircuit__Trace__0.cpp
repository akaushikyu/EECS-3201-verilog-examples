// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcircuit__Syms.h"


void Vcircuit___024root__trace_chg_0_sub_0(Vcircuit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcircuit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root__trace_chg_0\n"); );
    // Init
    Vcircuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcircuit___024root*>(voidSelf);
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcircuit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcircuit___024root__trace_chg_0_sub_0(Vcircuit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root__trace_chg_0_sub_0\n"); );
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.circuit__DOT__s1__DOT__tmp3));
        bufp->chgBit(oldp+1,(vlSelfRef.circuit__DOT__s2__DOT__tmp3));
        bufp->chgBit(oldp+2,(vlSelfRef.circuit__DOT__s3__DOT__tmp3));
        bufp->chgBit(oldp+3,(vlSelfRef.circuit__DOT__s1__DOT__tmp1));
        bufp->chgBit(oldp+4,(vlSelfRef.circuit__DOT__s1__DOT__tmp2));
        bufp->chgBit(oldp+5,(vlSelfRef.circuit__DOT__s2__DOT__tmp1));
        bufp->chgBit(oldp+6,(vlSelfRef.circuit__DOT__s2__DOT__tmp2));
        bufp->chgBit(oldp+7,(vlSelfRef.circuit__DOT__s3__DOT__tmp1));
        bufp->chgBit(oldp+8,(vlSelfRef.circuit__DOT__s3__DOT__tmp2));
    }
    bufp->chgCData(oldp+9,(vlSelfRef.wxyz_i),4);
    bufp->chgBit(oldp+10,(vlSelfRef.f));
    bufp->chgBit(oldp+11,((1U & (IData)(vlSelfRef.wxyz_i))));
    bufp->chgBit(oldp+12,((1U & ((IData)(vlSelfRef.wxyz_i) 
                                 >> 1U))));
    bufp->chgBit(oldp+13,((1U & ((IData)(vlSelfRef.wxyz_i) 
                                 >> 2U))));
    bufp->chgBit(oldp+14,((1U & ((IData)(vlSelfRef.wxyz_i) 
                                 >> 3U))));
}

void Vcircuit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuit___024root__trace_cleanup\n"); );
    // Init
    Vcircuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcircuit___024root*>(voidSelf);
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
