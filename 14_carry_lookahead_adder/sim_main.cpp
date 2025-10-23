#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vadder.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vadder* top = new Vadder{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->inp_1 = 0;
    top->inp_2 = 4;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->inp_1 = 2;
    top->inp_2 = 6;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->inp_1 = 8;
    top->inp_2 = 2;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->inp_1 = 8;
    top->inp_2 = 9;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->inp_1 = 2;
    top->inp_2 = 2;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->inp_1 = 6;
    top->inp_2 = 5;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->inp_1 = 12;
    top->inp_2 = 1;
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
