////////////////////////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Wed, Apr 01, 2015  3:09:27 PM
//
// Testbench for the rs232_des_tb.v module
////////////////////////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ns

module rs232_des_tb;
   
   // Inputs
   reg clk;
   reg rst_n;
   reg rx;
   reg rx_ack;
   
   // Outputs
   wire [7:0] rx_data;
   wire       rx_req;
   
   // Instantiate the Unit Under Test (UUT)
   rs232_des uut 
     (
      .clk(clk), 
      .rst_n(rst_n), 
      .rx(rx), 
      .rx_data(rx_data), 
      .rx_req(rx_req), 
      .rx_ack(rx_ack)
      );

   // module clock generator
   localparam PERIOD = 10;
   always #(PERIOD/2) clk = ~clk;

   // RS232 clock period
   localparam BAUD_RATE = 9600;
   localparam RS232_PERIOD = 1000000000/BAUD_RATE;
      
   // Here's where the action's at
   initial 
     begin
	// Initialize Inputs
	clk = 0;
	rst_n = 0;
	rx = 0;
	rx_ack = 0;
	
	// Wait 100 ns for global reset to finish
	#100;
	rst_n = 1'b1;
		
	// Add stimulus here

	// Data word 0xAA
	#(RS232_PERIOD) rx = 1'b1; // Start bit
	#(RS232_PERIOD) rx = 1'b0;
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0;
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0;
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0;
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0; // Stop bit

	// Acknowledge
	#(100*PERIOD) rx_ack = 1'b1;
	#(1*PERIOD)   rx_ack = 1'b0;
	
	// Data word 0x55
	#(RS232_PERIOD) rx = 1'b1; // Start bit
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0;
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0;
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0;
	#(RS232_PERIOD) rx = 1'b1;
	#(RS232_PERIOD) rx = 1'b0; 
	#(RS232_PERIOD) rx = 1'b0; // Stop bit
	
	// Acknowledge
	#(100*PERIOD) rx_ack = 1'b1;
	#(1*PERIOD)   rx_ack = 1'b0;
	
	
	// Let the dust settle
	#(3*RS232_PERIOD)
	
	$finish;
	      
   end
   
endmodule

