module mux_4x1 (
    input [3:0] in_i,
    input [1:0] sel,
    output out_o
);

    always @(sel) begin
        case (sel) 
            2'b00: out_o = in_i[0];
            2'b01: out_o = in_i[1];
            2'b10: out_o = in_i[2];
            2'b11: out_o = in_i[3];
            default: out_o = 2'b0;
        endcase
    end
endmodule: mux_4x1
