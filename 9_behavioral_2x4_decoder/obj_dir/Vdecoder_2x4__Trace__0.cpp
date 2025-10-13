// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder_2x4__Syms.h"


void Vdecoder_2x4___024root__trace_chg_0_sub_0(Vdecoder_2x4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdecoder_2x4___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_chg_0\n"); );
    // Init
    Vdecoder_2x4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_2x4___024root*>(voidSelf);
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdecoder_2x4___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdecoder_2x4___024root__trace_chg_0_sub_0(Vdecoder_2x4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_chg_0_sub_0\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.decoder_2x4__DOT__z));
        bufp->chgBit(oldp+1,(vlSelfRef.decoder_2x4__DOT__y));
        bufp->chgBit(oldp+2,(vlSelfRef.decoder_2x4__DOT__x));
        bufp->chgBit(oldp+3,(vlSelfRef.decoder_2x4__DOT__w));
    }
    bufp->chgBit(oldp+4,(vlSelfRef.enable));
    bufp->chgCData(oldp+5,(vlSelfRef.ab_i),2);
    bufp->chgCData(oldp+6,(vlSelfRef.wxyz_o),4);
}

void Vdecoder_2x4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_cleanup\n"); );
    // Init
    Vdecoder_2x4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_2x4___024root*>(voidSelf);
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
