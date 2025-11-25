// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_clk;
reg tb_d;
wire tb_q;

d_ff dut (
    .clk(tb_clk),
    .d(tb_d),
    .q(tb_q)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

initial begin
    tb_clk = 0;
    forever #10 tb_clk = ~tb_clk;
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
    $monitor("time = %0t, clk = %h, D = %h --> Q = %h", $time, tb_clk, tb_d, tb_q);
    tb_clk = 1'b0;
    tb_d = 1'b0;
    #15;
    tb_d = 1'b1;
    #48;
    tb_d = 1'b0;
    #55;
    tb_d = 1'b1;
    #60;
    tb_d = 1'b0;
    #65;
    tb_d = 1'b1;
    #66;
    tb_d = 1'b0;
    #69;
    tb_d = 1'b1;
end

endmodule: tb_top
