`timescale 1ns/1ns
module pattern_detect_final (
    input clk,
    input rst,
    input in_i,
    output x,
    output y
);

   // Pattern A
   // state machine
   // s0 == 0/0 ==> s1
   // s0 == 1/0 ==> s4
   // s1 == 0/0 ==> s1
   // s1 == 1/0 ==> s2
   // s2 == 0/1 ==> s3
   // s2 == 1/1 ==> s4
   // s3 == 0/0 ==> s0
   // s3 == 1/1 ==> s6
   // s4 == 0/0 ==> s5
   // s4 == 1/0 ==> s4
   // s5 == 0/0 ==> s1
   // s5 == 1/1 ==> s6
   // s6 == 0/1 ==> s3
   // s6 == 1/0 ==> s4

    wire j0_in;
    wire k0_in;

    wire j1_in;
    wire k1_in;

    wire j2_in;
    wire k2_in;

    wire q0;
    wire q1;
    wire q2;

    wire q0_b;
    wire q1_b;
    wire q2_b;  

    assign j0_in = ~in_i;
    assign k0_in = in_i;

    assign j1_in = q0 && in_i;
    assign k1_in = in_i;

    assign j2_in = (q0_b && in_i) || (in_i && q1);
    assign k2_in = (q0 && ~in_i) || (q0_b && q1 && ~in_i);

    jk_ff jk0 (
        .clk(clk),
        .rst(rst),
        .j(j0_in),
        .k(k0_in),
        .q(q0),
        .qb(q0_b)
    );

    jk_ff jk1 (
        .clk(clk),
        .rst(rst),
        .j(j1_in),
        .k(k1_in),
        .q(q1),
        .qb(q1_b)
    );

    jk_ff jk2 (
        .clk(clk),
        .rst(rst),
        .j(j2_in),
        .k(k2_in),
        .q(q2),
        .qb(q2_b)
    );

    assign x = (q1 && q0_b && ~in_i) || (q1 && q0 && in_i) || (q2 && q0 && in_i);

    // Pattern B
    // state machine
    // s0/0 == 0 ==> s1/0
    // s0/0 == 1 ==> s4/0
    // s1/0 == 0 ==> s2/0
    // s1/0 == 1 ==> s4/0
    // s2/0 == 0 ==> s2/0
    // s2/0 == 1 ==> s3/1
    // s3/1 == 0 ==> s1/0
    // s3/1 == 1 ==> s5/0
    // s4/0 == 0 ==> s1/0
    // s4/0 == 1 ==> s5/0
    // s5/0 == 0 ==> s6/1
    // s5/0 == 1 ==> s5/0
    // s6/1 == 0 ==> s2/0
    // s6/1 == 1 ==> s4/0

    wire B_j0_in;
    wire B_k0_in;

    wire B_j1_in;
    wire B_k1_in;

    wire B_j2_in;
    wire B_k2_in;

    wire B_q0;
    wire B_q1;
    wire B_q2;

    wire B_q0_b;
    wire B_q1_b;
    wire B_q2_b;  

    assign B_j0_in = (~in_i && B_q1_b) || (B_q2_b && B_q1 && in_i) || (B_q2 && B_q1_b && in_i); 
    assign B_k0_in = (B_q1_b && ~in_i) || (B_q2_b && B_q1_b); 

    assign B_j1_in = B_q0 && ~in_i;
    assign B_k1_in = B_q0 || (in_i && B_q2);

    assign B_j2_in = (B_q0 && in_i) || (B_q1_b && in_i);
    assign B_k2_in = B_q0_b && ~in_i;

    jk_ff B_jk0 (
        .clk(clk),
        .rst(rst),
        .j(B_j0_in),
        .k(B_k0_in),
        .q(B_q0),
        .qb(B_q0_b)
    );

    jk_ff B_jk1 (
        .clk(clk),
        .rst(rst),
        .j(B_j1_in),
        .k(B_k1_in),
        .q(B_q1),
        .qb(B_q1_b)
    );

    jk_ff B_jk2 (
        .clk(clk),
        .rst(rst),
        .j(B_j2_in),
        .k(B_k2_in),
        .q(B_q2),
        .qb(B_q2_b)
    );

    assign y = (B_q2 && B_q1) || (B_q1 && B_q0);

endmodule : pattern_detect_final
