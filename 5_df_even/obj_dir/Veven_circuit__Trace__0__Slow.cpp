// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Veven_circuit__Syms.h"


VL_ATTR_COLD void Veven_circuit___024root__trace_init_sub__TOP__0(Veven_circuit___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root__trace_init_sub__TOP__0\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("even_circuit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"z",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Veven_circuit___024root__trace_init_top(Veven_circuit___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root__trace_init_top\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Veven_circuit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Veven_circuit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Veven_circuit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Veven_circuit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Veven_circuit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Veven_circuit___024root__trace_register(Veven_circuit___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root__trace_register\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Veven_circuit___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Veven_circuit___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Veven_circuit___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Veven_circuit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Veven_circuit___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root__trace_const_0\n"); );
    // Init
    Veven_circuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Veven_circuit___024root*>(voidSelf);
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Veven_circuit___024root__trace_full_0_sub_0(Veven_circuit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Veven_circuit___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root__trace_full_0\n"); );
    // Init
    Veven_circuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Veven_circuit___024root*>(voidSelf);
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Veven_circuit___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Veven_circuit___024root__trace_full_0_sub_0(Veven_circuit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veven_circuit___024root__trace_full_0_sub_0\n"); );
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.x));
    bufp->fullBit(oldp+2,(vlSelfRef.y));
    bufp->fullBit(oldp+3,(vlSelfRef.z));
    bufp->fullBit(oldp+4,(vlSelfRef.f));
}
