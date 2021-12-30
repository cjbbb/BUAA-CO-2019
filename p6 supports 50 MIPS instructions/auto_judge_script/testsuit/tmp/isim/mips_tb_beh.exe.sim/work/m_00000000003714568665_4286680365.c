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
static unsigned int ng0[] = {0U, 0U};
static unsigned int ng1[] = {35U, 0U};
static unsigned int ng2[] = {43U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {33U, 0U};
static unsigned int ng5[] = {37U, 0U};
static unsigned int ng6[] = {41U, 0U};
static int ng7[] = {1, 0};
static int ng8[] = {0, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {32U, 0U};
static unsigned int ng12[] = {36U, 0U};
static unsigned int ng13[] = {40U, 0U};
static unsigned int ng14[] = {1U, 0U};
static unsigned int ng15[] = {2U, 0U};
static int ng16[] = {2, 0};
static unsigned int ng17[] = {4U, 0U};
static int ng18[] = {3, 0};
static unsigned int ng19[] = {8U, 0U};



static void Initial_38_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);

LAB1:    return;
}

static void Always_41_1(char *t0)
{
    char t4[8];
    char t15[8];
    char t31[8];
    char t44[8];
    char t55[8];
    char t71[8];
    char t79[8];
    char t115[8];
    char t120[8];
    char t129[8];
    char t145[8];
    char t153[8];
    char t189[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
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
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    int t194;
    char *t195;
    char *t196;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3096);
    *((int *)t2) = 1;
    t3 = (t0 + 2808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    memset(t31, 0, 8);
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t32) != 0)
        goto LAB12;

LAB13:    t39 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t39);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB14;

LAB15:    memcpy(t79, t31, 8);

LAB16:    t107 = (t79 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB35;

LAB32:    if (t27 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t15) = 1;

LAB35:    memset(t31, 0, 8);
    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t17) != 0)
        goto LAB38;

LAB39:    t32 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB40;

LAB41:    memcpy(t79, t31, 8);

LAB42:    memset(t115, 0, 8);
    t93 = (t79 + 4);
    t108 = *((unsigned int *)t93);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t93) != 0)
        goto LAB56;

LAB57:    t107 = (t115 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (!(t116));
    t118 = *((unsigned int *)t107);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB58;

LAB59:    memcpy(t153, t115, 8);

LAB60:    t181 = (t153 + 4);
    t182 = *((unsigned int *)t181);
    t183 = (~(t182));
    t184 = *((unsigned int *)t153);
    t185 = (t184 & t183);
    t186 = (t185 != 0);
    if (t186 > 0)
        goto LAB72;

LAB73:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t6 = ((char*)((ng11)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB85;

LAB82:    if (t27 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t15) = 1;

LAB85:    memset(t31, 0, 8);
    t17 = (t15 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t15);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t17) != 0)
        goto LAB88;

LAB89:    t32 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (!(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB90;

LAB91:    memcpy(t79, t31, 8);

LAB92:    memset(t115, 0, 8);
    t93 = (t79 + 4);
    t108 = *((unsigned int *)t93);
    t109 = (~(t108));
    t110 = *((unsigned int *)t79);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t93) != 0)
        goto LAB106;

LAB107:    t107 = (t115 + 4);
    t116 = *((unsigned int *)t115);
    t117 = (!(t116));
    t118 = *((unsigned int *)t107);
    t119 = (t117 || t118);
    if (t119 > 0)
        goto LAB108;

LAB109:    memcpy(t153, t115, 8);

LAB110:    t181 = (t153 + 4);
    t182 = *((unsigned int *)t181);
    t183 = (~(t182));
    t184 = *((unsigned int *)t153);
    t185 = (t184 & t183);
    t186 = (t185 != 0);
    if (t186 > 0)
        goto LAB122;

LAB123:    t2 = ((char*)((ng0)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB124:
LAB74:
LAB30:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB12:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB13;

LAB14:    t45 = (t0 + 1048U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 26);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 26);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 63U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 63U);
    t54 = ((char*)((ng2)));
    memset(t55, 0, 8);
    t56 = (t44 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t56);
    t62 = *((unsigned int *)t57);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t57);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB20;

LAB17:    if (t67 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t55) = 1;

LAB20:    memset(t71, 0, 8);
    t72 = (t55 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t72) != 0)
        goto LAB23;

LAB24:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = (t31 + 4);
    t84 = (t71 + 4);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t83);
    t87 = *((unsigned int *)t84);
    t88 = (t86 | t87);
    *((unsigned int *)t85) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t70 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t71) = 1;
    goto LAB24;

LAB23:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB24;

LAB25:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t79) = (t91 | t92);
    t93 = (t31 + 4);
    t94 = (t71 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t94);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t105 & t103);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t106 & t104);
    goto LAB27;

