`timescale 1ns/1ns
module serial_shift_reg (
    input sin_i,
    input clk,
    output out_o
);

    wire d_out_0;
    wire d_out_1;
    wire d_out_2;

    d_ff d0 (
        .clk(clk),
        .d(sin_i),
        .q(d_out_0)
    );

    d_ff d1 (
        .clk(clk),
        .d(d_out_0),
        .q(d_out_1)
    );

    d_ff d2 (
        .clk(clk),
        .d(d_out_1),
        .q(d_out_2)
    );

    d_ff d3 (
        .clk(clk),
        .d(d_out_2),
        .q(out_o)
    );

endmodule : serial_shift_reg
