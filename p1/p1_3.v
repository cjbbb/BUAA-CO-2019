`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:57:11 10/17/2019 
// Design Name: 
// Module Name:    p2_3 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
    assign ext = (EOp==0)?{{16{imm[15]}},imm[15:0]}:
                 (EOp==1)?{{16{0}},imm}:
                 (EOp==2)?{imm,{16{0}}}:
                 (EOp==3)?{{14{imm[15]}},imm[15:0],{2{0}}}:
                 0;



endmodule
