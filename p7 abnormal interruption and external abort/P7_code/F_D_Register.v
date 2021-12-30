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
`include"define.v"
module F_D_Register(
	input stall,
	input clk,
	input eret_D,
	input reset,
	input En,
	input IntReg,
	input [4:0] ExcCode_D_in,
	input [31:0] Instr,
	input [31:0] next_pc,
	input [31:0] PC,
	input temp_F,
	output reg [31:0] IR_D,
	output reg [31:0] PC_D,
	output reg [31:0]	PC8_D,
	output reg temp_D,
	output reg [4:0] ExcCode_D
    );
	 
	initial begin
		IR_D <= 0;
		PC_D <=0;
		PC8_D <= 0;
		temp_D <= 0;
		ExcCode_D <= 0;
	end 
	
	always@(posedge clk)begin
		if(reset) begin
			IR_D <= 0;
			PC_D <=0; 
			PC8_D <= 0;
			temp_D <= 0;
			ExcCode_D <= 0;
		end
		else if(En) begin
			IR_D <= (eret_D || IntReg)? 0:Instr;
		//Sss	IR_D <= Instr;
			PC_D <=(eret_D)? next_pc:PC;
		//	PC_D <=PC;
			PC8_D <=(eret_D)? next_pc+8:PC+8;
		//	PC8_D <= PC+8;
			temp_D <= temp_F;
			ExcCode_D <= ExcCode_D_in;
		end
	end

endmodule
