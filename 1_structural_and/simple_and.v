// This is a comment
// simple_and.v -- A simple verilog code that does an and operation of 2 signals

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
`timescale 1ns/1ns
module simple_and (
    // Syntax: input [width-1:0] <port name>
    input a,
    input b,
    // Syntax: output [width-1:0] <port name>
    output f);

    // Syntax: <gate> <gate name> (output, inputs...)
    // Description: Define the gate and the inputs, output of gate 
    and G1 (f, a, b);

// Syntax: endmodule: <module name>
endmodule: simple_and
