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
static const char *ng0 = "C:/cygwin64/home/volundr/sat_erp/firmware/xupv5-lx110t-serial_comm/fncs.h";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "C:/cygwin64/home/volundr/sat_erp/firmware/xupv5-lx110t-serial_comm/rs232_des.v";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {3U, 0U};



static int sp_clogb2(char *t1, char *t2)
{
    char t7[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;

LAB0:    t0 = 1;
    xsi_set_current_line(4, ng0);
    xsi_set_current_line(4, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 4840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB2:    t3 = (t1 + 5000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 32, t5, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB3;

LAB4:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(5, ng0);
    t14 = (t1 + 5000);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_signed_rshift(t18, 32, t16, 32, t17, 32);
    t19 = (t1 + 5000);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(4, ng0);
    t3 = (t1 + 4840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 4840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB2;

}

static void Always_59_0(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t94[8];
    char t111[8];
    char t126[8];
    char t134[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
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
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    int t158;
    int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng3);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 5952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng3);
    t5 = (t0 + 3000U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(61, ng3);
    t2 = (t0 + 4360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB15;

LAB12:    if (t18 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t4) = 1;

LAB15:    memset(t23, 0, 8);
    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t20) != 0)
        goto LAB18;

LAB19:    t30 = (t23 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB20;

LAB21:    memcpy(t62, t23, 8);

LAB22:    memset(t94, 0, 8);
    t95 = (t62 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t62);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t95) != 0)
        goto LAB36;

LAB37:    t102 = (t94 + 4);
    t103 = *((unsigned int *)t94);
    t104 = *((unsigned int *)t102);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB38;

LAB39:    memcpy(t134, t94, 8);

LAB40:    t166 = (t134 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t134);
    t170 = (t169 & t168);
    t171 = (t170 != 0);
    if (t171 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(62, ng3);
    t2 = (t0 + 3320U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB55;

LAB56:
LAB57:
LAB54:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(60, ng3);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB11;

LAB14:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t23) = 1;
    goto LAB19;

LAB18:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB19;

LAB20:    t34 = (t0 + 4680);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng6)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB26;

LAB23:    if (t50 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t38) = 1;

LAB26:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t55) != 0)
        goto LAB29;

LAB30:    t63 = *((unsigned int *)t23);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t23 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB25:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t54) = 1;
    goto LAB30;

LAB29:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB30;

LAB31:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t23 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t23);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB33;

LAB34:    *((unsigned int *)t94) = 1;
    goto LAB37;

LAB36:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB37;

LAB38:    t106 = (t0 + 4520);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = (t0 + 1424);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t108 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t110);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t109);
    t117 = *((unsigned int *)t112);
    t118 = (t116 ^ t117);
    t119 = (t115 | t118);
    t120 = *((unsigned int *)t109);
    t121 = *((unsigned int *)t112);
    t122 = (t120 | t121);
    t123 = (~(t122));
    t124 = (t119 & t123);
    if (t124 != 0)
        goto LAB44;

LAB41:    if (t122 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t111) = 1;

LAB44:    memset(t126, 0, 8);
    t127 = (t111 + 4);
    t128 = *((unsigned int *)t127);
    t129 = (~(t128));
    t130 = *((unsigned int *)t111);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t127) != 0)
        goto LAB47;

LAB48:    t135 = *((unsigned int *)t94);
    t136 = *((unsigned int *)t126);
    t137 = (t135 & t136);
    *((unsigned int *)t134) = t137;
    t138 = (t94 + 4);
    t139 = (t126 + 4);
    t140 = (t134 + 4);
    t141 = *((unsigned int *)t138);
    t142 = *((unsigned int *)t139);
    t143 = (t141 | t142);
    *((unsigned int *)t140) = t143;
    t144 = *((unsigned int *)t140);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB43:    t125 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t126) = 1;
    goto LAB48;

LAB47:    t133 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB48;

LAB49:    t146 = *((unsigned int *)t134);
    t147 = *((unsigned int *)t140);
    *((unsigned int *)t134) = (t146 | t147);
    t148 = (t94 + 4);
    t149 = (t126 + 4);
    t150 = *((unsigned int *)t94);
    t151 = (~(t150));
    t152 = *((unsigned int *)t148);
    t153 = (~(t152));
    t154 = *((unsigned int *)t126);
    t155 = (~(t154));
    t156 = *((unsigned int *)t149);
    t157 = (~(t156));
    t158 = (t151 & t153);
    t159 = (t155 & t157);
    t160 = (~(t158));
    t161 = (~(t159));
    t162 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t162 & t160);
    t163 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t163 & t161);
    t164 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t164 & t160);
    t165 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t165 & t161);
    goto LAB51;

LAB52:    xsi_set_current_line(61, ng3);
    t172 = ((char*)((ng7)));
    t173 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t173, t172, 0, 0, 1, 0LL);
    goto LAB54;

LAB55:    xsi_set_current_line(62, ng3);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB57;

}

