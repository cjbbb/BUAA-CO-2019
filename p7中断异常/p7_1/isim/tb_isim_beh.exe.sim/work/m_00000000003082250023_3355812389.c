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
static const char *ng0 = "D:/p7/p7_1/F_D_Register.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};



static void Initial_41_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);

LAB1:    return;
}

static void Always_49_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t27[8];
    char t34[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2980);
    *((int *)t2) = 1;
    t3 = (t0 + 2812);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t4) != 0)
        goto LAB16;

LAB17:    t12 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (!(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB18;

LAB19:    memcpy(t34, t15, 8);

LAB20:    memset(t14, 0, 8);
    t62 = (t34 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t34);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t62) != 0)
        goto LAB30;

LAB31:    t69 = (t14 + 4);
    t70 = *((unsigned int *)t14);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB32;

LAB33:    t74 = *((unsigned int *)t14);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t69) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t14) > 0)
        goto LAB38;

LAB39:    memcpy(t13, t79, 8);

LAB40:    t78 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t78, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t2) != 0)
        goto LAB43;

LAB44:    t5 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB45;

LAB46:    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t5) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t14) > 0)
        goto LAB51;

LAB52:    memcpy(t13, t25, 8);

LAB53:    t11 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t2) != 0)
        goto LAB56;

LAB57:    t5 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB58;

LAB59:    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t21 = *((unsigned int *)t5);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t5) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t14) > 0)
        goto LAB64;

LAB65:    memcpy(t13, t27, 8);

LAB66:    t33 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t33, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t15) = 1;
    goto LAB17;

LAB16:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB18:    t25 = (t0 + 1060U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t26 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t25) != 0)
        goto LAB23;

LAB24:    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = (t15 + 4);
    t39 = (t27 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t27) = 1;
    goto LAB24;

LAB23:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB24;

LAB25:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t15 + 4);
    t49 = (t27 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t15);
    t53 = (t52 & t51);
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t27);
    t57 = (t56 & t55);
    t58 = (~(t53));
    t59 = (~(t57));
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & t58);
    t61 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t61 & t59);
    goto LAB27;

LAB28:    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB30:    t68 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB31;

LAB32:    t73 = ((char*)((ng1)));
    goto LAB33;

LAB34:    t78 = (t0 + 1244U);
    t79 = *((char **)t78);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t13, 32, t73, 32, t79, 32);
    goto LAB40;

LAB38:    memcpy(t13, t73, 8);
    goto LAB40;

LAB41:    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB43:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB45:    t11 = (t0 + 1336U);
    t12 = *((char **)t11);
    goto LAB46;

LAB47:    t11 = (t0 + 1428U);
    t25 = *((char **)t11);
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t13, 32, t12, 32, t25, 32);
    goto LAB53;

LAB51:    memcpy(t13, t12, 8);
    goto LAB53;

LAB54:    *((unsigned int *)t14) = 1;
    goto LAB57;

LAB56:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB57;

LAB58:    t11 = (t0 + 1336U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t12, 32, t11, 32);
    goto LAB59;

LAB60:    t25 = (t0 + 1428U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t26, 32, t25, 32);
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t13, 32, t15, 32, t27, 32);
    goto LAB66;

LAB64:    memcpy(t13, t15, 8);
    goto LAB66;

}


extern void work_m_00000000003082250023_3355812389_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_49_1};
	xsi_register_didat("work_m_00000000003082250023_3355812389", "isim/tb_isim_beh.exe.sim/work/m_00000000003082250023_3355812389.didat");
	xsi_register_executes(pe);
}
