// 4-bit adder circuit that instantiates the full_adder circuit
`timescale 1ns/1ns
module adder_sub (
    input [3:0] inp_1,
    input [3:0] inp_2,
    input do_sub,
    output wire [3:0] sum,
    output wire carry
);

    wire carry_0;
    wire carry_1;
    wire carry_2;
    wire [3:0] inp_2_comp;

    // compute 1's complement of inp_2
    assign inp_2_comp[0] = inp_2[0] ^ do_sub;
    assign inp_2_comp[1] = inp_2[1] ^ do_sub;
    assign inp_2_comp[2] = inp_2[2] ^ do_sub;
    assign inp_2_comp[3] = inp_2[3] ^ do_sub;

    full_adder f0 (
        .abc_i({inp_1[0], inp_2_comp[0], do_sub}),
        .sum(sum[0]),
        .carry(carry_0)
    );

    full_adder f1 (
        .abc_i({inp_1[1], inp_2_comp[1], carry_0}),
        .sum(sum[1]),
        .carry(carry_1)
    );

    full_adder f2 (
        .abc_i({inp_1[2], inp_2_comp[2], carry_1}),
        .sum(sum[2]),
        .carry(carry_2)
    );

    full_adder f3 (
        .abc_i({inp_1[3], inp_2_comp[3], carry_2}),
        .sum(sum[3]),
        .carry(carry)
    );

endmodule: adder_sub
