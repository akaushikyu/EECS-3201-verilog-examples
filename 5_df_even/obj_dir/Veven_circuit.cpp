// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Veven_circuit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Veven_circuit::Veven_circuit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Veven_circuit__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , z{vlSymsp->TOP.z}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Veven_circuit::Veven_circuit(const char* _vcname__)
    : Veven_circuit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Veven_circuit::~Veven_circuit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Veven_circuit___024root___eval_debug_assertions(Veven_circuit___024root* vlSelf);
#endif  // VL_DEBUG
void Veven_circuit___024root___eval_static(Veven_circuit___024root* vlSelf);
void Veven_circuit___024root___eval_initial(Veven_circuit___024root* vlSelf);
void Veven_circuit___024root___eval_settle(Veven_circuit___024root* vlSelf);
void Veven_circuit___024root___eval(Veven_circuit___024root* vlSelf);

void Veven_circuit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Veven_circuit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Veven_circuit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Veven_circuit___024root___eval_static(&(vlSymsp->TOP));
        Veven_circuit___024root___eval_initial(&(vlSymsp->TOP));
        Veven_circuit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Veven_circuit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Veven_circuit::eventsPending() { return false; }

uint64_t Veven_circuit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Veven_circuit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Veven_circuit___024root___eval_final(Veven_circuit___024root* vlSelf);

VL_ATTR_COLD void Veven_circuit::final() {
    Veven_circuit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Veven_circuit::hierName() const { return vlSymsp->name(); }
const char* Veven_circuit::modelName() const { return "Veven_circuit"; }
unsigned Veven_circuit::threads() const { return 1; }
void Veven_circuit::prepareClone() const { contextp()->prepareClone(); }
void Veven_circuit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Veven_circuit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Veven_circuit___024root__trace_decl_types(VerilatedVcd* tracep);

void Veven_circuit___024root__trace_init_top(Veven_circuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Veven_circuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Veven_circuit___024root*>(voidSelf);
    Veven_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Veven_circuit___024root__trace_decl_types(tracep);
    Veven_circuit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Veven_circuit___024root__trace_register(Veven_circuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Veven_circuit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Veven_circuit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Veven_circuit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
