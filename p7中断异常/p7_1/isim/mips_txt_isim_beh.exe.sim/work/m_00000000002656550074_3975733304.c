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
static const char *ng0 = "D:/p7/p7_1/CP0.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {12U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {406271385U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {389494098U, 0U};
static int ng10[] = {4, 0};
static int ng11[] = {1, 0};



static void NetDecl_46_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2944);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 2852);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2760);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 32, 32, 5U, t13, 16, t12, 6, t9, 8, t8, 1, t5, 1);
    t14 = (t0 + 5376);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t3, 8);
    xsi_driver_vfirst_trans(t14, 0, 31U);
    t19 = (t0 + 5276);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_52_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3220);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3128);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3036);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    xsi_vlogtype_concat(t3, 32, 32, 6U, t14, 1, t11, 15, t10, 6, t7, 3, t6, 5, t2, 2);
    t15 = (t0 + 5412);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 8);
    xsi_driver_vfirst_trans(t15, 0, 31U);
    t20 = (t0 + 5284);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_57_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t13[8];
    char t25[8];
    char t67[8];
    char t99[8];
    char t110[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1520U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);
    t14 = (t0 + 2760);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 63U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 63U);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t13);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t4 + 4);
    t30 = (t13 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t57 = (t25 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t25);
    t61 = (t60 & t59);
    t62 = (t61 & 63U);
    if (t62 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t57) != 0)
        goto LAB9;

LAB10:    t64 = (t0 + 2944);
    t65 = (t64 + 36U);
    t66 = *((char **)t65);
    t68 = *((unsigned int *)t3);
    t69 = *((unsigned int *)t66);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t3 + 4);
    t72 = (t66 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB11;

LAB12:
LAB13:    t100 = (t0 + 2852);
    t101 = (t100 + 36U);
    t102 = *((char **)t101);
    memset(t99, 0, 8);
    t103 = (t102 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t102);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t103) == 0)
        goto LAB14;

LAB16:    t109 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t109) = 1;

LAB17:    t111 = *((unsigned int *)t67);
    t112 = *((unsigned int *)t99);
    t113 = (t111 & t112);
    *((unsigned int *)t110) = t113;
    t114 = (t67 + 4);
    t115 = (t99 + 4);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t114);
    t118 = *((unsigned int *)t115);
    t119 = (t117 | t118);
    *((unsigned int *)t116) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 != 0);
    if (t121 == 1)
        goto LAB18;

LAB19:
LAB20:    t142 = (t0 + 5448);
    t143 = (t142 + 32U);
    t144 = *((char **)t143);
    t145 = (t144 + 40U);
    t146 = *((char **)t145);
    memset(t146, 0, 8);
    t147 = 1U;
    t148 = t147;
    t149 = (t110 + 4);
    t150 = *((unsigned int *)t110);
    t147 = (t147 & t150);
    t151 = *((unsigned int *)t149);
    t148 = (t148 & t151);
    t152 = (t146 + 4);
    t153 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t153 | t147);
    t154 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t154 | t148);
    xsi_driver_vfirst_trans(t142, 0, 0);
    t155 = (t0 + 5292);
    *((int *)t155) = 1;

LAB1:    return;
LAB4:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t4 + 4);
    t40 = (t13 + 4);
    t41 = *((unsigned int *)t4);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t63 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB10;

LAB11:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t3 + 4);
    t82 = (t66 + 4);
    t83 = *((unsigned int *)t3);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t66);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t91 = (t84 & t86);
    t92 = (t88 & t90);
    t93 = (~(t91));
    t94 = (~(t92));
    t95 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t95 & t93);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t94);
    t97 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t97 & t93);
    t98 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t98 & t94);
    goto LAB13;

LAB14:    *((unsigned int *)t99) = 1;
    goto LAB17;

LAB18:    t122 = *((unsigned int *)t110);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t110) = (t122 | t123);
    t124 = (t67 + 4);
    t125 = (t99 + 4);
    t126 = *((unsigned int *)t67);
    t127 = (~(t126));
    t128 = *((unsigned int *)t124);
    t129 = (~(t128));
    t130 = *((unsigned int *)t99);
    t131 = (~(t130));
    t132 = *((unsigned int *)t125);
    t133 = (~(t132));
    t134 = (t127 & t129);
    t135 = (t131 & t133);
    t136 = (~(t134));
    t137 = (~(t135));
    t138 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t138 & t136);
    t139 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t139 & t137);
    t140 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t140 & t136);
    t141 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t141 & t137);
    goto LAB20;

}

