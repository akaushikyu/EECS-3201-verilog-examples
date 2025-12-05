`timescale 1ns/1ns
module bcd_ripple_counter (
    input clk,
    input rst,
    output [3:0] cnt_o
);

    wire nout_0;
    wire nout_1;
    wire nout_2;
    wire nout_3;

    wire j3;
    assign j3 = cnt_o[2] && cnt_o[1];

    wire nclk;

    jk_ff d0 (
        .clk(clk),
        .rst(rst),
        .j(1'b1),
        .k(1'b1),
        .q(cnt_o[0]),
        .qb(nout_0)
    );

    jk_ff d1 (
        .clk(cnt_o[0]),
        .rst(rst),
        .j(nout_3),
        .k(1'b1),
        .q(cnt_o[1]),
        .qb(nout_1)
    );

    jk_ff d2 (
        .clk(cnt_o[1]),
        .rst(rst),
        .j(1'b1),
        .k(1'b1),
        .q(cnt_o[2]),
        .qb(nout_2)
    );

    jk_ff d3 (
        .clk(cnt_o[0]),
        .rst(rst),
        .j(j3),
        .k(1'b1),
        .q(cnt_o[3]),
        .qb(nout_3)
    );

endmodule : bcd_ripple_counter
