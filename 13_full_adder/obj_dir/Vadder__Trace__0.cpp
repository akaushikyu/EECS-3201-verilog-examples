// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder__Syms.h"


void Vadder___024root__trace_chg_0_sub_0(Vadder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vadder___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_chg_0\n"); );
    // Init
    Vadder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vadder___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vadder___024root__trace_chg_0_sub_0(Vadder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_chg_0_sub_0\n"); );
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.adder__DOT__carry_0));
        bufp->chgBit(oldp+1,(vlSelfRef.adder__DOT__carry_1));
        bufp->chgBit(oldp+2,(vlSelfRef.adder__DOT__carry_2));
        bufp->chgCData(oldp+3,(vlSelfRef.adder__DOT____Vcellinp__f1__abc_i),3);
        bufp->chgBit(oldp+4,(vlSelfRef.adder__DOT__f1__DOT__sum_0));
        bufp->chgCData(oldp+5,(vlSelfRef.adder__DOT____Vcellinp__f2__abc_i),3);
        bufp->chgBit(oldp+6,(vlSelfRef.adder__DOT__f2__DOT__sum_0));
        bufp->chgCData(oldp+7,(vlSelfRef.adder__DOT____Vcellinp__f3__abc_i),3);
        bufp->chgBit(oldp+8,(vlSelfRef.adder__DOT__f3__DOT__sum_0));
    }
    bufp->chgCData(oldp+9,(vlSelfRef.inp_1),4);
    bufp->chgCData(oldp+10,(vlSelfRef.inp_2),4);
    bufp->chgCData(oldp+11,(vlSelfRef.sum),4);
    bufp->chgBit(oldp+12,(vlSelfRef.carry));
    bufp->chgCData(oldp+13,(((4U & ((IData)(vlSelfRef.inp_1) 
                                    << 2U)) | (2U & 
                                               ((IData)(vlSelfRef.inp_2) 
                                                << 1U)))),3);
    bufp->chgBit(oldp+14,((1U & ((IData)(vlSelfRef.inp_2) 
                                 ^ (IData)(vlSelfRef.inp_1)))));
    bufp->chgBit(oldp+15,((1U & (IData)(vlSelfRef.inp_2))));
    bufp->chgBit(oldp+16,((1U & (IData)(vlSelfRef.inp_1))));
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelfRef.adder__DOT__f1__DOT__sum_0) 
                                 ^ ((IData)(vlSelfRef.inp_1) 
                                    >> 1U)))));
    bufp->chgBit(oldp+18,(((IData)(vlSelfRef.adder__DOT__carry_0) 
                           & ((IData)(vlSelfRef.inp_2) 
                              >> 1U))));
    bufp->chgBit(oldp+19,(((IData)(vlSelfRef.adder__DOT__f1__DOT__sum_0) 
                           & ((IData)(vlSelfRef.inp_1) 
                              >> 1U))));
    bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.inp_2) 
                                 >> 1U))));
    bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.inp_1) 
                                 >> 1U))));
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.adder__DOT__f2__DOT__sum_0) 
                                 ^ ((IData)(vlSelfRef.inp_1) 
                                    >> 2U)))));
    bufp->chgBit(oldp+23,(((IData)(vlSelfRef.adder__DOT__carry_1) 
                           & ((IData)(vlSelfRef.inp_2) 
                              >> 2U))));
    bufp->chgBit(oldp+24,(((IData)(vlSelfRef.adder__DOT__f2__DOT__sum_0) 
                           & ((IData)(vlSelfRef.inp_1) 
                              >> 2U))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelfRef.inp_2) 
                                 >> 2U))));
    bufp->chgBit(oldp+26,((1U & ((IData)(vlSelfRef.inp_1) 
                                 >> 2U))));
    bufp->chgBit(oldp+27,(((IData)(vlSelfRef.adder__DOT__f3__DOT__sum_0) 
                           ^ ((IData)(vlSelfRef.inp_1) 
                              >> 3U))));
    bufp->chgBit(oldp+28,(((IData)(vlSelfRef.adder__DOT__carry_2) 
                           & ((IData)(vlSelfRef.inp_2) 
                              >> 3U))));
    bufp->chgBit(oldp+29,(((IData)(vlSelfRef.adder__DOT__f3__DOT__sum_0) 
                           & ((IData)(vlSelfRef.inp_1) 
                              >> 3U))));
    bufp->chgBit(oldp+30,((1U & ((IData)(vlSelfRef.inp_2) 
                                 >> 3U))));
    bufp->chgBit(oldp+31,((1U & ((IData)(vlSelfRef.inp_1) 
                                 >> 3U))));
}

void Vadder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder___024root__trace_cleanup\n"); );
    // Init
    Vadder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder___024root*>(voidSelf);
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
