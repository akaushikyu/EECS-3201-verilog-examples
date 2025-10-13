#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Veven_circuit.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    Veven_circuit* top = new Veven_circuit{contextp};
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->x = 0;
    top->y = 0;
    top->z = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->x = 0;
    top->y = 0;
    top->z = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->x = 0;
    top->y = 1;
    top->z = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->x = 0;
    top->y = 1;
    top->z = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;

    top->x = 1;
    top->y = 0;
    top->z = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
 
    top->x = 1;
    top->y = 0;
    top->z = 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
 
    top->x = 1;
    top->y = 1;
    top->z = 0;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
 
    top->x = 1;
    top->y = 1;
    top->z = 1;
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
