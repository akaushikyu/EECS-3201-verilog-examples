#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsimple_and.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vsimple_and* top = new Vsimple_and{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->a = 0;
    top->b = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->a = 1;
    top->b = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->a = 0;
    top->b = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->a = 1;
    top->b = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    m_trace->dump(sim_time);
    sim_time++;
    m_trace->dump(sim_time);
    sim_time++;
    m_trace->dump(sim_time);
 
    delete top;
    delete contextp;
    m_trace->close();
    return 0;
  }
