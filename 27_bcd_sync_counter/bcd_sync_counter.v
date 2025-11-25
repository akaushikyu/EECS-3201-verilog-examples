`timescale 1ns/1ns
module bcd_sync_counter (
    input clk,
    input rst,
    input cnt_enable,
    output reg [3:0] cnt_o
);

    wire nout_0;
    wire nout_1;
    wire nout_2;
    wire nout_3;

    wire jk_1_i;
    assign jk_1_i = cnt_enable && cnt_o[0]; 

    wire jk_2_i;
    assign jk_2_i = jk_1_i && cnt_o[1];

    wire jk_3_i;
    assign jk_3_i = jk_2_i && cnt_o[2];

    jk_ff d0 (
        .clk(clk),
        .rst(rst),
        .j(cnt_enable),
        .k(cnt_enable),
        .q(cnt_o[0]),
        .qb(nout_0)
    );

    jk_ff d1 (
        .clk(clk),
        .rst(rst),
        .j(jk_1_i),
        .k(jk_1_i),
        .q(cnt_o[1]),
        .qb(nout_1)
    );

    jk_ff d2 (
        .clk(clk),
        .rst(rst),
        .j(jk_2_i),
        .k(jk_2_i),
        .q(cnt_o[2]),
        .qb(nout_2)
    );

    jk_ff d3 (
        .clk(clk),
        .rst(rst),
        .j(jk_3_i),
        .k(jk_3_i),
        .q(cnt_o[3]),
        .qb(nout_3)
    );

endmodule : bcd_sync_counter
