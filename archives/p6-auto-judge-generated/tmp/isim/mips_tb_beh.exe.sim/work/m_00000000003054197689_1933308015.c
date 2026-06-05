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
static int ng3[] = {3, 0};



static void Always_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5248);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2328U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    t2 = (t0 + 2488U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    t2 = (t0 + 2648U);
    t4 = *((char **)t2);

LAB22:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    t2 = (t0 + 2808U);
    t7 = *((char **)t2);

LAB30:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB37:    t2 = (t0 + 2968U);
    t8 = *((char **)t2);

LAB38:    t2 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB2;

LAB7:    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB13;

LAB9:    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB13;

LAB11:    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB13;

LAB15:    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB21;

LAB17:    t4 = (t0 + 1848U);
    t7 = *((char **)t4);
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB21;

LAB19:    t4 = (t0 + 2008U);
    t7 = *((char **)t4);
    t4 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB21;

LAB23:    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    t7 = (t0 + 2008U);
    t8 = *((char **)t7);
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB29;

LAB27:    t7 = (t0 + 2168U);
    t8 = *((char **)t7);
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB29;

LAB31:    t8 = (t0 + 1528U);
    t9 = *((char **)t8);
    t8 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB37;

LAB33:    t8 = (t0 + 2008U);
    t9 = *((char **)t8);
    t8 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB37;

LAB35:    t8 = (t0 + 2168U);
    t9 = *((char **)t8);
    t8 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB37;

LAB39:    t9 = (t0 + 1688U);
    t10 = *((char **)t9);
    t9 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 32, 0LL);
    goto LAB43;

LAB41:    t9 = (t0 + 2168U);
    t10 = *((char **)t9);
    t9 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 32, 0LL);
    goto LAB43;

}


extern void work_m_00000000003054197689_1933308015_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000003054197689_1933308015", "isim/mips_tb_beh.exe.sim/work/m_00000000003054197689_1933308015.didat");
	xsi_register_executes(pe);
}
