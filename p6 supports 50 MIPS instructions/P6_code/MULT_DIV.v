`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:13 12/06/2019 
// Design Name: 
// Module Name:    MULT_DIV 
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
module MULT_DIV(
	input clk,
	input reset,
	input start,
	input [31:0] A,
	input [31:0] B,
	input [2:0] MD_OP,
	output reg busy,
	output reg [31:0] hi,
	output reg [31:0] lo
    );
	reg [31:0] temphi;
	reg [31:0] templo;
	reg [31:0] cycle;
	
	wire [63:0] signedA;
	wire [63:0] signedB;
	assign signedA = {{32{A[31]}},A};
	assign signedB = {{32{B[31]}},B};
		
	initial begin
		busy   <= 0;
		hi 	 <= 0;
		lo 	 <= 0;
		temphi <= 0;
		templo <= 0;
		cycle  <= 0;
	end
	
	always @(posedge clk) begin
		if(reset)begin
		end
		else if(!busy)begin
			if(start)begin
				busy = 1;
				case(MD_OP)
				0:begin //mult
					{temphi,templo} = $signed(A) * $signed(B);
					cycle = 5;
				end
				1:begin //multu
					{temphi,templo} = A*B;
					cycle = 5;
 				end
				2:begin //div
					templo = $signed(A)/$signed(B);
					temphi = $signed(A)%$signed(B);
					cycle = 10;
				end
				3:begin //divu
					templo = A/B;
					temphi = A%B;
					cycle = 10;
				end
				endcase
			end
			if(MD_OP==4)begin //mthi
				hi=A;
			end
			if(MD_OP==5)begin //mtlo
				lo=A;
			end
		end
		
		else if(busy) begin
			if(cycle > 0)begin
				cycle = cycle - 1;
				if(cycle == 0)begin
					hi = temphi;
					lo = templo;
					busy = 0;
				end
			end
		end
		
	end
endmodule
