// even_circuit.v -- A circuit the outputs 1 if input is an even number
// SOP form: f(x, y, z) = \Sigma(0, 2, 4, 6)

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
`timescale 1ns/1ns
module even_circuit (
    // Syntax: input [width-1:0] <port name>
    input x,
    input y,
    input z,
    // Syntax: output [width-1:0] <port name>
    output f);

    // Truth table
    // | x | y | z | f | 
    // | - | - | - | - |
    // | 0 | 0 | 0 | 1 | 
    // | 0 | 0 | 1 | 0 | 
    // | 0 | 1 | 0 | 1 | 
    // | 0 | 1 | 1 | 0 | 
    // | 1 | 0 | 0 | 1 | 
    // | 1 | 0 | 1 | 0 | 
    // | 1 | 1 | 0 | 1 | 
    // | 1 | 1 | 1 | 0 | 

    //               (1)     (2)     (3)     (4)
    // f(x, y, z) = x'y'z' + x'yz' + xy'z' + xyz'

    // Intermediate signals to capture the complement and product of each term

    // hold complements of x, y, z
    // Syntax: wire [width-1:0] <wire name>
    wire xbar;
    wire ybar;
    wire zbar;

    // hold intermediate outputs
    // Syntax: wire [width-1:0] <wire name>
    wire sop_1;
    wire sop_2;
    wire sop_3;
    wire sop_4;

    // Syntax: <gate> <gate name> (output, inputs...)
    // Description: Define the gate and the inputs, output of gate 
    not n1 (xbar, x);
    not n2 (ybar, y);
    not n3 (zbar, z);

    and and1(sop_1, xbar, ybar, zbar);
    and and2(sop_2, xbar, y, zbar);
    and and3(sop_3, x, ybar, zbar);
    and and4(sop_4, x, y, zbar);

    or or1(f, sop_1, sop_2, sop_3, sop_4);

// Syntax: endmodule: <module name>
endmodule: even_circuit
