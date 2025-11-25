#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vd_ff.h"

#define MAX_SIM_TIME 200000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vd_ff* d_ff = new Vd_ff{contextp};
    d_ff->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
        
    d_ff->clk = 0;
    d_ff->d = 0;
    d_ff->eval();
    m_trace->dump(sim_time);
    sim_time++;

    while (sim_time < MAX_SIM_TIME) {
        d_ff->clk ^= 1;
        d_ff->d = rand() % 2;
        d_ff->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    delete d_ff;
    delete contextp;
    m_trace->close();
    return 0;
  }
