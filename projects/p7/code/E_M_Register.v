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
`include "define.v"
module E_M_Register(
    input clk,
    input reset,
	 input IntReg,
	 input overflow_DM,
	 input [4:0] ExcCode_M_in,
    input [31:0] IR_E,
	 input [31:0] PC_E,
    input [31:0] PC8_E,
    input [31:0] RT_E,
    input [31:0] AO_E,
	 input [31:0] hi,
	 input [31:0] lo,
	 input temp_E,
    output reg[31:0] IR_M,
	 output reg[31:0] PC_M,
	 output reg overflow_DM_M,
    output reg[31:0] PC8_M,
    output reg[31:0] AO_M,
    output reg[31:0] RT_M,
	 output reg temp_M,
	 output reg [4:0] ExcCode_M
    );
	 
	wire mflo,mfhi;
	assign mflo = IR_E[`func]==`mflo && IR_E[`op]==`R;
	assign mfhi = IR_E[`func]==`mfhi && IR_E[`op]==`R;
	wire [31:0] AO_E_temp;
/*	assign AO_E_temp =  mflo ? lo:
							  mfhi ? hi:
							  AO_E;*/
	initial begin
		IR_M <= 0;
		PC_M <=0;
		PC8_M <= 0;
		AO_M <= 0;
		RT_M <= 0;
		temp_M <= 0;
		ExcCode_M <= 0;
		overflow_DM_M <= 0;
	end
	always @(posedge clk) begin
		if(reset) begin
			IR_M = 0;
			temp_M = 0;
			PC_M=0;
			PC8_M = 0;
			AO_M = 0;
			RT_M = 0;
			ExcCode_M = 0;
			overflow_DM_M = 0;
		end
		else if(IntReg)begin
			IR_M <= 0;
			PC_M <= PC_E;
			RT_M <= 0;
			temp_M <= temp_E;
			ExcCode_M <= 0;
			PC8_M <= PC8_E;
			overflow_DM_M <= 0;
			AO_M <= 0;
		end
		else begin
			IR_M = IR_E;
			PC_M = PC_E;
			PC8_M = PC8_E;
			RT_M = RT_E;
			temp_M = temp_E;
			ExcCode_M = ExcCode_M_in;
			overflow_DM_M = overflow_DM;
			if(mflo)begin
				AO_M = lo;
			end
			else if(mfhi)begin
				AO_M = hi;
			end
			else if(!mflo&&!mfhi) begin
				AO_M = AO_E;
			end
			//$display("%H",AO_M);
		end
	end

endmodule
