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
static int ng0[] = {4, 0};
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {14, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};



static void Cont_44_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 6072);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5976);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_45_1(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t66[8];
    char t67[8];
    char t77[8];
    char t81[8];
    char t89[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    char *t79;
    char *t80;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5992);
    *((int *)t2) = 1;
    t3 = (t0 + 5688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB20;

LAB21:    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t2) != 0)
        goto LAB26;

LAB27:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB28;

LAB29:    memcpy(t26, t6, 8);

LAB30:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB38;

LAB39:    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t2) != 0)
        goto LAB44;

LAB45:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB46;

LAB47:    memcpy(t26, t6, 8);

LAB48:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB56;

LAB57:    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t2) != 0)
        goto LAB62;

LAB63:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB64;

LAB65:    memcpy(t26, t6, 8);

LAB66:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB74;

LAB75:    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t2) != 0)
        goto LAB80;

LAB81:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB82;

LAB83:    memcpy(t26, t6, 8);

LAB84:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB92;

LAB93:    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t2) != 0)
        goto LAB98;

LAB99:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB100;

LAB101:    memcpy(t26, t6, 8);

LAB102:    t40 = (t26 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB110;

LAB111:    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB114;

LAB115:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t4, t6, 0, 0, 32, 0LL);

LAB116:
LAB112:
LAB94:
LAB76:
LAB58:
LAB40:
LAB22:    t2 = (t0 + 1688U);
    t3 = *((char **)t2);

LAB118:    t2 = ((char*)((ng3)));
    t50 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t50 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng4)));
    t50 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t50 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng5)));
    t50 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t50 == 1)
        goto LAB123;

LAB124:
LAB125:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1848U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:
LAB23:    t64 = (t0 + 1368U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng1)));
    t68 = (t0 + 1208U);
    t69 = *((char **)t68);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t70 = (t69 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (t71 >> 0);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 0);
    *((unsigned int *)t68) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 65535U);
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 65535U);
    t78 = ((char*)((ng2)));
    t79 = (t0 + 1208U);
    t80 = *((char **)t79);
    memset(t81, 0, 8);
    t79 = (t81 + 4);
    t82 = (t80 + 4);
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 15);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 >> 15);
    t88 = (t87 & 1);
    *((unsigned int *)t79) = t88;
    xsi_vlog_mul_concat(t77, 14, 1, t78, 1U, t81, 1);
    xsi_vlogtype_concat(t66, 32, 32, 3U, t77, 14, t67, 16, t64, 2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t65, 32, t66, 32);
    t90 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t90, t89, 0, 0, 32, 0LL);
    goto LAB22;

LAB24:    *((unsigned int *)t6) = 1;
    goto LAB27;

LAB26:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB28:    t12 = (t0 + 2008U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t12) != 0)
        goto LAB33;

LAB34:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t19) = 1;
    goto LAB34;

LAB33:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB34;

LAB35:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB37;

LAB38:
LAB41:    t41 = (t0 + 1368U);
    t58 = *((char **)t41);
    t41 = ((char*)((ng1)));
    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    memset(t67, 0, 8);
    t64 = (t67 + 4);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t65);
    t72 = (t71 >> 0);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t68);
    t74 = (t73 >> 0);
    *((unsigned int *)t64) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 65535U);
    t76 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t76 & 65535U);
    t69 = ((char*)((ng2)));
    t70 = (t0 + 1208U);
    t78 = *((char **)t70);
    memset(t81, 0, 8);
    t70 = (t81 + 4);
    t79 = (t78 + 4);
    t83 = *((unsigned int *)t78);
    t84 = (t83 >> 15);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t79);
    t87 = (t86 >> 15);
    t88 = (t87 & 1);
    *((unsigned int *)t70) = t88;
    xsi_vlog_mul_concat(t77, 14, 1, t69, 1U, t81, 1);
    xsi_vlogtype_concat(t66, 32, 32, 3U, t77, 14, t67, 16, t41, 2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t58, 32, t66, 32);
    t80 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t80, t89, 0, 0, 32, 0LL);
    goto LAB40;

