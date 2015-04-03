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
static const char *ng3 = "C:/cygwin64/home/volundr/sat_erp/firmware/xupv5-lx110t-serial_comm/rs232_ser.v";
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
    t4 = (t1 + 4408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB2:    t3 = (t1 + 4568);
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
    t14 = (t1 + 4568);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    memset(t18, 0, 8);
    xsi_vlog_signed_rshift(t18, 32, t16, 32, t17, 32);
    t19 = (t1 + 4568);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(4, ng0);
    t3 = (t1 + 4408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t5, 32, t6, 32);
    t8 = (t1 + 4408);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB2;

}

static void Always_52_0(char *t0)
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

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng3);
    t2 = (t0 + 5808);
    *((int *)t2) = 1;
    t3 = (t0 + 5520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng3);
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

LAB10:    xsi_set_current_line(62, ng3);

LAB13:    xsi_set_current_line(63, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng3);
    t2 = (t0 + 3768);
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
LAB23:    xsi_set_current_line(128, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB25:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(54, ng3);

LAB12:    xsi_set_current_line(55, ng3);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB11;

LAB15:    xsi_set_current_line(67, ng3);

LAB26:    xsi_set_current_line(68, ng3);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(69, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(70, ng3);
    t2 = (t0 + 3048U);
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

LAB17:    xsi_set_current_line(79, ng3);

LAB31:    xsi_set_current_line(80, ng3);
    t3 = ((char*)((ng5)));
    t6 = (t0 + 3448);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng3);
    t2 = (t0 + 3928);
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
        goto LAB35;

LAB32:    if (t18 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t4) = 1;

LAB35:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(87, ng3);

LAB40:    xsi_set_current_line(88, ng3);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB38:    goto LAB25;

LAB19:    xsi_set_current_line(93, ng3);

LAB41:    xsi_set_current_line(94, ng3);
    t3 = (t0 + 4248);
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
    t20 = (t0 + 3448);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng3);
    t2 = (t0 + 4088);
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
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t4) = 1;

LAB45:    memset(t32, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t24) != 0)
        goto LAB48;

LAB49:    t31 = (t32 + 4);
    t33 = *((unsigned int *)t32);
    t34 = *((unsigned int *)t31);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB50;

LAB51:    memcpy(t64, t32, 8);

LAB52:    t95 = (t64 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(102, ng3);
    t2 = (t0 + 3928);
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
        goto LAB71;

LAB68:    if (t18 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t4) = 1;

LAB71:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(109, ng3);

LAB76:    xsi_set_current_line(110, ng3);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB74:
LAB66:    goto LAB25;

LAB21:    xsi_set_current_line(115, ng3);

LAB77:    xsi_set_current_line(116, ng3);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 3448);
    xsi_vlogvar_wait_assign_value(t6, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng3);
    t2 = (t0 + 3928);
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
        goto LAB81;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t4) = 1;

LAB81:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(123, ng3);

LAB86:    xsi_set_current_line(124, ng3);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 14, t6, 14, t12, 14);
    t13 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 14, 0LL);

LAB84:    goto LAB25;

LAB27:    xsi_set_current_line(71, ng3);

LAB30:    xsi_set_current_line(72, ng3);
    t6 = ((char*)((ng5)));
    t12 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng3);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(74, ng3);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB29;

LAB34:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(82, ng3);

LAB39:    xsi_set_current_line(83, ng3);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 14, 0LL);
    xsi_set_current_line(84, ng3);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB38;

LAB44:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t32) = 1;
    goto LAB49;

LAB48:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB49;

LAB50:    t36 = (t0 + 3928);
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
        goto LAB56;

LAB53:    if (t52 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t41) = 1;

LAB56:    memset(t56, 0, 8);
    t57 = (t41 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t57) != 0)
        goto LAB59;

LAB60:    t65 = *((unsigned int *)t32);
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
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t55 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t56) = 1;
    goto LAB60;

LAB59:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB60;

LAB61:    t76 = *((unsigned int *)t64);
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
    goto LAB63;

LAB64:    xsi_set_current_line(96, ng3);

LAB67:    xsi_set_current_line(97, ng3);
    t103 = (t0 + 4248);
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
    t115 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t115, t101, 0, 0, 8, 0LL);
    xsi_set_current_line(98, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(99, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(100, ng3);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB66;

LAB70:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(103, ng3);

LAB75:    xsi_set_current_line(104, ng3);
    t30 = (t0 + 4248);
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
    t40 = (t0 + 4248);
    xsi_vlogvar_wait_assign_value(t40, t32, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng3);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 3, t6, 3, t12, 3);
    t13 = (t0 + 4088);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(106, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    goto LAB74;

LAB80:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(118, ng3);

LAB85:    xsi_set_current_line(119, ng3);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3928);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 14, 0LL);
    xsi_set_current_line(120, ng3);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB84;

}


extern void work_m_00000000003176747510_0820168969_init()
{
	static char *pe[] = {(void *)Always_52_0};
	static char *se[] = {(void *)sp_clogb2};
	xsi_register_didat("work_m_00000000003176747510_0820168969", "isim/loopback_top_tb_isim_beh.exe.sim/work/m_00000000003176747510_0820168969.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
