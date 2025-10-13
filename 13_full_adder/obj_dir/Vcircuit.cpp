// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcircuit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcircuit::Vcircuit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcircuit__Syms(contextp(), _vcname__, this)}
    , wxyz_i{vlSymsp->TOP.wxyz_i}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcircuit::Vcircuit(const char* _vcname__)
    : Vcircuit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcircuit::~Vcircuit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcircuit___024root___eval_debug_assertions(Vcircuit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcircuit___024root___eval_static(Vcircuit___024root* vlSelf);
void Vcircuit___024root___eval_initial(Vcircuit___024root* vlSelf);
void Vcircuit___024root___eval_settle(Vcircuit___024root* vlSelf);
void Vcircuit___024root___eval(Vcircuit___024root* vlSelf);

void Vcircuit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcircuit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcircuit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcircuit___024root___eval_static(&(vlSymsp->TOP));
        Vcircuit___024root___eval_initial(&(vlSymsp->TOP));
        Vcircuit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcircuit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcircuit::eventsPending() { return false; }

uint64_t Vcircuit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcircuit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcircuit___024root___eval_final(Vcircuit___024root* vlSelf);

VL_ATTR_COLD void Vcircuit::final() {
    Vcircuit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcircuit::hierName() const { return vlSymsp->name(); }
const char* Vcircuit::modelName() const { return "Vcircuit"; }
unsigned Vcircuit::threads() const { return 1; }
void Vcircuit::prepareClone() const { contextp()->prepareClone(); }
void Vcircuit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcircuit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcircuit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcircuit___024root__trace_init_top(Vcircuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcircuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcircuit___024root*>(voidSelf);
    Vcircuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcircuit___024root__trace_decl_types(tracep);
    Vcircuit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcircuit___024root__trace_register(Vcircuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcircuit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcircuit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcircuit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
