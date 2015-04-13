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
static const char *ng3 = "/home/tyler/sat_erp/firmware/xupv5-lx110t-serial_comm/rs232_ser.v";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {7U, 0U};
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
    t4 = (t1 + 4568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB2:    t3 = (t1 + 4728);
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
    t14 = (t1 + 4728);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_signed_rshift(t18, 32, t16, 32, t17, 32);
    t19 = (t1 + 4728);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(4, ng0);
    t3 = (t1 + 4568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 4568);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB2;

}

static void Cont_34_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 5640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng3);
    t2 = (t0 + 3768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t0 + 6568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 6456);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Always_56_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t34[8];
    char t43[8];
    char t51[8];
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
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng3);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng3);
    t5 = (t0 + 2728U);
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

LAB10:    xsi_set_current_line(58, ng3);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
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

LAB21:    memcpy(t51, t23, 8);

LAB22:    t83 = (t51 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t51);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(59, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB36:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(57, ng3);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 3608);
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

LAB20:    t35 = (t0 + 3208U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t36 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (~(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t35) == 0)
        goto LAB23;

LAB25:    t42 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;

LAB26:    memset(t43, 0, 8);
    t44 = (t34 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t34);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t44) != 0)
        goto LAB29;

LAB30:    t52 = *((unsigned int *)t23);
    t53 = *((unsigned int *)t43);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t55 = (t23 + 4);
    t56 = (t43 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB23:    *((unsigned int *)t34) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t43) = 1;
    goto LAB30;

LAB29:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB30;

LAB31:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t23 + 4);
    t66 = (t43 + 4);
    t67 = *((unsigned int *)t23);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t75 = (t68 & t70);
    t76 = (t72 & t74);
    t77 = (~(t75));
    t78 = (~(t76));
    t79 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t79 & t77);
    t80 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t80 & t78);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t81 & t77);
    t82 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t82 & t78);
    goto LAB33;

LAB34:    xsi_set_current_line(58, ng3);
    t89 = ((char*)((ng5)));
    t90 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t90, t89, 0, 0, 1, 0LL);
    goto LAB36;

}

static void Always_62_2(char *t0)
{
    char t4[8];
    char t32[8];
    char t41[8];
    char t56[8];
    char t64[8];
    char t101[8];
    char t102[8];
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
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
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng3);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng3);
    t5 = (t0 + 2728U);
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

LAB10:    xsi_set_current_line(71, ng3);

LAB13:    xsi_set_current_line(72, ng3);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB14:    t6 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t21 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(133, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB25:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(64, ng3);

LAB12:    xsi_set_current_line(65, ng3);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    xsi_set_current_line(66, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB11;

LAB15:    xsi_set_current_line(75, ng3);

LAB26:    xsi_set_current_line(76, ng3);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(77, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(78, ng3);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t2) == 0)
        goto LAB27;

LAB29:    t6 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t6) = 1;

LAB30:    t12 = (t4 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB25;

LAB17:    xsi_set_current_line(83, ng3);

LAB34:    xsi_set_current_line(84, ng3);
    t3 = ((char*)((ng5)));
    t6 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng3);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1288);
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
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t4) = 1;

LAB38:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(92, ng3);

LAB43:    xsi_set_current_line(93, ng3);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB41:    goto LAB25;

LAB19:    xsi_set_current_line(98, ng3);

LAB44:    xsi_set_current_line(99, ng3);
    t3 = (t0 + 4408);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t19);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t13) = t14;
    t20 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng3);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    t19 = (t12 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t19);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t19);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t4) = 1;

LAB48:    memset(t32, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t24) != 0)
        goto LAB51;

LAB52:    t31 = (t32 + 4);
    t33 = *((unsigned int *)t32);
    t34 = *((unsigned int *)t31);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB53;

LAB54:    memcpy(t64, t32, 8);

LAB55:    t95 = (t64 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(107, ng3);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1288);
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
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t4) = 1;

