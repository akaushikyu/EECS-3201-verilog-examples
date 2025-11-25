// simple_structure.v -- A simple verilog file that does an and operation of 2 signals

// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
`timescale 1ns/1ns
module blocking_non_blocking (
    input a,
    input b,
    input c,
    input d,
    output f_b,
    output f_nb);

    reg [1:0] tmp1_nb;
    reg [1:0] tmp2_nb;
    reg [1:0] tmp3_nb;
    
    reg [1:0] tmp1_b;
    reg [1:0] tmp2_b;
    reg [1:0] tmp3_b;

    assign f_nb = tmp3_nb[0];
    assign f_b = tmp3_b[0];

    always @(a, b, c, d) begin
        tmp1_nb[0] <= a || b;
        tmp2_nb[1] <= tmp1_nb[0] || c;
        tmp2_nb[0] <= tmp2_nb[1] & d;
        tmp3_nb[0] <= tmp2_nb[1];
        tmp3_nb[1] <= tmp1_nb[0]; 
    end

    always @(a, b, c, d) begin
        tmp1_b[0] = a || b;
        tmp2_b[1] = tmp1_b[0] || c;
        tmp2_b[0] = tmp2_b[1] & d;
        tmp3_b[0] = tmp2_b[1];
        tmp3_b[1] = tmp1_b[0]; 
    end

endmodule: blocking_non_blocking
