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
module ALU(
	 input [4:0] sa,
    input [31:0] A,
    input [31:0] B,
    input [4:0] ALUCtrl,
    output reg [31:0] Result
    );

    always @(*)begin
        case(ALUCtrl)
            0:begin
                Result <= A + B;
            end
            1:begin
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
