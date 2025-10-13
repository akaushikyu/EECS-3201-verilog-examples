// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecoder_2x4__Syms.h"


VL_ATTR_COLD void Vdecoder_2x4___024root__trace_init_sub__TOP__0(Vdecoder_2x4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_init_sub__TOP__0\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"ab_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"wxyz_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder_2x4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"ab_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"wxyz_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_init_top(Vdecoder_2x4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_init_top\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdecoder_2x4___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdecoder_2x4___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecoder_2x4___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdecoder_2x4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_register(Vdecoder_2x4___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_register\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdecoder_2x4___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdecoder_2x4___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdecoder_2x4___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdecoder_2x4___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_const_0\n"); );
    // Init
    Vdecoder_2x4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_2x4___024root*>(voidSelf);
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_full_0_sub_0(Vdecoder_2x4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_full_0\n"); );
    // Init
    Vdecoder_2x4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_2x4___024root*>(voidSelf);
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdecoder_2x4___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_full_0_sub_0(Vdecoder_2x4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder_2x4___024root__trace_full_0_sub_0\n"); );
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.enable));
    bufp->fullCData(oldp+2,(vlSelfRef.ab_i),2);
    bufp->fullCData(oldp+3,(vlSelfRef.wxyz_o),4);
    bufp->fullBit(oldp+4,(((IData)(vlSelfRef.decoder_2x4__DOT____VdfgRegularize_h90aad52c_0_1) 
                           & ((IData)(vlSelfRef.ab_i) 
                              >> 1U))));
    bufp->fullBit(oldp+5,(((IData)(vlSelfRef.decoder_2x4__DOT____VdfgRegularize_h90aad52c_0_4) 
                           & ((IData)(vlSelfRef.ab_i) 
                              >> 1U))));
    bufp->fullBit(oldp+6,(((~ ((IData)(vlSelfRef.ab_i) 
                               >> 1U)) & (IData)(vlSelfRef.decoder_2x4__DOT____VdfgRegularize_h90aad52c_0_1))));
    bufp->fullBit(oldp+7,(((~ ((IData)(vlSelfRef.ab_i) 
                               >> 1U)) & (IData)(vlSelfRef.decoder_2x4__DOT____VdfgRegularize_h90aad52c_0_4))));
}
