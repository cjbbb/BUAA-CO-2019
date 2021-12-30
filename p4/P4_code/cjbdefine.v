`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:16 11/15/2019 
// Design Name: 
// Module Name:    define 
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
//RegDst
`define Rt 3'b000
`define Rd 3'b001
`define jal 3'b010 
//ALUSrc
`define RD2 0
`define imm 1 
//MemtoReg
`define alu 3'b000
`define dm 3'b001
`define lui 3'b010
`define pc4 3'b011

//ALUCtrl
`define add 3'b000
`define sub 3'b001
`define or 3'b0010
//branch
`define pc 3'b000
`define beq 3'b001
//`define jal 3'b010
`define jr 3'b011