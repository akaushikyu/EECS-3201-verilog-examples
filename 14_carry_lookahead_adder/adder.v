// 4-bit adder circuit that instantiates the full_adder circuit
`timescale 1ns/1ns
module adder (
    input [3:0] inp_1,
    input [3:0] inp_2,
    output wire [3:0] sum,
    output wire carry
);

    wire [3:0] p;
    wire [3:0] g;
    /* verilator lint_off UNOPTFLAT */
    wire [4:0] cp;
    /* verilator lint_on UNOPTFLAT */

    // instantiate half-adders
    // instantiate carry-lookahead

    half_adder h0 (
        .a(inp_1[0]),
        .b(inp_2[0]),
        .p(p[0]),
        .g(g[0])
    );

    half_adder h1 (
        .a(inp_1[1]),
        .b(inp_2[1]),
        .p(p[1]),
        .g(g[1])
    );

    half_adder h2 (
        .a(inp_1[2]),
        .b(inp_2[2]),
        .p(p[2]),
        .g(g[2])
    );

    half_adder h3 (
        .a(inp_1[3]),
        .b(inp_2[3]),
        .p(p[3]),
        .g(g[3])
    );

    carry_lookahead cl1 (
        .carry_inp(1'b0),
        .p(p),
        .g(g),
        .c(cp)
    );

    assign sum[0] = p[0] ^ cp[0];
    assign sum[1] = p[1] ^ cp[1];
    assign sum[2] = p[2] ^ cp[2];
    assign sum[3] = p[3] ^ cp[3];

    assign carry = cp[4];

endmodule: adder
