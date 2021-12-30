`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:04 11/09/2019 
// Design Name: 
// Module Name:    EXT 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module EXT(
    input [15:0] in,
    output reg [31:0] out,
    input ExtOp
    );
	 always @(*)begin
		case(ExtOp)
			0: out <= {{16{in[15]}},in};
			1: out <=  {{16{1'b0}},in};
		endcase
	 end
endmodule
