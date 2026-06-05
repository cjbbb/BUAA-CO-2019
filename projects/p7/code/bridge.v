`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:12 12/15/2019 
// Design Name: 
// Module Name:    bridge 
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
module bridge(
    input [31:0]    PrAddr,
    input [31:0]    PrWD,
    input [31:0]    DEV0_RD,
    input [31:0]    DEV1_RD,
    input			  PrWE,		
    output          DEV0_WE, //写使能
    output          DEV1_WE, //写使能
	 output [31:0]   PrRD,    // ReadData
    output [31:0]    DEV_Addr, //Dev 地址
    output [31:0]   DEV_WD    //写入数据
    );
	
	 wire DEV0,DEV1;
	 assign DEV0    = (32'h0000_7f00 <= PrAddr && PrAddr <= 32'h0000_7f0b);
    assign DEV1    = (32'h0000_7f10 <= PrAddr && PrAddr <= 32'h0000_7f1b);
	 assign DEV0_WE = DEV0 && PrWE;
	 assign DEV1_WE = DEV1 && PrWE;
	 assign DEV_WD  = PrWD;
	 assign DEV_Addr = PrAddr;
	 assign PrRD 	 = DEV0 ? DEV0_RD:
							DEV1 ? DEV1_RD:
										32'b0;
							
endmodule
