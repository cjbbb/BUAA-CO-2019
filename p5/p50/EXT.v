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
    input [2:0]ExtOp,
    output reg [31:0] out
    );
    always @(*) begin
		case(ExtOp)
			0: out <= {{16{in[15]}},in};
			1: out <= {{16{1'b0}},in};
			2:	out <= {in,{16{1'b0}}};
			default: out <= 0;
		endcase
	 end
endmodule
