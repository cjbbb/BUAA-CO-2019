`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:16:09 11/19/2019 
// Design Name: 
// Module Name:    E_M_Register 
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
module E_M_Register(
    input clk,
    input reset,
    input [31:0] IR_E,
	 input [31:0] PC_E,
    input [31:0] PC8_E,
    input [31:0] RT_E,
    input [31:0] AO_E,
	 input temp_E,
    output reg[31:0] IR_M,
	 output reg[31:0] PC_M,
    output reg[31:0] PC8_M,
    output reg[31:0] AO_M,
    output reg[31:0] RT_M,
	 output reg temp_M
    );
	initial begin
		IR_M <= 0;
		PC_M <=0;
		PC8_M <= 0;
		AO_M <= 0;
		RT_M <= 0;
		temp_M <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			IR_M <= 0;
			temp_M <= 0;
			PC_M<=0;
			PC8_M <= 0;
			AO_M <= 0;
			RT_M <= 0;
		end
		else begin
			IR_M <= IR_E;
			PC_M <= PC_E;
			PC8_M <= PC8_E;
			AO_M <= AO_E;
			RT_M <= RT_E;
			temp_M <= temp_E;
		end
	end

endmodule