static void Always_65_1(char *t0)
{
    char t4[8];
    char t33[8];
    char t42[8];
    char t57[8];
    char t65[8];
    char t103[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
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
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
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
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
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
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t105;
    char *t106;
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
    char *t117;

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng3);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 6200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng3);
    t5 = (t0 + 3000U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(75, ng3);

LAB13:    xsi_set_current_line(76, ng3);
    t2 = (t0 + 4360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB14:    t6 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t21 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(127, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB25:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(67, ng3);

LAB12:    xsi_set_current_line(68, ng3);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 14, 0LL);
    xsi_set_current_line(69, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(70, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB11;

LAB15:    xsi_set_current_line(79, ng3);

LAB26:    xsi_set_current_line(80, ng3);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 14, 0LL);
    xsi_set_current_line(81, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(82, ng3);
    t2 = (t0 + 3640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB25;

LAB17:    xsi_set_current_line(87, ng3);
    t3 = (t0 + 4520);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 1288);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t4) = 1;

LAB33:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(93, ng3);

LAB38:    xsi_set_current_line(94, ng3);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB36:    goto LAB25;

LAB19:    xsi_set_current_line(98, ng3);
    t3 = (t0 + 4680);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t19 = (t12 + 4);
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB42;

LAB39:    if (t18 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t4) = 1;

LAB42:    memset(t33, 0, 8);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t25) != 0)
        goto LAB45;

LAB46:    t32 = (t33 + 4);
    t34 = *((unsigned int *)t33);
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB47;

LAB48:    memcpy(t65, t33, 8);

LAB49:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(105, ng3);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1424);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t19 = (t13 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB68;

LAB65:    if (t18 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t4) = 1;

LAB68:    t24 = (t4 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(112, ng3);

LAB73:    xsi_set_current_line(113, ng3);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB71:
LAB63:    goto LAB25;

LAB21:    xsi_set_current_line(117, ng3);
    t3 = (t0 + 4520);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 1560);
    t19 = *((char **)t13);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t20 = (t19 + 4);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB77;

LAB74:    if (t18 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t4) = 1;

LAB77:    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(123, ng3);

LAB82:    xsi_set_current_line(124, ng3);
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB80:    goto LAB25;

LAB27:    xsi_set_current_line(83, ng3);
    t6 = ((char*)((ng7)));
    t12 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 2, 0LL);
    goto LAB29;

LAB32:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(88, ng3);

LAB37:    xsi_set_current_line(89, ng3);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 14, 0LL);
    xsi_set_current_line(90, ng3);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB36;

LAB41:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t33) = 1;
    goto LAB46;

LAB45:    t31 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB46;

LAB47:    t37 = (t0 + 4520);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 1424);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t39 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t41);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB53;

LAB50:    if (t53 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t42) = 1;

LAB53:    memset(t57, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t58) != 0)
        goto LAB56;

LAB57:    t66 = *((unsigned int *)t33);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t33 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t56 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t57) = 1;
    goto LAB57;

LAB56:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB57;

LAB58:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t33 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t33);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB60;

LAB61:    xsi_set_current_line(99, ng3);

LAB64:    xsi_set_current_line(100, ng3);
    t105 = (t0 + 4040);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t104, 0, 8);
    t108 = (t104 + 4);
    t109 = (t107 + 4);
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 1);
    *((unsigned int *)t104) = t111;
    t112 = *((unsigned int *)t109);
    t113 = (t112 >> 1);
    *((unsigned int *)t108) = t113;
    t114 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t114 & 127U);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t115 & 127U);
    t116 = (t0 + 3160U);
    t117 = *((char **)t116);
    xsi_vlogtype_concat(t103, 8, 8, 2U, t117, 1, t104, 7);
    t116 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t116, t103, 0, 0, 8, 0LL);
    xsi_set_current_line(101, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(102, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(103, ng3);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB63;

LAB67:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(106, ng3);

LAB72:    xsi_set_current_line(107, ng3);
    t25 = (t0 + 4040);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    memset(t42, 0, 8);
    t37 = (t42 + 4);
    t38 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 1);
    *((unsigned int *)t42) = t35;
    t36 = *((unsigned int *)t38);
    t44 = (t36 >> 1);
    *((unsigned int *)t37) = t44;
    t45 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t45 & 127U);
    t46 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t46 & 127U);
    t39 = (t0 + 3160U);
    t40 = *((char **)t39);
    xsi_vlogtype_concat(t33, 8, 8, 2U, t40, 1, t42, 7);
    t39 = (t0 + 4040);
    xsi_vlogvar_wait_assign_value(t39, t33, 0, 0, 8, 0LL);
    xsi_set_current_line(108, ng3);
    t2 = (t0 + 4680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t6, 3, t12, 3);
    t13 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(109, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    goto LAB71;

LAB76:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(118, ng3);

LAB81:    xsi_set_current_line(119, ng3);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 14, 0LL);
    xsi_set_current_line(120, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB80;

}


extern void work_m_00000000003389966996_2689862658_init()
{
	static char *pe[] = {(void *)Always_59_0,(void *)Always_65_1};
	static char *se[] = {(void *)sp_clogb2};
	xsi_register_didat("work_m_00000000003389966996_2689862658", "isim/loopback_top_tb_isim_beh.exe.sim/work/m_00000000003389966996_2689862658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
