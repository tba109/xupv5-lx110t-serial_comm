/////////////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson 
//
// loopback_top.v
// "Loopback test for the RS232 serialized/deserailizer modules"
// A custom Verilog HDL module
//
/////////////////////////////////////////////////////////////////////////////////////////

module loopback_top
  (
   input USER_CLK, // 100MHz system clock, pin AH15
   input FPGA_CPU_RESET, // active low push button reset, pin E9
   output FPGA_SERIAL_TX, // FPGA serial transmitter, pin AG20
   input FPGA_SERIAL_RX // FPGA serial receiver, pin AG15
   );

   localparam P_SYS_CLK_FREQ_HZ = 100000000;
   localparam P_BAUD_RATE = 9600;

   wire [7:0] data;
   wire       req;
   wire       ack;
      
   rs232_des #(.P_CLK_FREQ_HZ(100000000), .P_BAUD_RATE(9600)) RS232_DES0
     (
      .clk( USER_CLK ),
      .rst_n( FPGA_CPU_RESET ),
      .rx( !FPGA_SERIAL_RX ), // invert because of goofy mark/space business 
      .rx_data( data ),
      .rx_req( req ),
      .rx_ack( ack )
      );

   wire       fpga_serial_tx_wire;
   assign FPGA_SERIAL_TX = !fpga_serial_tx_wire;
   rs232_ser #(.P_CLK_FREQ_HZ(100000000), .P_BAUD_RATE(9600)) RS232_SER0
     (
      .clk( USER_CLK ),
      .rst_n( FPGA_CPU_RESET ),
      .tx( fpga_serial_tx_wire ), // invert because of goofy mark/space business
      .tx_data( data ),
      .tx_req( req ),
      .tx_ack( ack )
      );
   
endmodule
