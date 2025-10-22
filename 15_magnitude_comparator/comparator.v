// 4-bit comparator circuit that instantiates the full_adder circuit
module comparator (
    input [3:0] inp_1,
    input [3:0] inp_2,
    output wire eq,
    output wire gt,
    output wire lt
);

    assign eq = (inp_1 == inp_2) ? 1'b1 : 1'b0;

    assign gt = (inp_1 > inp_2) ? 1'b1 : 1'b0;

    assign lt = (inp_1 < inp_2) ? 1'b1 : 1'b0;

endmodule: comparator
