`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:36:45 11/19/2019 
// Design Name: 
// Module Name:    F_D_Register 
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
module F_D_Register(
	input clk,
	input reset,
	input En,
	input [31:0] Instr,
	input [31:0] PC,
	input temp_F,
	output reg [31:0] IR_D,
	output reg [31:0] PC_D,
	output reg [31:0]	PC8_D,
	output reg temp_D
    );
	initial begin
		IR_D <= 0;
		PC_D <=0;
		PC8_D <= 0;
		temp_D <= 0;
	end
	
	always@(posedge clk)begin
		if(reset) begin
			IR_D <= 0;
			PC_D <=0;
			PC8_D <= 0;
			temp_D <= 0;
		end
		else if(En) begin
			IR_D <= Instr;
			PC_D <=PC;
			PC8_D <= PC+8;
			temp_D <= temp_F;
		end
	end

endmodule
