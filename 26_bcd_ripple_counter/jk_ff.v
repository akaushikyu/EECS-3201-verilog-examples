`timescale 1ns/1ns
module jk_ff (
    input clk,
    input rst,
    input j,
    input k,
    output reg q,
    output reg qb
);

    wire d_in;

    assign d_in = (j && qb) || (!k && q);

    d_ff d (
        .clk(clk),
        .rst(rst),
        .d(d_in),
        .q(q),
        .qb(qb)
    );

endmodule: jk_ff
