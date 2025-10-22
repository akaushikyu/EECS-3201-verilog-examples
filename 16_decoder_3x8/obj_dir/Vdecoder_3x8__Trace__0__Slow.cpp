// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder_3x8__Syms.h"


VL_ATTR_COLD void Vdecoder_3x8___024root__trace_init_sub__TOP__0(Vdecoder_3x8___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_init_sub__TOP__0\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder_3x8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdecoder_3x8___024root__trace_init_top(Vdecoder_3x8___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_init_top\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdecoder_3x8___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdecoder_3x8___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdecoder_3x8___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecoder_3x8___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecoder_3x8___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdecoder_3x8___024root__trace_register(Vdecoder_3x8___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_register\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdecoder_3x8___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdecoder_3x8___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdecoder_3x8___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdecoder_3x8___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdecoder_3x8___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_const_0\n"); );
    // Init
    Vdecoder_3x8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_3x8___024root*>(voidSelf);
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdecoder_3x8___024root__trace_full_0_sub_0(Vdecoder_3x8___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdecoder_3x8___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_full_0\n"); );
    // Init
    Vdecoder_3x8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_3x8___024root*>(voidSelf);
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdecoder_3x8___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdecoder_3x8___024root__trace_full_0_sub_0(Vdecoder_3x8___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_3x8___024root__trace_full_0_sub_0\n"); );
    Vdecoder_3x8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.enable));
    bufp->fullCData(oldp+2,(vlSelfRef.in_i),3);
    bufp->fullCData(oldp+3,(vlSelfRef.out_o),8);
}
