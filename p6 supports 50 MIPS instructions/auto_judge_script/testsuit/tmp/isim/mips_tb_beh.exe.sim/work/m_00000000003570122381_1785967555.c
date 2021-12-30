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
static int ng1[] = {16, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {2, 0};



static void Always_26_0(char *t0)
{
    char t7[8];
    char t10[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    t2 = ((char*)((ng0)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB15:    goto LAB2;

LAB7:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng1)));
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    xsi_vlog_mul_concat(t10, 16, 1, t8, 1U, t13, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t10, 16, t9, 16);
    t21 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, 0, 32, 0LL);
    goto LAB15;

LAB9:    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t3, 16, t4, 16);
    t8 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB15;

LAB11:    t3 = ((char*)((ng3)));
    t4 = (t0 + 1048U);
    t8 = *((char **)t4);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t3, 16);
    t4 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB15;

}


extern void work_m_00000000003570122381_1785967555_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000003570122381_1785967555", "isim/mips_tb_beh.exe.sim/work/m_00000000003570122381_1785967555.didat");
	xsi_register_executes(pe);
}
