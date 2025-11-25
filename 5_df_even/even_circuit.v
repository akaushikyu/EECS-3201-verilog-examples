// even_circuit.v -- A circuit the outputs 1 if input is an even number
//                   using dataflow modeling 
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

    // assign -- continuously assign a signal a value
    // Syntax: assign <output signal name>  = <operation on input signals>; 
    // && -- logical and operator
    // || -- logical or operator
    assign f = (~x && ~y && ~z) || 
               (~x && y && ~z) || 
               (x && ~y && ~z) || 
               (x && y && ~z);

// Syntax: endmodule: <module name>
endmodule: even_circuit