static void Cont_58_3(char *t0)
{
    char t4[8];
    char t8[8];
    char t24[8];
    char t40[8];
    char t48[8];
    char t80[8];
    char t95[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;

LAB0:    t1 = (t0 + 4360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB5;

LAB4:    t6 = (t2 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB6;

LAB7:    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t9) != 0)
        goto LAB11;

LAB12:    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB13;

LAB14:    memcpy(t48, t8, 8);

LAB15:    memset(t80, 0, 8);
    t81 = (t48 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t48);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t81) != 0)
        goto LAB29;

LAB30:    t88 = (t80 + 4);
    t89 = *((unsigned int *)t80);
    t90 = (!(t89));
    t91 = *((unsigned int *)t88);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB31;

LAB32:    memcpy(t102, t80, 8);

LAB33:    t130 = (t0 + 5484);
    t131 = (t130 + 32U);
    t132 = *((char **)t131);
    t133 = (t132 + 40U);
    t134 = *((char **)t133);
    memset(t134, 0, 8);
    t135 = 1U;
    t136 = t135;
    t137 = (t102 + 4);
    t138 = *((unsigned int *)t102);
    t135 = (t135 & t138);
    t139 = *((unsigned int *)t137);
    t136 = (t136 & t139);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t141 | t135);
    t142 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t142 | t136);
    xsi_driver_vfirst_trans(t130, 0, 0);
    t143 = (t0 + 5300);
    *((int *)t143) = 1;

LAB1:    return;
LAB5:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t8) = 1;
    goto LAB12;

LAB11:    t15 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB13:    t20 = (t0 + 2852);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t22 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t22);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB19;

LAB16:    if (t36 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t24) = 1;

LAB19:    memset(t40, 0, 8);
    t41 = (t24 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t41) != 0)
        goto LAB22;

LAB23:    t49 = *((unsigned int *)t8);
    t50 = *((unsigned int *)t40);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t8 + 4);
    t53 = (t40 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t40) = 1;
    goto LAB23;

LAB22:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB23;

LAB24:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t8 + 4);
    t63 = (t40 + 4);
    t64 = *((unsigned int *)t8);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB26;

LAB27:    *((unsigned int *)t80) = 1;
    goto LAB30;

LAB29:    t87 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB30;

LAB31:    t93 = (t0 + 2532U);
    t94 = *((char **)t93);
    memset(t95, 0, 8);
    t93 = (t94 + 4);
    t96 = *((unsigned int *)t93);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t93) != 0)
        goto LAB36;

LAB37:    t103 = *((unsigned int *)t80);
    t104 = *((unsigned int *)t95);
    t105 = (t103 | t104);
    *((unsigned int *)t102) = t105;
    t106 = (t80 + 4);
    t107 = (t95 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB33;

LAB34:    *((unsigned int *)t95) = 1;
    goto LAB37;

LAB36:    t101 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB37;

LAB38:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t80 + 4);
    t117 = (t95 + 4);
    t118 = *((unsigned int *)t116);
    t119 = (~(t118));
    t120 = *((unsigned int *)t80);
    t121 = (t120 & t119);
    t122 = *((unsigned int *)t117);
    t123 = (~(t122));
    t124 = *((unsigned int *)t95);
    t125 = (t124 & t123);
    t126 = (~(t121));
    t127 = (~(t125));
    t128 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t128 & t126);
    t129 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t129 & t127);
    goto LAB40;

}

static void Cont_59_4(char *t0)
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

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3404);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 5520);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5308);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_60_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t75[8];
    char t76[8];
    char t78[8];
    char t111[8];
    char t112[8];
    char t114[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t77;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t113;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1060U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t149 = (t0 + 5556);
    t150 = (t149 + 32U);
    t151 = *((char **)t150);
    t152 = (t151 + 40U);
    t153 = *((char **)t152);
    memcpy(t153, t3, 8);
    xsi_driver_vfirst_trans(t149, 0, 31);
    t154 = (t0 + 5316);
    *((int *)t154) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2256U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 1060U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng4)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t71 = *((unsigned int *)t40);
    t72 = (~(t71));
    t73 = *((unsigned int *)t65);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t75, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t69 = (t0 + 2440U);
    t70 = *((char **)t69);
    goto LAB30;

