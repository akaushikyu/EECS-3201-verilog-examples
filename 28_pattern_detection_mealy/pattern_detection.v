`timescale 1ns/1ns
module pattern_detection_mealy (
    input clk,
    input rst,
    input in_i,
    output reg detect
);

    parameter S0 = 2'b00;
    parameter S1 = 2'b01;
    parameter S2 = 2'b10;

    reg [1:0] currState;

    always @(posedge clk) begin
        if (rst == 1'b1) begin
            currState = S0;
        end
        else begin
            case (currState)
                S0: currState <= (in_i == 1'b1) ? S1 : S0;
                S1: currState <= (in_i == 1'b1) ? S2 : S0;
                S2: currState <= (in_i == 1'b1) ? S2 : S0;
                default: currState <= S0;
            endcase
        end
    end

    always @(in_i, currState) begin
        if (currState == S2 && in_i == 1'b1) begin
            detect = 1'b1;
        end
        else begin
            detect = 1'b0;
        end
    end

endmodule : pattern_detection_mealy
