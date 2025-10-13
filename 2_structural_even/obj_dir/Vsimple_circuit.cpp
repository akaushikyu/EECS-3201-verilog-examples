// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimple_circuit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsimple_circuit::Vsimple_circuit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimple_circuit__Syms(contextp(), _vcname__, this)}
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

Vsimple_circuit::Vsimple_circuit(const char* _vcname__)
    : Vsimple_circuit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimple_circuit::~Vsimple_circuit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsimple_circuit___024root___eval_debug_assertions(Vsimple_circuit___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple_circuit___024root___eval_static(Vsimple_circuit___024root* vlSelf);
void Vsimple_circuit___024root___eval_initial(Vsimple_circuit___024root* vlSelf);
void Vsimple_circuit___024root___eval_settle(Vsimple_circuit___024root* vlSelf);
void Vsimple_circuit___024root___eval(Vsimple_circuit___024root* vlSelf);

void Vsimple_circuit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimple_circuit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimple_circuit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsimple_circuit___024root___eval_static(&(vlSymsp->TOP));
        Vsimple_circuit___024root___eval_initial(&(vlSymsp->TOP));
        Vsimple_circuit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsimple_circuit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsimple_circuit::eventsPending() { return false; }

uint64_t Vsimple_circuit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsimple_circuit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsimple_circuit___024root___eval_final(Vsimple_circuit___024root* vlSelf);

VL_ATTR_COLD void Vsimple_circuit::final() {
    Vsimple_circuit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimple_circuit::hierName() const { return vlSymsp->name(); }
const char* Vsimple_circuit::modelName() const { return "Vsimple_circuit"; }
unsigned Vsimple_circuit::threads() const { return 1; }
void Vsimple_circuit::prepareClone() const { contextp()->prepareClone(); }
void Vsimple_circuit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsimple_circuit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimple_circuit___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsimple_circuit___024root__trace_init_top(Vsimple_circuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimple_circuit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_circuit___024root*>(voidSelf);
    Vsimple_circuit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsimple_circuit___024root__trace_decl_types(tracep);
    Vsimple_circuit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsimple_circuit___024root__trace_register(Vsimple_circuit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsimple_circuit::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimple_circuit::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimple_circuit___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