LAB31:    t69 = (t0 + 1060U);
    t77 = *((char **)t69);
    t69 = ((char*)((ng5)));
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    t80 = (t69 + 4);
    t81 = *((unsigned int *)t77);
    t82 = *((unsigned int *)t69);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t79);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t79);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB41;

LAB38:    if (t90 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t78) = 1;

LAB41:    memset(t76, 0, 8);
    t94 = (t78 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t78);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t94) != 0)
        goto LAB44;

LAB45:    t101 = (t76 + 4);
    t102 = *((unsigned int *)t76);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB46;

LAB47:    t107 = *((unsigned int *)t76);
    t108 = (~(t107));
    t109 = *((unsigned int *)t101);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t101) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t76) > 0)
        goto LAB52;

LAB53:    memcpy(t75, t111, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 32, t70, 32, t75, 32);
    goto LAB37;

LAB35:    memcpy(t39, t70, 8);
    goto LAB37;

LAB40:    t93 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t76) = 1;
    goto LAB45;

LAB44:    t100 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB45;

LAB46:    t105 = (t0 + 2072U);
    t106 = *((char **)t105);
    goto LAB47;

LAB48:    t105 = (t0 + 1060U);
    t113 = *((char **)t105);
    t105 = ((char*)((ng6)));
    memset(t114, 0, 8);
    t115 = (t113 + 4);
    t116 = (t105 + 4);
    t117 = *((unsigned int *)t113);
    t118 = *((unsigned int *)t105);
    t119 = (t117 ^ t118);
    t120 = *((unsigned int *)t115);
    t121 = *((unsigned int *)t116);
    t122 = (t120 ^ t121);
    t123 = (t119 | t122);
    t124 = *((unsigned int *)t115);
    t125 = *((unsigned int *)t116);
    t126 = (t124 | t125);
    t127 = (~(t126));
    t128 = (t123 & t127);
    if (t128 != 0)
        goto LAB58;

LAB55:    if (t126 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t114) = 1;

LAB58:    memset(t112, 0, 8);
    t130 = (t114 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t114);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t130) != 0)
        goto LAB61;

LAB62:    t137 = (t112 + 4);
    t138 = *((unsigned int *)t112);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB63;

LAB64:    t144 = *((unsigned int *)t112);
    t145 = (~(t144));
    t146 = *((unsigned int *)t137);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t137) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t112) > 0)
        goto LAB69;

LAB70:    memcpy(t111, t148, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t75, 32, t106, 32, t111, 32);
    goto LAB54;

LAB52:    memcpy(t75, t106, 8);
    goto LAB54;

LAB57:    t129 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t112) = 1;
    goto LAB62;

LAB61:    t136 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB62;

LAB63:    t141 = (t0 + 3312);
    t142 = (t141 + 36U);
    t143 = *((char **)t142);
    goto LAB64;

LAB65:    t148 = ((char*)((ng1)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t111, 32, t143, 32, t148, 32);
    goto LAB71;

LAB69:    memcpy(t111, t143, 8);
    goto LAB71;

}

static void Initial_65_6(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(65, ng0);

LAB2:    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 6, 0LL);
    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 6, 0LL);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 5, 0LL);
    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Cont_78_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 5592);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 5324);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_81_8(char *t0)
{
    char t13[8];
    char t14[8];
    char t23[8];
    char t25[8];
    char t36[8];
    char t41[8];
    char t43[8];
    char t88[8];
    char t99[8];
    char t104[8];
    char t106[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t105;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5332);
    *((int *)t2) = 1;
    t3 = (t0 + 5108);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(83, ng0);
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

LAB7:    xsi_set_current_line(93, ng0);

LAB10:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2532U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 31U);
    if (t10 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t2) != 0)
        goto LAB43;

LAB44:    t5 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB45;

