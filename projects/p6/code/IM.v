`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:33:37 11/09/2019 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] PC,
    output [31:0] Instruction
    );
	 wire [31:0] pc;
    reg [31:0]im [0:4095];
    initial begin
        $readmemh("code.txt",im);
    end
	 assign pc = PC - 32'h00003000;
    assign Instruction = im[pc[13:2]];

endmodule
