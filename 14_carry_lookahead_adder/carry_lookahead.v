`timescale 1ns/1ns
module carry_lookahead(
    input carry_inp,
    input [3:0] p,
    input [3:0] g,
    output [4:0] c
);

    assign c[0] = carry_inp; 

    // c_1 = g_0 | c_0 . p_0
    assign c[1] = g[0] | (c[0] & p[0]);

    // c_2 = g_1 | c_1 . p_1
    //     = g_1 | (g_0 | c_0 . p_0) . p_1
    //     = g_1 | g_0.p_1 | c_0.p_1.p_0 
    assign c[2] = g[1] | (g[0] & p[1]) | (c[0] & p[1] & p[0]); 

    // c_3 = g_2 | c_2 . p_2
    //     = g_2 | (g_1 | g_0 . p_1 | c_0 . p_1 . p_0) . p_2
    //     = g_2 | g_1 . p_2 | g_0 . p_1 . p_2 | c_0 . p_1 . p_0 . p_2
    assign c[3] = g[2] | (g[1] & p[2]) | (g[0] & p[1] & p[2]) | (c[0] & p[1] & p[0] & p[2]);

    // c_4 = g_3 | c_3 . p_3
    //     = g_3 | (g_2 | g_1 . p_2 | g_0 . p_1 . p_2 | c_0 . p_1 . p_0 . p_2) . p_3
    //     = g_3 | g_2 . p_3 | g_1 . p_2 . p_3 | g_0 . p_1 . p_2 . p_3  | c_0 . p_1 . p_0 . p_2 . p_3
    assign c[4] = g[3] | (g[2] & p[3]) | (g[1] & p[2] & p[3]) | (g[0] & p[1] & p[2] & p[3]) | (c[0] & p[1] & p[0] & p[2] & p[3]);

endmodule : carry_lookahead
