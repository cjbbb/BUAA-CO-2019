`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:27:50 10/17/2019 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output reg out
    );
    reg [31:0]state;
    initial begin
        state<=0;
        out<=0;
    end
    always@(clr)begin
        if(clr==1)begin
            state<=0;
            out<=0;
        end
    end
    
    always @(posedge clk)begin
        case(state)
        0:begin
            if(in<="9"&&in>="0")begin
                out<=1;
                state<=1;
            end
            if(in=="+"||in=="*")begin
                state<=3;
                out<=0;
            end
        end
        1:begin
            if(in<="9"&&in>="0")begin
                out<=0;
                state<=3;
            end
            if(in=="+"||in=="*")begin
                state<=2;
                out<=0;
            end
        end
        2:begin
            if(in<="9"&&in>="0")begin
                out<=1;
                state<=1;
            end
            if(in=="+"||in=="*")begin
                state<=3;
                out<=0;
            end
        end
        3:begin
            state<=state;
            out<=0;
        end
        default: ;
        endcase;
    end
endmodule