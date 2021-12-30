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
static int ng1[] = {0, 0, 0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {5, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {10, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {1, 0};



static void Cont_36_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5624);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5512);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5528);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_38_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng0)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);

LAB1:    return;
}

static void Always_45_3(char *t0)
{
    char t13[8];
    char t41[16];
    char t42[16];
    char t43[16];
    char t44[8];
    char t45[8];
    char t48[8];
    char t49[16];
    char t50[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB45;

LAB46:
LAB47:
LAB16:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:
LAB17:    t28 = (t0 + 1848U);
    t29 = *((char **)t28);
    t28 = (t29 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB18;

LAB19:
LAB20:    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB16;

LAB18:
LAB21:    t35 = (t0 + 1688U);
    t36 = *((char **)t35);

LAB22:    t35 = ((char*)((ng2)));
    t37 = xsi_vlog_unsigned_case_compare(t36, 3, t35, 3);
    if (t37 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t37 = xsi_vlog_unsigned_case_compare(t36, 3, t2, 3);
    if (t37 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t37 = xsi_vlog_unsigned_case_compare(t36, 3, t2, 3);
    if (t37 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng7)));
    t37 = xsi_vlog_unsigned_case_compare(t36, 3, t2, 3);
    if (t37 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng8)));
    t37 = xsi_vlog_unsigned_case_compare(t36, 3, t2, 3);
    if (t37 == 1)
        goto LAB31;

LAB32:
LAB33:    t2 = ((char*)((ng9)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB23:
LAB34:    t38 = (t0 + 1368U);
    t39 = *((char **)t38);
    t38 = (t0 + 1528U);
    t40 = *((char **)t38);
    xsi_vlog_unsigned_multiply(t41, 64, t39, 32, t40, 32);
    t38 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t38, t41, 0, 0, 64, 0LL);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB33;

LAB25:
LAB35:    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    xsi_vlogtype_sign_extend(t41, 64, t4, 32);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    xsi_vlogtype_sign_extend(t42, 64, t5, 32);
    xsi_vlog_signed_multiply(t43, 64, t41, 64, t42, 64);
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t43, 0, 0, 64, 0LL);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB33;

LAB27:
LAB36:    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t4, 32, t5, 32);
    t3 = (t0 + 1368U);
    t11 = *((char **)t3);
    t3 = (t0 + 1528U);
    t12 = *((char **)t3);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_mod(t44, 32, t11, 32, t12, 32);
    xsi_vlogtype_concat(t41, 64, 64, 2U, t44, 32, t13, 32);
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t41, 0, 0, 64, 0LL);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB33;

LAB29:
LAB37:    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t45, 0, 8);
    xsi_vlog_signed_divide(t45, 32, t4, 32, t5, 32);
    t3 = (t0 + 1368U);
    t11 = *((char **)t3);
    t3 = (t0 + 1528U);
    t12 = *((char **)t3);
    memset(t48, 0, 8);
    xsi_vlog_signed_mod(t48, 32, t11, 32, t12, 32);
    xsi_vlogtype_concat(t41, 64, 64, 2U, t48, 32, t45, 32);
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t41, 0, 0, 64, 0LL);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB33;

LAB31:
LAB38:    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    xsi_vlogtype_zero_extend(t41, 64, t4, 32);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    xsi_vlogtype_zero_extend(t42, 64, t5, 32);
    xsi_vlog_unsigned_multiply(t43, 64, t41, 64, t42, 64);
    t3 = (t0 + 3208);
    t11 = (t3 + 56U);
    t12 = *((char **)t11);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlogtype_concat(t49, 64, 64, 2U, t28, 32, t12, 32);
    xsi_vlog_unsigned_add(t50, 64, t43, 64, t49, 64);
    t29 = (t0 + 3528);
    xsi_vlogvar_assign_value(t29, t50, 0, 0, 64);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB33;

LAB39:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB41;

LAB42:    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB44;

LAB45:
LAB48:    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t21 = *((char **)t12);
    t22 = (t21 + 4);
    t14 = *((unsigned int *)t22);
    t15 = (~(t14));
    t16 = *((unsigned int *)t21);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB47;

LAB49:
LAB52:    t28 = (t0 + 3368);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t38 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t35, 32, t38, 32);
    t39 = (t0 + 3368);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 32);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;

LAB56:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB51;

LAB55:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB57:
LAB60:    t28 = (t0 + 3528);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t38 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t38, t35, 0, 0, 32, 0LL);
    t39 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t39, t35, 32, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB59;

}


extern void work_m_00000000002491177041_3964289794_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Initial_38_2,(void *)Always_45_3};
	xsi_register_didat("work_m_00000000002491177041_3964289794", "isim/mips_tb_beh.exe.sim/work/m_00000000002491177041_3964289794.didat");
	xsi_register_executes(pe);
}
