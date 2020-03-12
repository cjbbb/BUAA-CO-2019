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
static const char *ng0 = "D:/p7/p7_1/MULT_DIV.v";
static int ng1[] = {32, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {5, 0};
static int ng5[] = {2, 0};
static int ng6[] = {10, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};



static void Cont_42_0(char *t0)
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

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1060U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1060U);
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
    t16 = (t0 + 3512);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 3452);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_43_1(char *t0)
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

LAB0:    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1152U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1152U);
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
    t16 = (t0 + 3548);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t16, 0, 63);
    t21 = (t0 + 3460);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Initial_45_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_56_3(char *t0)
{
    char t13[8];
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
    char *t11;
    char *t12;
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

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3468);
    *((int *)t2) = 1;
    t3 = (t0 + 3284);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(67, ng0);

LAB10:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t5) == 0)
        goto LAB19;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB22:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1656);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB61;

LAB62:
LAB63:
LAB25:
LAB17:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(68, ng0);

LAB14:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2116);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB13;

LAB15:    xsi_set_current_line(72, ng0);

LAB18:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2208);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = (t0 + 1748);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2300);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB17;

LAB19:    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(76, ng0);

LAB26:    xsi_set_current_line(77, ng0);
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t11);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t13) = 1;

LAB48:    t19 = (t13 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t34 = (t25 & t24);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t11);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t13) = 1;

LAB56:    t19 = (t13 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t34 = (t25 & t24);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB25;

LAB27:    xsi_set_current_line(77, ng0);

LAB30:    xsi_set_current_line(78, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 1656);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);

LAB31:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t28 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    xsi_set_current_line(80, ng0);

LAB41:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    xsi_vlogtype_sign_extend(t29, 64, t5, 32);
    t4 = (t0 + 1152U);
    t11 = *((char **)t4);
    xsi_vlogtype_sign_extend(t30, 64, t11, 32);
    xsi_vlog_signed_multiply(t31, 64, t29, 64, t30, 64);
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t31, 0, 0, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t31, 32, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2116);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB40;

LAB34:    xsi_set_current_line(84, ng0);

LAB42:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t0 + 1152U);
    t11 = *((char **)t4);
    xsi_vlog_unsigned_multiply(t29, 64, t5, 32, t11, 32);
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t29, 0, 0, 32);
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t29, 32, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2116);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB40;

LAB36:    xsi_set_current_line(88, ng0);

LAB43:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t0 + 1152U);
    t11 = *((char **)t4);
    memset(t33, 0, 8);
    xsi_vlog_signed_divide(t33, 32, t5, 32, t11, 32);
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t33, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1060U);
    t4 = *((char **)t2);
    t2 = (t0 + 1152U);
    t5 = *((char **)t2);
    memset(t33, 0, 8);
    xsi_vlog_signed_mod(t33, 32, t4, 32, t5, 32);
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t33, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2116);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB40;

LAB38:    xsi_set_current_line(93, ng0);

LAB44:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t0 + 1152U);
    t11 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t5, 32, t11, 32);
    t4 = (t0 + 2024);
    xsi_vlogvar_assign_value(t4, t13, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1060U);
    t4 = *((char **)t2);
    t2 = (t0 + 1152U);
    t5 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_mod(t13, 32, t4, 32, t5, 32);
    t2 = (t0 + 1932);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2116);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB40;

LAB47:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(100, ng0);

LAB52:    xsi_set_current_line(101, ng0);
    t20 = (t0 + 1060U);
    t26 = *((char **)t20);
    t20 = (t0 + 1748);
    xsi_vlogvar_assign_value(t20, t26, 0, 0, 32);
    goto LAB51;

LAB55:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(103, ng0);

LAB60:    xsi_set_current_line(104, ng0);
    t20 = (t0 + 1060U);
    t26 = *((char **)t20);
    t20 = (t0 + 1840);
    xsi_vlogvar_assign_value(t20, t26, 0, 0, 32);
    goto LAB59;

LAB61:    xsi_set_current_line(108, ng0);

LAB64:    xsi_set_current_line(109, ng0);
    t12 = (t0 + 2116);
    t19 = (t12 + 36U);
    t20 = *((char **)t19);
    t26 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t27 = (t20 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB66;

LAB65:    t36 = (t26 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t20) > *((unsigned int *)t26))
        goto LAB67;

LAB68:    t38 = (t13 + 4);
    t14 = *((unsigned int *)t38);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB70;

LAB71:
LAB72:    goto LAB63;

LAB66:    t37 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t13) = 1;
    goto LAB68;

LAB70:    xsi_set_current_line(109, ng0);

LAB73:    xsi_set_current_line(110, ng0);
    t39 = (t0 + 2116);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t41, 32, t42, 32);
    t43 = (t0 + 2116);
    xsi_vlogvar_assign_value(t43, t32, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2116);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t19 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t19);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB77;

LAB74:    if (t18 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t13) = 1;

LAB77:    t26 = (t13 + 4);
    t23 = *((unsigned int *)t26);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t34 = (t25 & t24);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB72;

LAB76:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(111, ng0);

LAB81:    xsi_set_current_line(112, ng0);
    t27 = (t0 + 1932);
    t36 = (t27 + 36U);
    t37 = *((char **)t36);
    t38 = (t0 + 1748);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 32);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2024);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1840);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 32);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1932);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 2208);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 32);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2024);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 2300);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB80;

}


extern void work_m_00000000004123217239_3805778912_init()
{
	static char *pe[] = {(void *)Cont_42_0,(void *)Cont_43_1,(void *)Initial_45_2,(void *)Always_56_3};
	xsi_register_didat("work_m_00000000004123217239_3805778912", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000004123217239_3805778912.didat");
	xsi_register_executes(pe);
}
