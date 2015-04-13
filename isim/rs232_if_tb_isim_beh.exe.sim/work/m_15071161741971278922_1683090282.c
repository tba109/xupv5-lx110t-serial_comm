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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/tyler/sat_erp/firmware/xupv5-lx110t-serial_comm/fncs.h";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "/home/tyler/sat_erp/firmware/xupv5-lx110t-serial_comm/rs232_des.v";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {7U, 0U};



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
    t4 = (t1 + 5000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB2:    t3 = (t1 + 5160);
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
    t14 = (t1 + 5160);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_signed_rshift(t18, 32, t16, 32, t17, 32);
    t19 = (t1 + 5160);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(4, ng0);
    t3 = (t1 + 5000);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 5000);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB2;

}

static void NetDecl_32_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng3);
    t2 = (t0 + 3160U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 7000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0U);
    t24 = (t0 + 6888);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Always_59_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t39[8];
    char t54[8];
    char t62[8];
    char t94[8];
    char t108[8];
    char t124[8];
    char t132[8];
    char t164[8];
    char t176[8];
    char t185[8];
    char t193[8];
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
    char *t38;
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
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
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
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    int t217;
    int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;

LAB0:    t1 = (t0 + 6320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng3);
    t2 = (t0 + 6904);
    *((int *)t2) = 1;
    t3 = (t0 + 6352);
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
    t2 = (t0 + 4520);
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

LAB39:    memcpy(t132, t94, 8);

LAB40:    memset(t164, 0, 8);
    t165 = (t132 + 4);
    t166 = *((unsigned int *)t165);
    t167 = (~(t166));
    t168 = *((unsigned int *)t132);
    t169 = (t168 & t167);
    t170 = (t169 & 1U);
    if (t170 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t165) != 0)
        goto LAB54;

LAB55:    t172 = (t164 + 4);
    t173 = *((unsigned int *)t164);
    t174 = *((unsigned int *)t172);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB56;

LAB57:    memcpy(t193, t164, 8);

LAB58:    t225 = (t193 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t193);
    t229 = (t228 & t227);
    t230 = (t229 != 0);
    if (t230 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(62, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB72:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(60, ng3);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 4360);
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
    t37 = (t0 + 1560);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    t37 = (t36 + 4);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t38);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t37);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t37);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB26;

LAB23:    if (t50 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t39) = 1;

LAB26:    memset(t54, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
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

LAB25:    t53 = (t39 + 4);
    *((unsigned int *)t39) = 1;
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

LAB38:    t106 = (t0 + 3640U);
    t107 = *((char **)t106);
    t106 = ((char*)((ng4)));
    memset(t108, 0, 8);
    t109 = (t107 + 4);
    t110 = (t106 + 4);
    t111 = *((unsigned int *)t107);
    t112 = *((unsigned int *)t106);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB44;

LAB41:    if (t120 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t108) = 1;

LAB44:    memset(t124, 0, 8);
    t125 = (t108 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t108);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t125) != 0)
        goto LAB47;

LAB48:    t133 = *((unsigned int *)t94);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t136 = (t94 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB43:    t123 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t124) = 1;
    goto LAB48;

LAB47:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB48;

LAB49:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t94 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t94);
    t149 = (~(t148));
    t150 = *((unsigned int *)t146);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t147);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t160 & t158);
    t161 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB51;

LAB52:    *((unsigned int *)t164) = 1;
    goto LAB55;

LAB54:    t171 = (t164 + 4);
    *((unsigned int *)t164) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB55;

LAB56:    t177 = (t0 + 3320U);
    t178 = *((char **)t177);
    memset(t176, 0, 8);
    t177 = (t178 + 4);
    t179 = *((unsigned int *)t177);
    t180 = (~(t179));
    t181 = *((unsigned int *)t178);
    t182 = (t181 & t180);
    t183 = (t182 & 1U);
    if (t183 != 0)
        goto LAB62;

LAB60:    if (*((unsigned int *)t177) == 0)
        goto LAB59;

LAB61:    t184 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t184) = 1;

LAB62:    memset(t185, 0, 8);
    t186 = (t176 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t176);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t186) != 0)
        goto LAB65;

LAB66:    t194 = *((unsigned int *)t164);
    t195 = *((unsigned int *)t185);
    t196 = (t194 & t195);
    *((unsigned int *)t193) = t196;
    t197 = (t164 + 4);
    t198 = (t185 + 4);
    t199 = (t193 + 4);
    t200 = *((unsigned int *)t197);
    t201 = *((unsigned int *)t198);
    t202 = (t200 | t201);
    *((unsigned int *)t199) = t202;
    t203 = *((unsigned int *)t199);
    t204 = (t203 != 0);
    if (t204 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB59:    *((unsigned int *)t176) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t185) = 1;
    goto LAB66;

