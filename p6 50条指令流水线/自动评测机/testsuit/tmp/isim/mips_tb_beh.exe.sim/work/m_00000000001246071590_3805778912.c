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
static int ng0[] = {32, 0};
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {5, 0};
static int ng4[] = {2, 0};
static int ng5[] = {10, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};



static void Cont_39_0(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 32, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 64, 64, 2U, t5, 32, t4, 32);
    t16 = (t0 + 5464);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5352);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_40_1(char *t0)
{
    char t3[16];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng0)));
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 32, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 64, 64, 2U, t5, 32, t4, 32);
    t16 = (t0 + 5528);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 5368);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Initial_42_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_51_3(char *t0)
{
    char t11[8];
    char t29[16];
    char t30[16];
    char t31[16];
    char t32[8];
    char t33[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
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

LAB7:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB13:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB16:
LAB8:    goto LAB2;

LAB6:
LAB9:    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:
LAB17:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:
LAB20:    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t11) = 1;

LAB39:    t19 = (t11 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t34 = (t25 & t24);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB40;

LAB41:
LAB42:    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t12 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t11) = 1;

LAB47:    t19 = (t11 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t34 = (t25 & t24);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB16;

LAB18:
LAB21:    t26 = ((char*)((ng2)));
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);

LAB22:    t2 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:
LAB32:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t29, 64, t5, 32);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    xsi_vlogtype_sign_extend(t30, 64, t12, 32);
    xsi_vlog_signed_multiply(t31, 64, t29, 64, t30, 64);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t31, 0, 0, 32);
    t13 = (t0 + 3048);
    xsi_vlogvar_assign_value(t13, t31, 32, 0, 32);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB31;

LAB25:
LAB33:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    xsi_vlog_unsigned_multiply(t29, 64, t5, 32, t12, 32);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t29, 0, 0, 32);
    t13 = (t0 + 3048);
    xsi_vlogvar_assign_value(t13, t29, 32, 0, 32);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB31;

LAB27:
LAB34:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t5, 32, t12, 32);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t33, 0, 0, 32);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t33, 0, 8);
    xsi_vlog_signed_mod(t33, 32, t4, 32, t5, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t33, 0, 0, 32);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB31;

LAB29:
LAB35:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1688U);
    t12 = *((char **)t4);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_divide(t11, 32, t5, 32, t12, 32);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t4, 32, t5, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t11, 0, 0, 32);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB31;

LAB38:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB40:
LAB43:    t20 = (t0 + 1528U);
    t26 = *((char **)t20);
    t20 = (t0 + 2728);
    xsi_vlogvar_assign_value(t20, t26, 0, 0, 32);
    goto LAB42;

LAB46:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB47;

LAB48:
LAB51:    t20 = (t0 + 1528U);
    t26 = *((char **)t20);
    t20 = (t0 + 2888);
    xsi_vlogvar_assign_value(t20, t26, 0, 0, 32);
    goto LAB50;

LAB52:
LAB55:    t13 = (t0 + 3368);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t26 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t27 = (t20 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB57;

LAB56:    t36 = (t26 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB57;

LAB60:    if (*((unsigned int *)t20) > *((unsigned int *)t26))
        goto LAB58;

LAB59:    t38 = (t11 + 4);
    t14 = *((unsigned int *)t38);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB54;

LAB57:    t37 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB59;

LAB58:    *((unsigned int *)t11) = 1;
    goto LAB59;

LAB61:
LAB64:    t39 = (t0 + 3368);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t41, 32, t42, 32);
    t43 = (t0 + 3368);
    xsi_vlogvar_assign_value(t43, t32, 0, 0, 32);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t13 = (t5 + 4);
    t19 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t13);
    t10 = *((unsigned int *)t19);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB68;

LAB65:    if (t18 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t11) = 1;

LAB68:    t26 = (t11 + 4);
    t23 = *((unsigned int *)t26);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t34 = (t25 & t24);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB69;

LAB70:
LAB71:    goto LAB63;

LAB67:    t20 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB68;

LAB69:
LAB72:    t27 = (t0 + 3048);
    t36 = (t27 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 2728);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 32);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB71;

}


extern void work_m_00000000001246071590_3805778912_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_40_1,(void *)Initial_42_2,(void *)Always_51_3};
	xsi_register_didat("work_m_00000000001246071590_3805778912", "isim/mips_tb_beh.exe.sim/work/m_00000000001246071590_3805778912.didat");
	xsi_register_executes(pe);
}
