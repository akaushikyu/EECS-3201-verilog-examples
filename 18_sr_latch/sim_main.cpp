#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"

#define MAX_SIM_TIME 200000
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vtop* top = new Vtop{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

        while (!Verilated::gotFinish()) {
        top->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    /*
    top->S = 0;
    top->R = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->S = 0;
    top->R = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->S = 0;
    top->R = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->S = 1;
    top->R = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->S = 0;
    top->R = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->S = 1;
    top->R = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->S = 0;
    top->R = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
    
    m_trace->dump(sim_time);
    sim_time++;
    m_trace->dump(sim_time);
    sim_time++;
    */
 
    delete top;
    delete contextp;
    m_trace->close();
    return 0;
  }