LAB65:    t192 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB66;

LAB67:    t205 = *((unsigned int *)t193);
    t206 = *((unsigned int *)t199);
    *((unsigned int *)t193) = (t205 | t206);
    t207 = (t164 + 4);
    t208 = (t185 + 4);
    t209 = *((unsigned int *)t164);
    t210 = (~(t209));
    t211 = *((unsigned int *)t207);
    t212 = (~(t211));
    t213 = *((unsigned int *)t185);
    t214 = (~(t213));
    t215 = *((unsigned int *)t208);
    t216 = (~(t215));
    t217 = (t210 & t212);
    t218 = (t214 & t216);
    t219 = (~(t217));
    t220 = (~(t218));
    t221 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t221 & t219);
    t222 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t222 & t220);
    t223 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t223 & t219);
    t224 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t224 & t220);
    goto LAB69;

LAB70:    xsi_set_current_line(61, ng3);
    t231 = ((char*)((ng6)));
    t232 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t232, t231, 0, 0, 1, 0LL);
    goto LAB72;

}

static void Always_65_2(char *t0)
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

LAB0:    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng3);
    t2 = (t0 + 6920);
    *((int *)t2) = 1;
    t3 = (t0 + 6600);
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
    t2 = (t0 + 4520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB14:    t6 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t21 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(127, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB25:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(67, ng3);

LAB12:    xsi_set_current_line(68, ng3);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 12, 0LL);
    xsi_set_current_line(69, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(70, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB11;

LAB15:    xsi_set_current_line(79, ng3);

LAB26:    xsi_set_current_line(80, ng3);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 12, 0LL);
    xsi_set_current_line(81, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(82, ng3);
    t2 = (t0 + 3800U);
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
    t3 = (t0 + 4680);
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
    t2 = (t0 + 4680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 12, t6, 12, t12, 12);
    t13 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 12, 0LL);

LAB36:    goto LAB25;

LAB19:    xsi_set_current_line(98, ng3);
    t3 = (t0 + 4840);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng8)));
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
    t2 = (t0 + 4680);
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
    t2 = (t0 + 4680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 12, t6, 12, t12, 12);
    t13 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 12, 0LL);

LAB71:
LAB63:    goto LAB25;

LAB21:    xsi_set_current_line(117, ng3);
    t3 = (t0 + 4680);
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
    t2 = (t0 + 4680);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 12, t6, 12, t12, 12);
    t13 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 12, 0LL);

LAB80:    goto LAB25;

LAB27:    xsi_set_current_line(83, ng3);
    t6 = ((char*)((ng6)));
    t12 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 2, 0LL);
    goto LAB29;

LAB32:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(88, ng3);

LAB37:    xsi_set_current_line(89, ng3);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 12, 0LL);
    xsi_set_current_line(90, ng3);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4520);
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

LAB47:    t37 = (t0 + 4680);
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
    t105 = (t0 + 4200);
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
    t116 = (t0 + 3640U);
    t117 = *((char **)t116);
    xsi_vlogtype_concat(t103, 8, 8, 2U, t117, 1, t104, 7);
    t116 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t116, t103, 0, 0, 8, 0LL);
    xsi_set_current_line(101, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(102, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(103, ng3);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB63;

LAB67:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(106, ng3);

LAB72:    xsi_set_current_line(107, ng3);
    t25 = (t0 + 4200);
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
    t39 = (t0 + 3640U);
    t40 = *((char **)t39);
    xsi_vlogtype_concat(t33, 8, 8, 2U, t40, 1, t42, 7);
    t39 = (t0 + 4200);
    xsi_vlogvar_wait_assign_value(t39, t33, 0, 0, 8, 0LL);
    xsi_set_current_line(108, ng3);
    t2 = (t0 + 4840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t6, 3, t12, 3);
    t13 = (t0 + 4840);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(109, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    goto LAB71;

LAB76:    t24 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(118, ng3);

LAB81:    xsi_set_current_line(119, ng3);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 12, 0LL);
    xsi_set_current_line(120, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB80;

}


extern void work_m_15071161741971278922_1683090282_init()
{
	static char *pe[] = {(void *)NetDecl_32_0,(void *)Always_59_1,(void *)Always_65_2};
	static char *se[] = {(void *)sp_clogb2};
	xsi_register_didat("work_m_15071161741971278922_1683090282", "isim/rs232_if_tb_isim_beh.exe.sim/work/m_15071161741971278922_1683090282.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
