// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcomparator__Syms.h"


VL_ATTR_COLD void Vcomparator___024root__trace_init_sub__TOP__0(Vcomparator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_init_sub__TOP__0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"inp_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"inp_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"eq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"gt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"lt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("comparator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"inp_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"inp_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"eq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"gt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"lt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcomparator___024root__trace_init_top(Vcomparator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_init_top\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcomparator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcomparator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcomparator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcomparator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcomparator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcomparator___024root__trace_register(Vcomparator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_register\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcomparator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcomparator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcomparator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcomparator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcomparator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_const_0\n"); );
    // Init
    Vcomparator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator___024root*>(voidSelf);
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vcomparator___024root__trace_full_0_sub_0(Vcomparator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcomparator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_full_0\n"); );
    // Init
    Vcomparator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator___024root*>(voidSelf);
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcomparator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcomparator___024root__trace_full_0_sub_0(Vcomparator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_full_0_sub_0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.inp_1),4);
    bufp->fullCData(oldp+2,(vlSelfRef.inp_2),4);
    bufp->fullBit(oldp+3,(vlSelfRef.eq));
    bufp->fullBit(oldp+4,(vlSelfRef.gt));
    bufp->fullBit(oldp+5,(vlSelfRef.lt));
}
