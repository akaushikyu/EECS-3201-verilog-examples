#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcircuit.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Vcircuit* top = new Vcircuit{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->wxyz_i = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 2;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 3;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 4;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 5;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 6;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 7;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 8;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 9;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 10;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 11;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 12;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 13;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 14;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->wxyz_i = 15;
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
