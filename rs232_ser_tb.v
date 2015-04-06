////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Wed, Apr 01, 2015  4:43:49 PM
//
// Testbench for the rs232_ser_tb.v module
////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ns

module rs232_ser_tb;

	// Inputs
	reg clk;
	reg rst_n;
	reg [7:0] tx_data;
	reg tx_req;

	// Outputs
	wire tx;
	wire tx_ack;

	// Instantiate the Unit Under Test (UUT)
	rs232_ser uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.tx(tx), 
		.tx_data(tx_data), 
		.tx_req(tx_req), 
		.tx_ack(tx_ack)
	);
   
   // module clock generator
   localparam PERIOD = 10;
   always #(PERIOD/2) clk = ~clk;
   
   // RS232 clock period
   localparam BAUD_RATE = 9600;
   localparam RS232_PERIOD = 1000000000/BAUD_RATE;
      
   initial begin
      // Initialize Inputs
      clk = 0;
      rst_n = 0;
      tx_data = 0;
      tx_req = 0;
      
      // Wait 100 ns for global reset to finish
      #100;
      rst_n = 1'b1;

      #(10*PERIOD)
      
      // Data word 0xAA
      tx_data = 8'hAA;
      tx_req = 1'b1;

      #(1*PERIOD)
      
      if( tx_ack == 1'b1 ) tx_req <= 1'b0;

      #(15*RS232_PERIOD)

      $finish;
            
   end
   
endmodule

