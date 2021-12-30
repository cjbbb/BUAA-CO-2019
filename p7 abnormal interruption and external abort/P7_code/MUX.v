`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:29:58 11/19/2019 
// Design Name: 
// Module Name:    MUX 
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
module MUX(
	input [31:0] IR_E,
	input [31:0] RT_E,
	input [31:0] EXT_E,
	input [4:0]ALUB_sel,
	input [31:0] IR_W,
	input [4:0] RegDst,
	input [4:0] MemtoReg,
	input [31:0] PC8_W,
	input [31:0] AO_W,
	input [31:0] DR_W,
	input [31:0] cp0_W,
	output reg [31:0] ALU_B,
	output reg [4:0] WA,
	output reg [31:0] WD
	);

	always @(*)begin
		case(ALUB_sel)
			0: ALU_B <= RT_E;
			1:	ALU_B <= EXT_E;
			default: ALU_B<=0;
		endcase
		
		case(MemtoReg) 
			0: WD <= AO_W;
			1: WD <= DR_W;
			2: WD <= PC8_W;
			3: WD <= cp0_W;
			default: WD <= 0;
		endcase
		
		case(RegDst)
			0: WA <= IR_W[`rt]; //rt
			1: WA <= IR_W[`rd]; //rd
			2: WA <= 32'h1f;
			default : WA <=0;
		endcase
			
	end
endmodule