LAB28:
LAB31:    t113 = ((char*)((ng3)));
    t114 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t114, t113, 0, 0, 4, 0LL);
    goto LAB30;

LAB34:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB38:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB39;

LAB40:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t44, 0, 8);
    t38 = (t44 + 4);
    t45 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (t48 >> 26);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 26);
    *((unsigned int *)t38) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 63U);
    t53 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t53 & 63U);
    t46 = ((char*)((ng5)));
    memset(t55, 0, 8);
    t47 = (t44 + 4);
    t54 = (t46 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t46);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t47);
    t62 = *((unsigned int *)t54);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t47);
    t66 = *((unsigned int *)t54);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB46;

LAB43:    if (t67 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t55) = 1;

LAB46:    memset(t71, 0, 8);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t57);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t57) != 0)
        goto LAB49;

LAB50:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t72 = (t31 + 4);
    t78 = (t71 + 4);
    t83 = (t79 + 4);
    t86 = *((unsigned int *)t72);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t83);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t71) = 1;
    goto LAB50;

LAB49:    t70 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB50;

LAB51:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t79) = (t91 | t92);
    t84 = (t31 + 4);
    t85 = (t71 + 4);
    t95 = *((unsigned int *)t84);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t85);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t103);
    t106 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t106 & t104);
    goto LAB53;

LAB54:    *((unsigned int *)t115) = 1;
    goto LAB57;

LAB56:    t94 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB57;

LAB58:    t113 = (t0 + 1048U);
    t114 = *((char **)t113);
    memset(t120, 0, 8);
    t113 = (t120 + 4);
    t121 = (t114 + 4);
    t122 = *((unsigned int *)t114);
    t123 = (t122 >> 26);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t121);
    t125 = (t124 >> 26);
    *((unsigned int *)t113) = t125;
    t126 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t126 & 63U);
    t127 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t127 & 63U);
    t128 = ((char*)((ng6)));
    memset(t129, 0, 8);
    t130 = (t120 + 4);
    t131 = (t128 + 4);
    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t128);
    t134 = (t132 ^ t133);
    t135 = *((unsigned int *)t130);
    t136 = *((unsigned int *)t131);
    t137 = (t135 ^ t136);
    t138 = (t134 | t137);
    t139 = *((unsigned int *)t130);
    t140 = *((unsigned int *)t131);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB64;

LAB61:    if (t141 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t129) = 1;

LAB64:    memset(t145, 0, 8);
    t146 = (t129 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t129);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t146) != 0)
        goto LAB67;

LAB68:    t154 = *((unsigned int *)t115);
    t155 = *((unsigned int *)t145);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = (t115 + 4);
    t158 = (t145 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB63:    t144 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t145) = 1;
    goto LAB68;

LAB67:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB68;

LAB69:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    t167 = (t115 + 4);
    t168 = (t145 + 4);
    t169 = *((unsigned int *)t167);
    t170 = (~(t169));
    t171 = *((unsigned int *)t115);
    t172 = (t171 & t170);
    t173 = *((unsigned int *)t168);
    t174 = (~(t173));
    t175 = *((unsigned int *)t145);
    t176 = (t175 & t174);
    t177 = (~(t172));
    t178 = (~(t176));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    goto LAB71;

LAB72:
LAB75:    t187 = (t0 + 1208U);
    t188 = *((char **)t187);
    t187 = (t0 + 1168U);
    t190 = (t187 + 72U);
    t191 = *((char **)t190);
    t192 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t189, 32, t188, t191, 2, t192, 32, 1);

LAB76:    t193 = ((char*)((ng8)));
    t194 = xsi_vlog_unsigned_case_compare(t189, 32, t193, 32);
    if (t194 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng7)));
    t98 = xsi_vlog_unsigned_case_compare(t189, 32, t2, 32);
    if (t98 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB74;

LAB77:    t195 = ((char*)((ng9)));
    t196 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t196, t195, 0, 0, 4, 0LL);
    goto LAB81;

LAB79:    t3 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB81;

LAB84:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t31) = 1;
    goto LAB89;

LAB88:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB89;

LAB90:    t38 = (t0 + 1048U);
    t39 = *((char **)t38);
    memset(t44, 0, 8);
    t38 = (t44 + 4);
    t45 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (t48 >> 26);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 26);
    *((unsigned int *)t38) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 63U);
    t53 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t53 & 63U);
    t46 = ((char*)((ng12)));
    memset(t55, 0, 8);
    t47 = (t44 + 4);
    t54 = (t46 + 4);
    t58 = *((unsigned int *)t44);
    t59 = *((unsigned int *)t46);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t47);
    t62 = *((unsigned int *)t54);
    t63 = (t61 ^ t62);
    t64 = (t60 | t63);
    t65 = *((unsigned int *)t47);
    t66 = *((unsigned int *)t54);
    t67 = (t65 | t66);
    t68 = (~(t67));
    t69 = (t64 & t68);
    if (t69 != 0)
        goto LAB96;

