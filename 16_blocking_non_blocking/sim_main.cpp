#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vblocking_non_blocking.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vblocking_non_blocking* top = new Vblocking_non_blocking{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->a = 0;
    top->b = 0;
    top->c = 0;
    top->d = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->a = 1;
    top->b = 1;
    top->c = 0;
    top->d = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->a = 1;
    top->b = 1;
    top->c = 0;
    top->d = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->a = 1;
    top->b = 0;
    top->c = 1;
    top->d = 1;
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
