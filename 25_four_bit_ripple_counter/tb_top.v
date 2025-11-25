// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_clk;
reg tb_rst;
wire [3:0] tb_cnt_o;

four_bit_counter dut (
    .clk(tb_clk),
    .rst(tb_rst),
    .cnt_o(tb_cnt_o)
);

// Logic to terminate simulation
`ifndef TIMEOUT
  `define TIMEOUT 32'd1000
`endif
integer counter = 0;
always @(posedge tb_clk) begin
    counter <= counter+1;
    if (counter == `TIMEOUT) begin
        $finish;
    end
end

initial begin
    tb_clk = 0;
    forever #10 tb_clk = ~tb_clk;
end

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    tb_rst = 1'b1;
    #5;
    tb_rst = 1'b0;
    #10;
    tb_rst = 1'b1;
end

endmodule: tb_top
