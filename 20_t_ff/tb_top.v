// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_clk;
reg tb_t;
reg tb_rst;
wire tb_q;

t_ff dut (
    .clk(tb_clk),
    .rst(tb_rst),
    .t(tb_t),
    .q(tb_q)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

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
    tb_t = 0;
    tb_rst = 1'b1;
    forever #10 tb_clk = ~tb_clk;
end

initial begin
    $monitor("time = %0t, clk = %h, T = %h --> Q = %h", $time, tb_clk, tb_t, tb_q);
    #15;
    tb_rst = 1'b0;
    tb_t = 1'b0;
    tb_t = 1'b1;
    #48;
    tb_t = 1'b0;
    #55;
    tb_t = 1'b1;
    #60;
    tb_t = 1'b0;
    #65;
    tb_t = 1'b1;
    #66;
    tb_t = 1'b0;
    #69;
    tb_t = 1'b1;
end

endmodule: tb_top
