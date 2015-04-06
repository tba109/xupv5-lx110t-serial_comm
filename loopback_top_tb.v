`timescale 1ns / 1ns

////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Wed Apr  1 21:34:25 EDT 2015
//
// Simulate a loopback test
// 
////////////////////////////////////////////////////////////////////////////////

// `define TEST_1
// `define TEST_2
`define TEST_3

module loopback_top_tb;

   // Inputs
   reg USER_CLK;
   reg FPGA_CPU_RESET;
   reg FPGA_SERIAL_RX;
   
   // Outputs
   wire FPGA_SERIAL_TX;
   
   // Instantiate the Unit Under Test (UUT)
   loopback_top uut (
		     .USER_CLK(USER_CLK), 
		     .FPGA_CPU_RESET(FPGA_CPU_RESET), 
		     .FPGA_SERIAL_TX(FPGA_SERIAL_TX), 
		     .FPGA_SERIAL_RX(FPGA_SERIAL_RX)
		     );
   
   // module clock generator
   localparam PERIOD = 10;
   always #(PERIOD/2) USER_CLK = ~USER_CLK;
   
   // RS232 clock period
   localparam BAUD_RATE = 9600;
   localparam RS232_PERIOD = 1000000000/BAUD_RATE;
   
   initial 
     begin
	// Initialize Inputs
	USER_CLK = 0;
	FPGA_CPU_RESET = 0;
	FPGA_SERIAL_RX = 1'b1;
	
	// Wait 100 ns for global reset to finish
	#100;
	FPGA_CPU_RESET = 1'b1;
		

`ifdef TEST_1
	// Add stimulus here
	// Data word 0xAA
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0; // Start bit
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1; // Stop bit
`endif //  `ifdef TEST_1

`ifdef TEST_2
	// Data word 0x55
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0; // Start bit
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1; 
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1; // Stop bit
`endif

`ifdef TEST_3	
	// Data word 0x61 (the letter 'a')
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0; // Start bit
	
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b0;
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1; 
	
	#(RS232_PERIOD) FPGA_SERIAL_RX = 1'b1; // Stop bit
`endif
	
	// Let the dust settle
	#(3*RS232_PERIOD);
	
	$finish;
		
     end
   
endmodule

