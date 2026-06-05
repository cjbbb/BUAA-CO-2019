`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:14 11/19/2019 
// Design Name: 
// Module Name:    D_E_Register 
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
module D_E_Register(
	input clk,
	input reset,
	input [31:0] IR_D,
	input [31:0] PC_D,
	input [31:0] PC8_D,
	input [31:0] RF_RD1,
	input [31:0] RF_RD2,
	input [31:0] EXT_D,
	input temp_D,
	output reg [31:0] IR_E,
	output reg [31:0] PC_E,
	output reg [31:0] PC8_E,
	output reg [31:0] RS_E,
	output reg [31:0] RT_E,
	output reg [31:0] EXT_E,
	output reg temp_E
    );

	initial begin
		IR_E <= 0;
		PC_E <= 0;
		PC8_E<=0;
		RS_E<=0;
		RT_E<=0;
		EXT_E<=0;
		temp_E<=0;
	end
	
	always @(posedge clk) begin
		if(reset)begin
			IR_E <= 0;
			PC_E <= 0;
			PC8_E<=0;
			RS_E<=0;
			RT_E<=0;
			EXT_E<=0;
			temp_E<=0;
		end
		
		else  begin
			IR_E <= IR_D;
			PC_E <= PC_D;
			PC8_E <= PC8_D;
			RS_E <= RF_RD1;
			RT_E <= RF_RD2;
			EXT_E <= EXT_D;
			temp_E<=temp_D;
		end
	end
endmodule