LAB74:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(114, ng3);

LAB79:    xsi_set_current_line(115, ng3);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB77:
LAB69:    goto LAB25;

LAB21:    xsi_set_current_line(120, ng3);

LAB80:    xsi_set_current_line(121, ng3);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng3);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 1288);
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
        goto LAB84;

LAB81:    if (t18 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t4) = 1;

LAB84:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(128, ng3);

LAB89:    xsi_set_current_line(129, ng3);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB87:    goto LAB25;

LAB27:    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(79, ng3);
    t13 = ((char*)((ng5)));
    t19 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 2, 0LL);
    goto LAB33;

LAB37:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(86, ng3);

LAB42:    xsi_set_current_line(87, ng3);
    t30 = (t0 + 3048U);
    t31 = *((char **)t30);
    t30 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(88, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(89, ng3);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB41;

LAB47:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t32) = 1;
    goto LAB52;

LAB51:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB52;

LAB53:    t36 = (t0 + 4088);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t0 + 1288);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t38 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t40);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t39);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB59;

LAB56:    if (t52 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t41) = 1;

LAB59:    memset(t56, 0, 8);
    t57 = (t41 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t57) != 0)
        goto LAB62;

LAB63:    t65 = *((unsigned int *)t32);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t32 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB58:    t55 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t56) = 1;
    goto LAB63;

LAB62:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB63;

LAB64:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t32 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t32);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t21 = (t81 & t83);
    t88 = (t85 & t87);
    t89 = (~(t21));
    t90 = (~(t88));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t93 & t89);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    goto LAB66;

LAB67:    xsi_set_current_line(101, ng3);

LAB70:    xsi_set_current_line(102, ng3);
    t103 = (t0 + 4408);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    memset(t102, 0, 8);
    t106 = (t102 + 4);
    t107 = (t105 + 4);
    t108 = *((unsigned int *)t105);
    t109 = (t108 >> 1);
    *((unsigned int *)t102) = t109;
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 1);
    *((unsigned int *)t106) = t111;
    t112 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t112 & 127U);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t113 & 127U);
    t114 = ((char*)((ng4)));
    xsi_vlogtype_concat(t101, 8, 8, 2U, t114, 1, t102, 7);
    t115 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t115, t101, 0, 0, 8, 0LL);
    xsi_set_current_line(103, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(104, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(105, ng3);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB69;

LAB73:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(108, ng3);

LAB78:    xsi_set_current_line(109, ng3);
    t30 = (t0 + 4408);
    t31 = (t30 + 56U);
    t36 = *((char **)t31);
    memset(t41, 0, 8);
    t37 = (t41 + 4);
    t38 = (t36 + 4);
    t33 = *((unsigned int *)t36);
    t34 = (t33 >> 1);
    *((unsigned int *)t41) = t34;
    t35 = *((unsigned int *)t38);
    t43 = (t35 >> 1);
    *((unsigned int *)t37) = t43;
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t44 & 127U);
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 127U);
    t39 = ((char*)((ng4)));
    xsi_vlogtype_concat(t32, 8, 8, 2U, t39, 1, t41, 7);
    t40 = (t0 + 4408);
    xsi_vlogvar_wait_assign_value(t40, t32, 0, 0, 8, 0LL);
    xsi_set_current_line(110, ng3);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t6, 3, t12, 3);
    t13 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(111, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    goto LAB77;

LAB83:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(123, ng3);

LAB88:    xsi_set_current_line(124, ng3);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 14, 0LL);
    xsi_set_current_line(125, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB87;

}


extern void work_m_16036857914928560020_4109661005_init()
{
	static char *pe[] = {(void *)Cont_34_0,(void *)Always_56_1,(void *)Always_62_2};
	static char *se[] = {(void *)sp_clogb2};
	xsi_register_didat("work_m_16036857914928560020_4109661005", "isim/rs232_if_tb_isim_beh.exe.sim/work/m_16036857914928560020_4109661005.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
