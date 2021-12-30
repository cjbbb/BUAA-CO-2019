`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:26:13 12/23/2019 
// Design Name: 
// Module Name:    beifen 
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
module beifen(
	input clk,
	input [31:0] IR_W,
	output reg [31:0] IR_B1,
	output reg [31:0] IR_B2,
	output reg [31:0] IR_B3
    );
	initial begin
		IR_B1 = 0;
		IR_B2 = 0; 
		IR_B3 = 0;
	end
	always @(posedge clk)begin
		IR_B1 <= IR_W;
		IR_B2 <= IR_B1;
		IR_B3 <= IR_B2;
		 
	end

endmodule
