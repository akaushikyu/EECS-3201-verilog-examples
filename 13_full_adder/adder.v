// 4-bit adder circuit that instantiates the full_adder circuit
module adder (
    input [3:0] inp_1,
    input [3:0] inp_2,
    output wire [3:0] sum,
    output wire carry
);

    wire carry_0;
    wire carry_1;
    wire carry_2;

    full_adder f0 (
        .abc_i({inp_1[0], inp_2[0], 1'b0}),
        .sum(sum[0]),
        .carry(carry_0)
    );

    full_adder f1 (
        .abc_i({inp_1[1], inp_2[1], carry_0}),
        .sum(sum[1]),
        .carry(carry_1)
    );

    full_adder f2 (
        .abc_i({inp_1[2], inp_2[2], carry_1}),
        .sum(sum[2]),
        .carry(carry_2)
    );

    full_adder f3 (
        .abc_i({inp_1[3], inp_2[3], carry_2}),
        .sum(sum[3]),
        .carry(carry)
    );

endmodule: adder
