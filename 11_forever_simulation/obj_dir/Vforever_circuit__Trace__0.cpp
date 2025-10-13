// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vforever_circuit__Syms.h"


void Vforever_circuit___024root__trace_chg_0_sub_0(Vforever_circuit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vforever_circuit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root__trace_chg_0\n"); );
    // Init
    Vforever_circuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vforever_circuit___024root*>(voidSelf);
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vforever_circuit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vforever_circuit___024root__trace_chg_0_sub_0(Vforever_circuit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root__trace_chg_0_sub_0\n"); );
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.a));
    bufp->chgBit(oldp+1,(vlSelfRef.b));
    bufp->chgBit(oldp+2,(vlSelfRef.c));
    bufp->chgBit(oldp+3,(vlSelfRef.f));
    bufp->chgBit(oldp+4,(((IData)(vlSelfRef.forever_circuit__DOT__tmp2) 
                          ^ (IData)(vlSelfRef.b))));
    bufp->chgBit(oldp+5,(vlSelfRef.forever_circuit__DOT__tmp2));
}

void Vforever_circuit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforever_circuit___024root__trace_cleanup\n"); );
    // Init
    Vforever_circuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vforever_circuit___024root*>(voidSelf);
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
