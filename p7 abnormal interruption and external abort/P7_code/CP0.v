`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:06:58 12/15/2019 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
    input            clk,
	 input            reset,
	 input 				temp_M,
    input [31:0]     IR_M,
	 input [31:0]  	IR_W,
    input [4:0]      A1,         //   mfc0
    input [4:0]      A2,         //  mtc0
    input [31:0]     Din,
    input [31:0]     PC,
    input [6:2]      ExcCode,
    input [7:2]      HWInt, //六个中断设备
    input            WE,
    input            EXLSet,
    input            EXLClr,
	 input 				interrupt,
    output           IntReg,
    output [31:0]    EPC,
    output [31:0]    Dout //Cp0寄存器输出数据
    );
	
    // SR   11
    reg [15:10] im; //6位中断屏蔽 1允许中断 
    reg exl, ie;    //ie: 1允许中断 0，禁止中断      exl 1进入异常不允许中断，0允许中断
    wire [31:0] SR = {16'b0, im, 8'b0, exl, ie};
    // Cause 12
    reg BD_reg;
	 wire BD;
    reg [15:10] hwint_pend;//外部6个中断
    reg [6:2] ExcCode_reg;
    wire [31:0] Cause = {BD_reg, 15'b0, hwint_pend, 3'b0, ExcCode_reg, 2'b0};
	 
    reg [31:0] PRId;
	 reg [31:0] EPC_reg;
	 wire Int;
	 assign Int = (|(HWInt[7:2] & im[15:10])) & ie & !exl;
    assign IntReg   =   (ExcCode > 0 && exl==0) || Int ; //异常+中断 //注意  |使用
	 assign EPC 	  =   EPC_reg;
    assign Dout     =   A1 == 5'd12 ?   SR :
                        A1 == 5'd13 ?   Cause :
                        A1 == 5'd14 ?   EPC :
                        A1 == 5'd15 ?   PRId :
                                        32'd0;
    initial begin

        PRId    <= 32'h1837_3599;  //ID
        im      <= 6'b0;
        exl     <= 1'b0;
        ie      <= 1'b1;
        BD_reg  <= 1'b0;
        hwint_pend <= 6'b0;
        ExcCode_reg <= 5'b0;
        EPC_reg  <= 32'b0;
    end
      
	
	 assign	BD = temp_M;//(IR_W[`op]==`beq ||IR_W[`op]==`bne || IR_W[`op]==`blez || IR_W[`op]==`bgez_bltz || IR_W[`op]==`bgtz ||
                   // IR_W[`op]==`j || IR_W[`op]==`jal || (IR_W[`func]==`jalr && IR_W[`op]==`R) || (IR_W[`func]==`jr && IR_W[`op]==`R));
		
    always @(posedge clk) begin 
			
        if (reset) begin
            im      = 6'b0;
            exl     = 1'b0;
            ie      = 1'b1;
            BD_reg  = 1'b0;
            hwint_pend = 6'b0;
            ExcCode_reg = 5'b0;
            EPC_reg  = 32'b0;
            PRId    = 32'h1737_3552;
        end
        else begin	
			
					  hwint_pend  <= HWInt;
                if (Int) begin //ExlSet
						 EPC_reg     <= BD ? {PC[31:2], 2'b0} - 4 : {PC[31:2], 2'b0};//延迟操前一条 // 正常
						  BD_reg <= BD ? 1:0; 
						   ExcCode_reg <= 0;
                    exl <= 1'b1;
						 
                   // hwint_pend  <= HWInt;
                   
						  //BD_reg = BD; 
                end
					else if(ExcCode && !exl)begin
						  EPC_reg     <= BD ? {PC[31:2], 2'b0} - 4 : {PC[31:2], 2'b0};//延迟操前一条 // 正常
						   BD_reg <= BD; 
						  ExcCode_reg <= ExcCode;
						 
						  exl <= 1'b1;
                   // hwint_pend  <= HWInt;
                    
						  //BD_reg = BD; 
					 end

					else if (WE) begin // mtc0
						case (A2)
                    5'd12 :     {im, exl, ie} <= {Din[15:10], Din[1:0]};  // SR            //安排ie/exl/im
					//	  5'd13 : 	  hwint_pend <= Din[15:10];
                    5'd14 :     EPC_reg <=  {Din[31:2], 2'b0};
						//  5'd15 : 	  PRId <= Din;
                endcase 					 
					 end
               
					if (EXLClr) begin
                    exl <= 1'b0;
                end
					if(IntReg)begin
						exl <= 1;
					end
        end
    end
	 

endmodule
