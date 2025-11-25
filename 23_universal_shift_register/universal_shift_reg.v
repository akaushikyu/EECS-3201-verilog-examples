`timescale 1ns/1ns
module universal_shift_reg (
    input clk,
    input slin_i,
    input srin_i,
    input [1:0] sel_i,
    input [3:0] pin_i,
    output [3:0] pout_o
);

    // sel
    // 00 -- No change
    // 01 -- Shift right
    // 10 -- Shift left
    // 11 -- Parallel load

    wire m_out_0;
    wire m_out_1;
    wire m_out_2;
    wire m_out_3;

    wire d_out_0;
    wire d_out_1;
    wire d_out_2;
    wire d_out_3;

    assign pout_o = {d_out_3, d_out_2, d_out_1, d_out_0};
    
    d_ff d0 (
        .clk(clk),
        .d(m_out_0),
        .q(d_out_0)
    );

    mux_4x1 m0 (
        .in_i({pin_i[0],slin_i,d_out_1,d_out_0}),
        .sel(sel_i),
        .out_o(m_out_0)
    );

    ///

    d_ff d1 (
        .clk(clk),
        .d(m_out_1),
        .q(d_out_1)
    );

    mux_4x1 m1 (
        .in_i({pin_i[1],d_out_0,d_out_2,d_out_1}),
        .sel(sel_i),
        .out_o(m_out_1)
    );

    ///

    d_ff d2 (
        .clk(clk),
        .d(m_out_2),
        .q(d_out_2)
    );

    mux_4x1 m2 (
        .in_i({pin_i[2], d_out_1, d_out_3, d_out_2}),
        .sel(sel_i),
        .out_o(m_out_2)
    );

    ///

    mux_4x1 m3 (
        .in_i({pin_i[3], d_out_2, srin_i, d_out_3}),
        .sel(sel_i),
        .out_o(m_out_3)
    );

    d_ff d3 (
        .clk(clk),
        .d(m_out_3),
        .q(d_out_3)
    );

endmodule : universal_shift_reg
