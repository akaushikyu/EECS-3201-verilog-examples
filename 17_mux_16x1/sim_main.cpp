#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmux_4x1.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vmux_4x1* top = new Vmux_4x1{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->sel = 0;
    top->in_i = 4;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->sel = 0;
    top->in_i = 7;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->sel = 1;
    top->in_i = 6;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->sel = 2;
    top->in_i = 2;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->sel = 3;
    top->in_i = 7;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->sel = 1;
    top->in_i = 6;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->sel = 1;
    top->in_i = 1;
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
