`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:05:48 11/19/2019 
// Design Name: 
// Module Name:    M_W_Register 
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
module M_W_Register(
    input clk,
    input reset,
    input [31:0] IR_M,
    input [31:0] PC_M,
    input [31:0] PC8_M,
    input [31:0] AO_M,
    input [31:0] DR_M,
	 input temp_M,
    output reg [31:0] IR_W,
    output reg [31:0] PC_W,
    output reg [31:0] PC8_W,
    output reg [31:0] AO_W,
    output reg [31:0] DR_W,
	 output reg temp_W
    );

	initial begin
		IR_W <= 0;
		PC_W <= 0;
		PC8_W <= 0;
		AO_W <= 0;
		DR_W <= 0;
		temp_W<=0;
	end
	
	always @(posedge clk)begin
		if(reset) begin
			IR_W <= 0;
			PC_W <= 0;
			PC8_W <= 0;
			AO_W <= 0;
			DR_W <= 0;
			temp_W<=0;
		end
		else begin
			IR_W <= IR_M;
			PC_W <= PC_M;
			PC8_W <= PC8_M;
			AO_W <= AO_M;
			temp_W <= temp_M;
			DR_W <= DR_M;
		end
	end
endmodule
