`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:55:34 11/09/2019 
// Design Name: 
// Module Name:    PC 
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
module PC( 
    input clk,
    input reset,
	 input PC_En,
	 input [31:0] next_pc,
    output reg [31:0] PC
    );
    always @(posedge clk)begin
        if(reset==1) begin
            PC <= 32'h00003000;
        end
        else if(PC_En)begin
				PC <= next_pc;
        end
    end

endmodule