LAB42:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB44:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB45;

LAB46:    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t12) != 0)
        goto LAB51;

LAB52:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB48;

LAB49:    *((unsigned int *)t19) = 1;
    goto LAB52;

LAB51:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB52;

LAB53:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB55;

LAB56:
LAB59:    t41 = (t0 + 1368U);
    t58 = *((char **)t41);
    t41 = ((char*)((ng1)));
    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    memset(t67, 0, 8);
    t64 = (t67 + 4);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t65);
    t72 = (t71 >> 0);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t68);
    t74 = (t73 >> 0);
    *((unsigned int *)t64) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 65535U);
    t76 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t76 & 65535U);
    t69 = ((char*)((ng2)));
    t70 = (t0 + 1208U);
    t78 = *((char **)t70);
    memset(t81, 0, 8);
    t70 = (t81 + 4);
    t79 = (t78 + 4);
    t83 = *((unsigned int *)t78);
    t84 = (t83 >> 15);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t79);
    t87 = (t86 >> 15);
    t88 = (t87 & 1);
    *((unsigned int *)t70) = t88;
    xsi_vlog_mul_concat(t77, 14, 1, t69, 1U, t81, 1);
    xsi_vlogtype_concat(t66, 32, 32, 3U, t77, 14, t67, 16, t41, 2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t58, 32, t66, 32);
    t80 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t80, t89, 0, 0, 32, 0LL);
    goto LAB58;

LAB60:    *((unsigned int *)t6) = 1;
    goto LAB63;

LAB62:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB63;

LAB64:    t12 = (t0 + 2328U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t12) != 0)
        goto LAB69;

LAB70:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB66;

LAB67:    *((unsigned int *)t19) = 1;
    goto LAB70;

LAB69:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB70;

LAB71:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB73;

LAB74:
LAB77:    t41 = (t0 + 1368U);
    t58 = *((char **)t41);
    t41 = ((char*)((ng1)));
    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    memset(t67, 0, 8);
    t64 = (t67 + 4);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t65);
    t72 = (t71 >> 0);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t68);
    t74 = (t73 >> 0);
    *((unsigned int *)t64) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 65535U);
    t76 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t76 & 65535U);
    t69 = ((char*)((ng2)));
    t70 = (t0 + 1208U);
    t78 = *((char **)t70);
    memset(t81, 0, 8);
    t70 = (t81 + 4);
    t79 = (t78 + 4);
    t83 = *((unsigned int *)t78);
    t84 = (t83 >> 15);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t79);
    t87 = (t86 >> 15);
    t88 = (t87 & 1);
    *((unsigned int *)t70) = t88;
    xsi_vlog_mul_concat(t77, 14, 1, t69, 1U, t81, 1);
    xsi_vlogtype_concat(t66, 32, 32, 3U, t77, 14, t67, 16, t41, 2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t58, 32, t66, 32);
    t80 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t80, t89, 0, 0, 32, 0LL);
    goto LAB76;

LAB78:    *((unsigned int *)t6) = 1;
    goto LAB81;

LAB80:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB81;

LAB82:    t12 = (t0 + 2488U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t12) != 0)
        goto LAB87;

LAB88:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB84;

LAB85:    *((unsigned int *)t19) = 1;
    goto LAB88;

LAB87:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB88;

LAB89:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB91;

