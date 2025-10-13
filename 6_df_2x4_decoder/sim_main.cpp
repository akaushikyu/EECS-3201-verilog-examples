#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vdecoder_2x4.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vdecoder_2x4* top = new Vdecoder_2x4{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->enable = 0;
    top->ab_i = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->enable = 1;
    top->ab_i = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->ab_i = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->ab_i = 2;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->ab_i = 3;
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
