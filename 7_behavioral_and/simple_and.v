// simple_structure.v -- A simple verilog file that does an and operation of 2 signals
//                       using behavioral modeling

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
`timescale 1ns/1ns
module simple_and (
    // Syntax: input [width-1:0] <port name>
    input wire a,
    input wire b,
    // Syntax: output [width-1:0] <port name>
    output reg f);

    // Syntax: 
    // always @ (sensitivity list) begin
    // <<< --- logic --- >>>
    // end
    // <sensitivity list>: list of signals that the always block is sensitive to changes

    always @(a, b) begin
        f = a & b;
    end

endmodule: simple_and
