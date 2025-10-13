// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vforever_circuit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vforever_circuit::Vforever_circuit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vforever_circuit__Syms(contextp(), _vcname__, this)}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , a{vlSymsp->TOP.a}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vforever_circuit::Vforever_circuit(const char* _vcname__)
    : Vforever_circuit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vforever_circuit::~Vforever_circuit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vforever_circuit___024root___eval_debug_assertions(Vforever_circuit___024root* vlSelf);
#endif  // VL_DEBUG
void Vforever_circuit___024root___eval_static(Vforever_circuit___024root* vlSelf);
void Vforever_circuit___024root___eval_initial(Vforever_circuit___024root* vlSelf);
void Vforever_circuit___024root___eval_settle(Vforever_circuit___024root* vlSelf);
void Vforever_circuit___024root___eval(Vforever_circuit___024root* vlSelf);

void Vforever_circuit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vforever_circuit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vforever_circuit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vforever_circuit___024root___eval_static(&(vlSymsp->TOP));
        Vforever_circuit___024root___eval_initial(&(vlSymsp->TOP));
        Vforever_circuit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vforever_circuit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vforever_circuit::eventsPending() { return false; }

uint64_t Vforever_circuit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vforever_circuit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vforever_circuit___024root___eval_final(Vforever_circuit___024root* vlSelf);

VL_ATTR_COLD void Vforever_circuit::final() {
    Vforever_circuit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vforever_circuit::hierName() const { return vlSymsp->name(); }
const char* Vforever_circuit::modelName() const { return "Vforever_circuit"; }
unsigned Vforever_circuit::threads() const { return 1; }
void Vforever_circuit::prepareClone() const { contextp()->prepareClone(); }
void Vforever_circuit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vforever_circuit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vforever_circuit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vforever_circuit___024root__trace_init_top(Vforever_circuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vforever_circuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vforever_circuit___024root*>(voidSelf);
    Vforever_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vforever_circuit___024root__trace_decl_types(tracep);
    Vforever_circuit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vforever_circuit___024root__trace_register(Vforever_circuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vforever_circuit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vforever_circuit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vforever_circuit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