LAB93:    if (t67 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t55) = 1;

LAB96:    memset(t71, 0, 8);
    t57 = (t55 + 4);
    t73 = *((unsigned int *)t57);
    t74 = (~(t73));
    t75 = *((unsigned int *)t55);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t57) != 0)
        goto LAB99;

LAB100:    t80 = *((unsigned int *)t31);
    t81 = *((unsigned int *)t71);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t72 = (t31 + 4);
    t78 = (t71 + 4);
    t83 = (t79 + 4);
    t86 = *((unsigned int *)t72);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t83);
    t90 = (t89 != 0);
    if (t90 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB92;

LAB95:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t71) = 1;
    goto LAB100;

LAB99:    t70 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB100;

LAB101:    t91 = *((unsigned int *)t79);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t79) = (t91 | t92);
    t84 = (t31 + 4);
    t85 = (t71 + 4);
    t95 = *((unsigned int *)t84);
    t96 = (~(t95));
    t97 = *((unsigned int *)t31);
    t98 = (t97 & t96);
    t99 = *((unsigned int *)t85);
    t100 = (~(t99));
    t101 = *((unsigned int *)t71);
    t102 = (t101 & t100);
    t103 = (~(t98));
    t104 = (~(t102));
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t103);
    t106 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t106 & t104);
    goto LAB103;

LAB104:    *((unsigned int *)t115) = 1;
    goto LAB107;

LAB106:    t94 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB107;

LAB108:    t113 = (t0 + 1048U);
    t114 = *((char **)t113);
    memset(t120, 0, 8);
    t113 = (t120 + 4);
    t121 = (t114 + 4);
    t122 = *((unsigned int *)t114);
    t123 = (t122 >> 26);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t121);
    t125 = (t124 >> 26);
    *((unsigned int *)t113) = t125;
    t126 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t126 & 63U);
    t127 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t127 & 63U);
    t128 = ((char*)((ng13)));
    memset(t129, 0, 8);
    t130 = (t120 + 4);
    t131 = (t128 + 4);
    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t128);
    t134 = (t132 ^ t133);
    t135 = *((unsigned int *)t130);
    t136 = *((unsigned int *)t131);
    t137 = (t135 ^ t136);
    t138 = (t134 | t137);
    t139 = *((unsigned int *)t130);
    t140 = *((unsigned int *)t131);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB114;

LAB111:    if (t141 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t129) = 1;

LAB114:    memset(t145, 0, 8);
    t146 = (t129 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t129);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t146) != 0)
        goto LAB117;

LAB118:    t154 = *((unsigned int *)t115);
    t155 = *((unsigned int *)t145);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = (t115 + 4);
    t158 = (t145 + 4);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t157);
    t161 = *((unsigned int *)t158);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = *((unsigned int *)t159);
    t164 = (t163 != 0);
    if (t164 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB113:    t144 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t145) = 1;
    goto LAB118;

LAB117:    t152 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB118;

LAB119:    t165 = *((unsigned int *)t153);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t153) = (t165 | t166);
    t167 = (t115 + 4);
    t168 = (t145 + 4);
    t169 = *((unsigned int *)t167);
    t170 = (~(t169));
    t171 = *((unsigned int *)t115);
    t172 = (t171 & t170);
    t173 = *((unsigned int *)t168);
    t174 = (~(t173));
    t175 = *((unsigned int *)t145);
    t176 = (t175 & t174);
    t177 = (~(t172));
    t178 = (~(t176));
    t179 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t179 & t177);
    t180 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t180 & t178);
    goto LAB121;

LAB122:
LAB125:    t187 = (t0 + 1208U);
    t188 = *((char **)t187);

LAB126:    t187 = ((char*)((ng8)));
    t194 = xsi_vlog_unsigned_case_compare(t188, 2, t187, 32);
    if (t194 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng7)));
    t98 = xsi_vlog_unsigned_case_compare(t188, 2, t2, 32);
    if (t98 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng16)));
    t98 = xsi_vlog_unsigned_case_compare(t188, 2, t2, 32);
    if (t98 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng18)));
    t98 = xsi_vlog_unsigned_case_compare(t188, 2, t2, 32);
    if (t98 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB124;

LAB127:    t190 = ((char*)((ng14)));
    t191 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t191, t190, 0, 0, 4, 0LL);
    goto LAB135;

LAB129:    t3 = ((char*)((ng15)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB135;

LAB131:    t3 = ((char*)((ng17)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB135;

LAB133:    t3 = ((char*)((ng19)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB135;

}


extern void work_m_00000000003714568665_4286680365_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_41_1};
	xsi_register_didat("work_m_00000000003714568665_4286680365", "isim/mips_tb_beh.exe.sim/work/m_00000000003714568665_4286680365.didat");
	xsi_register_executes(pe);
}
