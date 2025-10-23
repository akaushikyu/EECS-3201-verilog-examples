// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder_3x8__Syms.h"


void Vdecoder_3x8___024root__trace_chg_0_sub_0(Vdecoder_3x8___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdecoder_3x8___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_chg_0\n"); );
    // Init
    Vdecoder_3x8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_3x8___024root*>(voidSelf);
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdecoder_3x8___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdecoder_3x8___024root__trace_chg_0_sub_0(Vdecoder_3x8___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_chg_0_sub_0\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.enable));
    bufp->chgCData(oldp+1,(vlSelfRef.in_i),3);
    bufp->chgCData(oldp+2,(vlSelfRef.out_o),8);
}

void Vdecoder_3x8___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_cleanup\n"); );
    // Init
    Vdecoder_3x8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_3x8___024root*>(voidSelf);
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