LAB46:    memcpy(t25, t13, 8);

LAB47:    t69 = (t25 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t25);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB76;

LAB77:
LAB78:
LAB61:
LAB13:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1796U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB86;

LAB87:
LAB88:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(83, ng0);

LAB9:    xsi_set_current_line(84, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2760);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 6);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2852);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2944);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3036);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3220);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3404);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(96, ng0);

LAB14:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 2348U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t5 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) != 0)
        goto LAB17;

LAB18:    t12 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB19;

LAB20:    t37 = *((unsigned int *)t14);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t12) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t14) > 0)
        goto LAB25;

LAB26:    memcpy(t13, t41, 8);

LAB27:    t53 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t53, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2348U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t2) != 0)
        goto LAB30;

LAB31:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB32;

LAB33:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t5) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t14) > 0)
        goto LAB38;

LAB39:    memcpy(t13, t12, 8);

LAB40:    t24 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t14) = 1;
    goto LAB18;

LAB17:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t24 = ((char*)((ng1)));
    t26 = (t0 + 1336U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t28 = (t27 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (t29 >> 2);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 2);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 1073741823U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 1073741823U);
    xsi_vlogtype_concat(t23, 32, 32, 2U, t25, 30, t24, 2);
    t35 = ((char*)((ng10)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_minus(t36, 32, t23, 32, t35, 32);
    goto LAB20;

LAB21:    t42 = ((char*)((ng1)));
    t44 = (t0 + 1336U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 2);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 2);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 1073741823U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 1073741823U);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t43, 30, t42, 2);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t13, 32, t36, 32, t41, 32);
    goto LAB27;

LAB25:    memcpy(t13, t36, 8);
    goto LAB27;

LAB28:    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB30:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB32:    t11 = ((char*)((ng11)));
    goto LAB33;

LAB34:    t12 = ((char*)((ng2)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t13, 32, t11, 32, t12, 32);
    goto LAB40;

LAB38:    memcpy(t13, t11, 8);
    goto LAB40;

LAB41:    *((unsigned int *)t13) = 1;
    goto LAB44;

LAB43:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB45:    t11 = (t0 + 2852);
    t12 = (t11 + 36U);
    t24 = *((char **)t12);
    memset(t14, 0, 8);
    t26 = (t24 + 4);
    t18 = *((unsigned int *)t26);
    t19 = (~(t18));
    t20 = *((unsigned int *)t24);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t26) == 0)
        goto LAB48;

LAB50:    t27 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t27) = 1;

LAB51:    memset(t23, 0, 8);
    t28 = (t14 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t14);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t28) != 0)
        goto LAB54;

LAB55:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t23);
    t38 = (t34 & t37);
    *((unsigned int *)t25) = t38;
    t42 = (t13 + 4);
    t44 = (t23 + 4);
    t45 = (t25 + 4);
    t39 = *((unsigned int *)t42);
    t40 = *((unsigned int *)t44);
    t47 = (t39 | t40);
    *((unsigned int *)t45) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB47;

LAB48:    *((unsigned int *)t14) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t23) = 1;
    goto LAB55;

LAB54:    t35 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB55;

LAB56:    t50 = *((unsigned int *)t25);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t25) = (t50 | t51);
    t46 = (t13 + 4);
    t53 = (t23 + 4);
    t52 = *((unsigned int *)t13);
    t54 = (~(t52));
    t55 = *((unsigned int *)t46);
    t56 = (~(t55));
    t57 = *((unsigned int *)t23);
    t58 = (~(t57));
    t59 = *((unsigned int *)t53);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t65 & t63);
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    t67 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t67 & t63);
    t68 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t68 & t64);
    goto LAB58;

LAB59:    xsi_set_current_line(106, ng0);

LAB62:    xsi_set_current_line(107, ng0);
    t75 = (t0 + 2348U);
    t76 = *((char **)t75);
    memset(t41, 0, 8);
    t75 = (t76 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t76);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t75) != 0)
        goto LAB65;

LAB66:    t83 = (t41 + 4);
    t84 = *((unsigned int *)t41);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB67;

LAB68:    t100 = *((unsigned int *)t41);
    t101 = (~(t100));
    t102 = *((unsigned int *)t83);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t83) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t41) > 0)
        goto LAB73;

