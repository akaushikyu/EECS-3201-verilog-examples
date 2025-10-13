// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecoder_2x4__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdecoder_2x4::Vdecoder_2x4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecoder_2x4__Syms(contextp(), _vcname__, this)}
    , enable{vlSymsp->TOP.enable}
    , ab_i{vlSymsp->TOP.ab_i}
    , wxyz_o{vlSymsp->TOP.wxyz_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdecoder_2x4::Vdecoder_2x4(const char* _vcname__)
    : Vdecoder_2x4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecoder_2x4::~Vdecoder_2x4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecoder_2x4___024root___eval_debug_assertions(Vdecoder_2x4___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecoder_2x4___024root___eval_static(Vdecoder_2x4___024root* vlSelf);
void Vdecoder_2x4___024root___eval_initial(Vdecoder_2x4___024root* vlSelf);
void Vdecoder_2x4___024root___eval_settle(Vdecoder_2x4___024root* vlSelf);
void Vdecoder_2x4___024root___eval(Vdecoder_2x4___024root* vlSelf);

void Vdecoder_2x4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecoder_2x4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecoder_2x4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecoder_2x4___024root___eval_static(&(vlSymsp->TOP));
        Vdecoder_2x4___024root___eval_initial(&(vlSymsp->TOP));
        Vdecoder_2x4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecoder_2x4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecoder_2x4::eventsPending() { return false; }

uint64_t Vdecoder_2x4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecoder_2x4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecoder_2x4___024root___eval_final(Vdecoder_2x4___024root* vlSelf);

VL_ATTR_COLD void Vdecoder_2x4::final() {
    Vdecoder_2x4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecoder_2x4::hierName() const { return vlSymsp->name(); }
const char* Vdecoder_2x4::modelName() const { return "Vdecoder_2x4"; }
unsigned Vdecoder_2x4::threads() const { return 1; }
void Vdecoder_2x4::prepareClone() const { contextp()->prepareClone(); }
void Vdecoder_2x4::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdecoder_2x4::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdecoder_2x4___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdecoder_2x4___024root__trace_init_top(Vdecoder_2x4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdecoder_2x4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecoder_2x4___024root*>(voidSelf);
    Vdecoder_2x4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdecoder_2x4___024root__trace_decl_types(tracep);
    Vdecoder_2x4___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdecoder_2x4___024root__trace_register(Vdecoder_2x4___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdecoder_2x4::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdecoder_2x4::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdecoder_2x4___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
