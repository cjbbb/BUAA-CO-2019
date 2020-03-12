`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:09:53 09/08/2019 
// Design Name: 
// Module Name:    code 
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
module code(
    input Clk,
    input Reset,
    input Slt,
    input En,
    output reg [63:0] Output0,
    output reg [63:0] Output1
    );
	reg [4:0] count;
	
	initial begin 
		Output0 <= 0;
		Output1 <= 0;
		count <= 0;
	end
	
	always @(posedge Clk) begin
		if(Reset == 1) begin
			count <= 0;
			Output0 <= 0;
			Output1 <= 0;
		end
		else if (Reset == 0) begin
			if(En) begin
				if(Slt == 0) begin
				Output0 <= Output0 + 1;
				end
				if(Slt == 1) begin
					count <= count +1;
				end
			end
		end
	end
		
	always @(count) begin
		if(count == 4)begin
			Output1 <= Output1 +1;
		end 
	end
	
	always@ (Output1)begin
		count <= 0;
	end
	 
endmodule