LAB74:    memcpy(t36, t104, 8);

LAB75:    t116 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t116, t36, 0, 0, 32, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2348U);
    t3 = *((char **)t2);
    t2 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = (t0 + 3220);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB61;

LAB63:    *((unsigned int *)t41) = 1;
    goto LAB66;

LAB65:    t82 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB66;

LAB67:    t87 = ((char*)((ng1)));
    t89 = (t0 + 1336U);
    t90 = *((char **)t89);
    memset(t88, 0, 8);
    t89 = (t88 + 4);
    t91 = (t90 + 4);
    t92 = *((unsigned int *)t90);
    t93 = (t92 >> 2);
    *((unsigned int *)t88) = t93;
    t94 = *((unsigned int *)t91);
    t95 = (t94 >> 2);
    *((unsigned int *)t89) = t95;
    t96 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t96 & 1073741823U);
    t97 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t97 & 1073741823U);
    xsi_vlogtype_concat(t43, 32, 32, 2U, t88, 30, t87, 2);
    t98 = ((char*)((ng10)));
    memset(t99, 0, 8);
    xsi_vlog_unsigned_minus(t99, 32, t43, 32, t98, 32);
    goto LAB68;

LAB69:    t105 = ((char*)((ng1)));
    t107 = (t0 + 1336U);
    t108 = *((char **)t107);
    memset(t106, 0, 8);
    t107 = (t106 + 4);
    t109 = (t108 + 4);
    t110 = *((unsigned int *)t108);
    t111 = (t110 >> 2);
    *((unsigned int *)t106) = t111;
    t112 = *((unsigned int *)t109);
    t113 = (t112 >> 2);
    *((unsigned int *)t107) = t113;
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 1073741823U);
    t115 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t115 & 1073741823U);
    xsi_vlogtype_concat(t104, 32, 32, 2U, t106, 30, t105, 2);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t36, 32, t99, 32, t104, 32);
    goto LAB75;

LAB73:    memcpy(t36, t99, 8);
    goto LAB75;

LAB76:    xsi_set_current_line(117, ng0);

LAB79:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);

LAB80:    t4 = ((char*)((ng3)));
    t61 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t61 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng5)));
    t61 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t61 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB78;

LAB81:    xsi_set_current_line(119, ng0);
    t11 = (t0 + 1244U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t24 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t24);
    t18 = (t17 >> 0);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 3U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 3U);
    t26 = (t0 + 1244U);
    t27 = *((char **)t26);
    memset(t23, 0, 8);
    t26 = (t23 + 4);
    t28 = (t27 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (t21 >> 10);
    *((unsigned int *)t23) = t22;
    t29 = *((unsigned int *)t28);
    t30 = (t29 >> 10);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 63U);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t32 & 63U);
    xsi_vlogtype_concat(t13, 8, 8, 2U, t23, 6, t14, 2);
    t35 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t35, t13, 0, 0, 1, 0LL);
    t42 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t42, t13, 1, 0, 1, 0LL);
    t44 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t44, t13, 2, 0, 6, 0LL);
    goto LAB85;

LAB83:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1244U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 2);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 1073741823U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 1073741823U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t14, 30, t3, 2);
    t24 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 32, 0LL);
    goto LAB85;

LAB86:    xsi_set_current_line(126, ng0);

LAB89:    xsi_set_current_line(127, ng0);
    t4 = ((char*)((ng1)));
    t11 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    goto LAB88;

LAB90:    xsi_set_current_line(129, ng0);

LAB93:    xsi_set_current_line(130, ng0);
    t4 = ((char*)((ng11)));
    t11 = (t0 + 2852);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    goto LAB92;

}


extern void work_m_00000000002656550074_3975733304_init()
{
	static char *pe[] = {(void *)NetDecl_46_0,(void *)NetDecl_52_1,(void *)Cont_57_2,(void *)Cont_58_3,(void *)Cont_59_4,(void *)Cont_60_5,(void *)Initial_65_6,(void *)Cont_78_7,(void *)Always_81_8};
	xsi_register_didat("work_m_00000000002656550074_3975733304", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002656550074_3975733304.didat");
	xsi_register_executes(pe);
}
