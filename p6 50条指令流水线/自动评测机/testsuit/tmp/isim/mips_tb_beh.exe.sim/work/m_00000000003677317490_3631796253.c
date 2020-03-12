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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static int ng0[] = {0, 0};
static int ng1[] = {1, 0};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {31U, 0U};



static void Always_38_0(char *t0)
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

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4448);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB13:    t2 = (t0 + 2008U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    t2 = ((char*)((ng0)));
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB23:    t2 = (t0 + 1848U);
    t4 = *((char **)t2);

LAB24:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    t2 = ((char*)((ng0)));
    t7 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 5, 0LL);

LAB33:    goto LAB2;

LAB7:    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB13;

LAB9:    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB13;

LAB15:    t4 = (t0 + 2328U);
    t7 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB23;

LAB17:    t4 = (t0 + 2488U);
    t7 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB23;

LAB19:    t4 = (t0 + 2168U);
    t7 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB23;

LAB25:    t7 = (t0 + 1688U);
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
    t17 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 5, 0LL);
    goto LAB33;

LAB27:    t7 = (t0 + 1688U);
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
    t17 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 5, 0LL);
    goto LAB33;

LAB29:    t7 = ((char*)((ng3)));
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 5, 0LL);
    goto LAB33;

}


extern void work_m_00000000003677317490_3631796253_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000003677317490_3631796253", "isim/mips_tb_beh.exe.sim/work/m_00000000003677317490_3631796253.didat");
	xsi_register_executes(pe);
}
