// half_adder.v : verilog description of a 1-bit half adder circuit

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
`timescale 1ns/1ns
module half_adder (
    input wire a,
    input wire b,
    output wire p,
    output wire g);

    reg sum_tmp;
    reg carry_tmp;
    always @(a, b) begin
        // sum (p) = a (xor) b
        sum_tmp = a ^ b;
        // carry (g) = a & b
        carry_tmp = a & b;
    end

    assign p = sum_tmp;
    assign g = carry_tmp;

endmodule: half_adder
