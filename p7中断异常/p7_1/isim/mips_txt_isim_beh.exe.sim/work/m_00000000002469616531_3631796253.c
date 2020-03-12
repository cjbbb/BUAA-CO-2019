/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/p7/p7_1/MUX.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {31U, 0U};



static void Always_39_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2652);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB13:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB25:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1060U);
    t4 = *((char **)t2);

LAB26:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB34:
LAB33:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t7 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 5, 0LL);

LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1336U);
    t7 = *((char **)t4);
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1428U);
    t7 = *((char **)t4);
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1244U);
    t7 = *((char **)t4);
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1520U);
    t7 = *((char **)t4);
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(55, ng0);
    t7 = (t0 + 968U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 16);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 16);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    t17 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 5, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(56, ng0);
    t7 = (t0 + 968U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 11);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 11);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    t17 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 5, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(57, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 5, 0LL);
    goto LAB35;

}


extern void work_m_00000000002469616531_3631796253_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000002469616531_3631796253", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002469616531_3631796253.didat");
	xsi_register_executes(pe);
}