LAB92:
LAB95:    t41 = (t0 + 1368U);
    t58 = *((char **)t41);
    t41 = ((char*)((ng1)));
    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    memset(t67, 0, 8);
    t64 = (t67 + 4);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t65);
    t72 = (t71 >> 0);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t68);
    t74 = (t73 >> 0);
    *((unsigned int *)t64) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 65535U);
    t76 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t76 & 65535U);
    t69 = ((char*)((ng2)));
    t70 = (t0 + 1208U);
    t78 = *((char **)t70);
    memset(t81, 0, 8);
    t70 = (t81 + 4);
    t79 = (t78 + 4);
    t83 = *((unsigned int *)t78);
    t84 = (t83 >> 15);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t79);
    t87 = (t86 >> 15);
    t88 = (t87 & 1);
    *((unsigned int *)t70) = t88;
    xsi_vlog_mul_concat(t77, 14, 1, t69, 1U, t81, 1);
    xsi_vlogtype_concat(t66, 32, 32, 3U, t77, 14, t67, 16, t41, 2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t58, 32, t66, 32);
    t80 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t80, t89, 0, 0, 32, 0LL);
    goto LAB94;

LAB96:    *((unsigned int *)t6) = 1;
    goto LAB99;

LAB98:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB99;

LAB100:    t12 = (t0 + 2648U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t12) != 0)
        goto LAB105;

LAB106:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB107;

LAB108:
LAB109:    goto LAB102;

LAB103:    *((unsigned int *)t19) = 1;
    goto LAB106;

LAB105:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB106;

LAB107:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB109;

LAB110:
LAB113:    t41 = (t0 + 1368U);
    t58 = *((char **)t41);
    t41 = ((char*)((ng1)));
    t64 = (t0 + 1208U);
    t65 = *((char **)t64);
    memset(t67, 0, 8);
    t64 = (t67 + 4);
    t68 = (t65 + 4);
    t71 = *((unsigned int *)t65);
    t72 = (t71 >> 0);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t68);
    t74 = (t73 >> 0);
    *((unsigned int *)t64) = t74;
    t75 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t75 & 65535U);
    t76 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t76 & 65535U);
    t69 = ((char*)((ng2)));
    t70 = (t0 + 1208U);
    t78 = *((char **)t70);
    memset(t81, 0, 8);
    t70 = (t81 + 4);
    t79 = (t78 + 4);
    t83 = *((unsigned int *)t78);
    t84 = (t83 >> 15);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t79);
    t87 = (t86 >> 15);
    t88 = (t87 & 1);
    *((unsigned int *)t70) = t88;
    xsi_vlog_mul_concat(t77, 14, 1, t69, 1U, t81, 1);
    xsi_vlogtype_concat(t66, 32, 32, 3U, t77, 14, t67, 16, t41, 2);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t58, 32, t66, 32);
    t80 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t80, t89, 0, 0, 32, 0LL);
    goto LAB112;

LAB114:
LAB117:    t4 = ((char*)((ng1)));
    t5 = (t0 + 1208U);
    t12 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 0);
    *((unsigned int *)t19) = t15;
    t16 = *((unsigned int *)t13);
    t20 = (t16 >> 0);
    *((unsigned int *)t5) = t20;
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 & 67108863U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 67108863U);
    t17 = (t0 + 3928U);
    t18 = *((char **)t17);
    memset(t26, 0, 8);
    t17 = (t26 + 4);
    t25 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 28);
    *((unsigned int *)t26) = t24;
    t27 = *((unsigned int *)t25);
    t28 = (t27 >> 28);
    *((unsigned int *)t17) = t28;
    t29 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t29 & 15U);
    t33 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t33 & 15U);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t26, 4, t19, 26, t4, 2);
    t30 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t30, t6, 0, 0, 32, 0LL);
    goto LAB116;

LAB119:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t4, 32);
    t12 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 32, 0LL);
    goto LAB125;

LAB121:    t4 = (t0 + 4488);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    goto LAB125;

LAB123:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB125;

}


extern void work_m_00000000001977544364_3146453351_init()
{
	static char *pe[] = {(void *)Cont_44_0,(void *)Always_45_1};
	xsi_register_didat("work_m_00000000001977544364_3146453351", "isim/mips_tb_beh.exe.sim/work/m_00000000001977544364_3146453351.didat");
	xsi_register_executes(pe);
}
