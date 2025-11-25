module four_bit_counter (
    input clk,
    input rst,
    output [3:0] cnt_o
);

    wire d_nout_0;
    wire d_nout_1;
    wire d_nout_2;
    wire d_nout_3;

    d_ff d0 (
        .clk(clk),
        .rst(rst),
        .d(d_nout_0),
        .q(cnt_o[0]),
        .qb(d_nout_0)
    );

    d_ff d1 (
        .clk(cnt_o[0]),
        .rst(rst),
        .d(d_nout_1),
        .q(cnt_o[1]),
        .qb(d_nout_1)
    );

    d_ff d2 (
        .clk(cnt_o[1]),
        .rst(rst),
        .d(d_nout_2),
        .q(cnt_o[2]),
        .qb(d_nout_2)
    );

    d_ff d3 (
        .clk(cnt_o[2]),
        .rst(rst),
        .d(d_nout_3),
        .q(cnt_o[3]),
        .qb(d_nout_3)
    );

endmodule : four_bit_counter
