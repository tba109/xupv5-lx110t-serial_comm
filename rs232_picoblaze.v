////////////////////////////////////////////////////////////////////////////////////////
// Tyler Anderson Wed, Sat Apr 11 08:19:56 EDT 2015
//
// rs232_if.v
// "RS-232-to-Picoblaze Interface"
// A custom Verilog HDL module
//
// Deseralize receive (rx) packets and converts the hexadecimal characters to their
// binary equivalent command (cmd).
//
// Converts binary equivalent response (rsp) packets to their hexadecimal character
// equivalent and transmits the resulting packet (tx).   
//
/////////////////////////////////////////////////////////////////////////////////////////

