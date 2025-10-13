// simple_and.v -- A simple verilog file that does an and operation of 2 signals
//                 using dataflow modeling

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
module simple_and (
    // Syntax: input [width-1:0] <port name>
    input a,
    input b,
    // Syntax: output [width-1:0] <port name>
    output f);

    // assign -- continuously assign a signal a value
    // Syntax: assign <output signal name>  = operation on input signals
    assign f = a & b;

// Syntax: endmodule: <module name>
endmodule: simple_and
