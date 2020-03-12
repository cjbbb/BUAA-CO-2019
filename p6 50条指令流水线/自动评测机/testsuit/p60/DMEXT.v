`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:11:15 12/05/2019 
// Design Name: 
// Module Name:    DMEXT 
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
module DMEXT(
	input [1:0]Addr,
	input [2:0]load_op ,
	input [31:0]Din,
	output [31:0]Dout
    );
	wire [7:0] Bite [7:0];
	wire [15:0]Halfword[1:0];
	assign {Bite[3],Bite[2],Bite[1],Bite[0]} = Din;
	assign {Halfword[1],Halfword[0]} = Din;
	assign Dout = load_op == 3'b000 ? {{24{Bite[Addr][7]}},Bite[Addr]}: //有符号 lb 扩展 
					  load_op == 3'b001 ? { 24'b0,Bite[Addr]}:					//无符号 lbu 扩展
					  load_op == 3'b010 ? {{16{Halfword[Addr[1]][15]}},Halfword[Addr[1]]}:	//有符号 lh 扩展
					  load_op == 3'b011 ? {16'b0,Halfword[Addr[1]]}://无符号 lhu 扩展
					  load_op == 3'b100 ? Din:
											  Din;
				 
					  
endmodule
