`timescale 1ns / 1ns
module sr_latch_nor(
    input S, // Active-high Set
    input R, // Active-high Reset
    inout Q,
    inout Q_bar
);

    // Instantiate NOR gates
    nor n1(Q_bar, S, Q);
    nor n2(Q, R, Q_bar);

endmodule : sr_latch_nor

