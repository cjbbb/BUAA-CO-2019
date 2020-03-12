`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:33:30 10/17/2019 
// Design Name: 
// Module Name:    p1_4 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
    );
    reg [31:0]count;
    initial begin
        Output <=0;
        Overflow <=0;
        count <= 0;
    end

    always @ (posedge Clk)begin
        if(Reset==1)begin
            Output <=0;
            count <=0;
            Overflow <=0;
        end
        else if(En==1)begin
            count <=count+1;
        end
        
    end
    always@(count) begin
        if(count==0) begin
            Output<=3'b000;
        end
        else if(count==1)begin
            Output<=3'b001;
        end
        else if(count==2)begin
            Output<=3'b011;
        end
        else if(count==3)begin
            Output<=3'b010;
        end
        else if(count==4) begin
            Output<=3'b110;
        end
        else if(count==5) begin
            Output<=3'b111;
        end
        else if(count==6) begin
            Output<=3'b101;
        end
        else if(count==7) begin
            Output<=3'b100;
        end
        else if(count>=8)begin
            Output <= 3'b000;
            Overflow<=1;
            count <=0;
        end
    end
endmodule
