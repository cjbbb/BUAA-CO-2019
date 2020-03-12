`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:26:52 11/09/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	 input [31:0] IR_E,
	 input [4:0] sa,
    input [31:0] A,
    input [31:0] B,
    input [4:0] ALUCtrl,
    output reg [31:0] Result,
	 output overflow,
	 output reg overflow_DM
    );
	 wire add = (IR_E[`op]==`R && IR_E[`func]==`ADD);
	 wire addi = (IR_E[`op]==`addi);
	 wire sub = (IR_E[`op]==`R && IR_E[`func]==`SUB);
	 wire [32:0] temp;
	 reg [32:0] temp_DM;
	 assign temp = (add|addi) ? {A[31], A} + {B[31], B} :
						 sub 	 	  ? {A[31], A} - {B[31], B} :
																	   0;
	 assign overflow = (temp[32] == temp[31])? 0:1;
    always @(*)begin
        case(ALUCtrl)
            0:begin
					temp_DM = {A[31], A} + {B[31], B};
					 overflow_DM = (temp_DM[32] == temp_DM[31])? 0:1;
					    Result <= A + B;
            end
            1:begin
					temp_DM = {A[31], A} - {B[31], B};
					overflow_DM = (temp_DM[32] == temp_DM[31])? 0:1;
               Result <= A - B;
            end
            2:begin
                Result <= A | B;
            end
            3:begin
                Result <= A & B;
            end 
				4:begin
					 Result <= A ^ B;
				end
				5:begin
					 Result <= ~(A | B);
				end
				6:begin
					 Result <= ($signed(A)<$signed(B)) ? 32'b1 : 32'b0;
				end
				7:begin
					 Result <= (A<B) ? 32'b1 : 32'b0;
				end
				8:begin //sll
					 Result <= B<<sa;
				end
				9:begin
					 Result <= B>>sa;
				end
				10:begin
					 Result <= B>>A[4:0];
				end
				11:begin
					 Result <= B<<A[4:0];
				end
				12:begin
					 Result <= B[31]==1?{32'hffffffff,B}>>sa:{32'h00000000,B}>>sa;//sra
				end
				13:begin
					 Result <= B[31]==1?{32'hffffffff,B}>>A[4:0]:{32'h00000000,B}>>A[4:0];//srav
				end
            default begin
                Result <= 0;
            end                     
        endcase
    end
endmodule
