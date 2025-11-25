`timescale 1ns/1ns
module mux_4x1 (
    input [3:0] in_i,
    input [1:0] sel,
    output reg out_o
);   
    assign out_o = (sel == 2'b00) ? in_i[0] :
                   (sel == 2'b01) ? in_i[1] :
                   (sel == 2'b10) ? in_i[2] : in_i[3];

endmodule: mux_4x1
