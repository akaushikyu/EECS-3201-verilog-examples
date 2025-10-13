// sub_circuit.v : a circuit that does f = (a + b)' . c
// Syntax: module [design name] ([port list]):
// Description: Define the input and output interfaces of the hardware circuit
module sub_circuit (
    input wire a,
    input wire b,
    input wire c,
    output wire d);

    reg tmp1;
    reg tmp2;
    reg tmp3;

    assign d = tmp3;
    always @ (a, b, c) begin
        tmp1 = a || b;
        tmp2 = ~tmp1;
        tmp3 = c && tmp2;
    end

endmodule: sub_circuit
