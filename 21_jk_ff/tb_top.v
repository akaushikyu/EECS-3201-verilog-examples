// testbench code for structural and
// timescale -- time unit/time precision

`timescale 1ns/1ns

module tb_top;

reg tb_clk;
reg tb_j;
reg tb_k;
wire tb_q;
wire tb_qb;

jk_ff dut (
    .clk(tb_clk),
    .j(tb_j),
    .k(tb_k),
    .q(tb_q),
    .qb(tb_qb)
);

// Create VCD waveform file
initial begin
    $dumpfile(`VCD_FILE_LOC);
    $dumpvars;
end

// Logic to terminate simulation
`ifndef TIMEOUT
  `define TIMEOUT 32'd200
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

initial begin
    // A convenient printing utility that prints out the signals and the time ($time)
    $monitor("time = %0t, clk = %h, j = %h, k = %h --> q = %h, qb = %h", $time, tb_clk, tb_j, tb_k, tb_q, tb_qb);
    tb_clk = 1'b0;
    tb_j= 1'b0;
    tb_k = 1'b1;
    #15;
    tb_j = 1'b0;
    tb_k = 1'b0;
    #48;
    tb_j = 1'b1;
    tb_k = 1'b0;
    #55;
    tb_j = 1'b1;
    tb_k = 1'b1;
    #60;
    tb_j = 1'b1;
    tb_k = 1'b1;
    #65;
    tb_j = 1'b0;
    tb_k = 1'b0;
    #66;
    tb_j = 1'b0;
    tb_k = 1'b1;
    #69;
    tb_j = 1'b0;
    tb_k = 1'b1;
end

endmodule: tb_top
