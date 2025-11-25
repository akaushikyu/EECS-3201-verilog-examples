`timescale 1ns/1ns
module mux_16x1 (
    input [15:0] inp_i,
    input [3:0] sel,
    output out_o
);
    wire m0_out;
    wire m1_out;
    wire m2_out;

    mux_4x1 m0 (
        .in_i(inp_i[3:0]),
        .sel(sel[1:0]),
        .out_o(m0_out)
    );

    mux_8x1 m1 (
        .in_i(inp_i[11:4]),
        .sel(sel[2:0]),
        .out_o(m1_out)
    );

    mux_4x1 m2 (
        .in_i(inp_i[15:12]),
        .sel(sel[1:0]),
        .out_o(m2_out)
    );

    mux_4x1 m3 (
        .in_i({m2_out, m1_out, m1_out, m0_out}),
        .sel(sel[3:2]),
        .out_o(out_o)
    );

endmodule: mux_16x1
