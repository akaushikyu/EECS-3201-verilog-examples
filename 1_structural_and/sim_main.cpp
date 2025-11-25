#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "verif/sim/verilator/Vtb_top.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vtb_top* top = new Vtb_top{contextp};
    top->trace(m_trace, 100);
    m_trace->open("waveform.vcd");

    while (!contextp->gotFinish()) {
        top->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }
    
    delete top;
    delete contextp;
    m_trace->close();
    return 0;
}
