// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcomparator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcomparator::Vcomparator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcomparator__Syms(contextp(), _vcname__, this)}
    , inp_1{vlSymsp->TOP.inp_1}
    , inp_2{vlSymsp->TOP.inp_2}
    , eq{vlSymsp->TOP.eq}
    , gt{vlSymsp->TOP.gt}
    , lt{vlSymsp->TOP.lt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcomparator::Vcomparator(const char* _vcname__)
    : Vcomparator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcomparator::~Vcomparator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcomparator___024root___eval_debug_assertions(Vcomparator___024root* vlSelf);
#endif  // VL_DEBUG
void Vcomparator___024root___eval_static(Vcomparator___024root* vlSelf);
void Vcomparator___024root___eval_initial(Vcomparator___024root* vlSelf);
void Vcomparator___024root___eval_settle(Vcomparator___024root* vlSelf);
void Vcomparator___024root___eval(Vcomparator___024root* vlSelf);

void Vcomparator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcomparator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcomparator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcomparator___024root___eval_static(&(vlSymsp->TOP));
        Vcomparator___024root___eval_initial(&(vlSymsp->TOP));
        Vcomparator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcomparator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcomparator::eventsPending() { return false; }

uint64_t Vcomparator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcomparator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcomparator___024root___eval_final(Vcomparator___024root* vlSelf);

VL_ATTR_COLD void Vcomparator::final() {
    Vcomparator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcomparator::hierName() const { return vlSymsp->name(); }
const char* Vcomparator::modelName() const { return "Vcomparator"; }
unsigned Vcomparator::threads() const { return 1; }
void Vcomparator::prepareClone() const { contextp()->prepareClone(); }
void Vcomparator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcomparator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcomparator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcomparator___024root__trace_init_top(Vcomparator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcomparator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator___024root*>(voidSelf);
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcomparator___024root__trace_decl_types(tracep);
    Vcomparator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcomparator___024root__trace_register(Vcomparator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcomparator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcomparator::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcomparator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
