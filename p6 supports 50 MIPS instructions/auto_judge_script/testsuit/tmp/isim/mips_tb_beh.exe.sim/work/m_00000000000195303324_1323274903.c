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
static int ng3[] = {4, 0};



static void Always_45_0(char *t0)
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

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5888);
    *((int *)t2) = 1;
    t3 = (t0 + 5600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB12:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB19:    t2 = (t0 + 1208U);
    t4 = *((char **)t2);

LAB20:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:
LAB25:    t2 = (t0 + 3768U);
    t7 = *((char **)t2);

LAB26:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB2;

LAB7:    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    t7 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB11;

LAB9:    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB11;

LAB13:    t4 = (t0 + 2488U);
    t7 = *((char **)t4);
    t4 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB19;

LAB15:    t4 = (t0 + 2648U);
    t7 = *((char **)t4);
    t4 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB19;

LAB17:    t4 = (t0 + 3128U);
    t7 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t7, 32, t4, 32);
    t8 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB19;

LAB21:    t7 = (t0 + 2328U);
    t8 = *((char **)t7);
    t7 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB25;

LAB23:    t7 = (t0 + 2968U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t8, 32, t7, 32);
    t10 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    goto LAB25;

LAB27:    t8 = (t0 + 3288U);
    t10 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t10, 0, 0, 32, 0LL);
    goto LAB33;

LAB29:    t8 = (t0 + 3448U);
    t10 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t10, 0, 0, 32, 0LL);
    goto LAB33;

LAB31:    t8 = (t0 + 3608U);
    t10 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t10, 0, 0, 32, 0LL);
    goto LAB33;

}


extern void work_m_00000000000195303324_1323274903_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_00000000000195303324_1323274903", "isim/mips_tb_beh.exe.sim/work/m_00000000000195303324_1323274903.didat");
	xsi_register_executes(pe);
}
