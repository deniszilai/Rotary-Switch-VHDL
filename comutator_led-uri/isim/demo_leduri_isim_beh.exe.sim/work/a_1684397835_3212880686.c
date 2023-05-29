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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Andrei/Anul_3/Semestrul_I/Structura_Sistemelor_de_Calcul/Proiect-Interfata_pentru_un_comutator_rotativ/comutator_led-uri/demo_led-uri.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_1684397835_3212880686_p_0(char *t0)
{
    char t14[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    char *t16;
    int t17;
    int t18;
    int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1472U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5408);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1032U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 5520);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5584);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5648);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t2 = xsi_base_array_concat(t2, t14, t8, (char)99, t1, (char)99, t3, (char)101);
    t15 = (1U + 1U);
    t6 = (2U != t15);
    if (t6 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 5712);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t2, 2U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 10950);
    t17 = xsi_mem_cmp(t2, t4, 2U);
    if (t17 == 1)
        goto LAB11;

LAB16:    t8 = (t0 + 10952);
    t18 = xsi_mem_cmp(t8, t4, 2U);
    if (t18 == 1)
        goto LAB12;

LAB17:    t11 = (t0 + 10954);
    t19 = xsi_mem_cmp(t11, t4, 2U);
    if (t19 == 1)
        goto LAB13;

LAB18:    t13 = (t0 + 10956);
    t20 = xsi_mem_cmp(t13, t4, 2U);
    if (t20 == 1)
        goto LAB14;

LAB19:
LAB15:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5776);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5840);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);

LAB10:    goto LAB3;

LAB5:    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(2U, t15, 0);
    goto LAB9;

LAB11:    xsi_set_current_line(46, ng0);
    t21 = (t0 + 5776);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5840);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB10;

LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5776);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5840);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB10;

LAB13:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5776);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5840);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB10;

LAB14:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5776);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5840);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB10;

LAB20:;
}

static void work_a_1684397835_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1472U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5424);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 5904);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t1 = (unsigned char)0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5968);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 6032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5968);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 6032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)2);
    t1 = t9;
    goto LAB13;

}

static void work_a_1684397835_3212880686_p_2(char *t0)
{
    char t26[16];
    char t28[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1472U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5440);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 2952U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t2 = (t0 + 10880U);
    t5 = (t0 + 10958);
    t11 = (t28 + 0U);
    t14 = (t11 + 0U);
    *((int *)t14) = 0;
    t14 = (t11 + 4U);
    *((int *)t14) = 7;
    t14 = (t11 + 8U);
    *((int *)t14) = 1;
    t20 = (7 - 0);
    t15 = (t20 * 1);
    t15 = (t15 + 1);
    t14 = (t11 + 12U);
    *((unsigned int *)t14) = t15;
    t14 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t26, t4, t2, t5, t28);
    t18 = (t26 + 12U);
    t15 = *((unsigned int *)t18);
    t16 = (1U * t15);
    t1 = (8U != t16);
    if (t1 == 1)
        goto LAB21;

LAB22:    t19 = (t0 + 6160);
    t25 = (t19 + 56U);
    t27 = *((char **)t25);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t14, 8U);
    xsi_driver_first_trans_fast(t19);

LAB19:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t2 = (t0 + 6224);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t4, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 3112U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t20 = (0 - 7);
    t15 = (t20 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 3272U);
    t8 = *((char **)t5);
    t21 = (7 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t5 = (t8 + t23);
    t14 = ((IEEE_P_2592010699) + 4024);
    t18 = (t28 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t31 = (1 - 7);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t32;
    t11 = xsi_base_array_concat(t11, t26, t14, (char)99, t1, (char)97, t5, t28, (char)101);
    t32 = (1U + 7U);
    t3 = (8U != t32);
    if (t3 == 1)
        goto LAB16;

LAB17:    t19 = (t0 + 6096);
    t25 = (t19 + 56U);
    t27 = *((char **)t25);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t11, 8U);
    xsi_driver_first_trans_fast(t19);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 3272U);
    t14 = *((char **)t4);
    t15 = (7 - 6);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t4 = (t14 + t17);
    t18 = (t0 + 3272U);
    t19 = *((char **)t18);
    t20 = (7 - 7);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t27 = ((IEEE_P_2592010699) + 4024);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 6;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 6);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t4, t28, (char)99, t24, (char)101);
    t32 = (7U + 1U);
    t33 = (8U != t32);
    if (t33 == 1)
        goto LAB14;

LAB15:    t30 = (t0 + 6096);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t25, 8U);
    xsi_driver_first_trans_fast(t30);
    goto LAB12;

LAB14:    xsi_size_not_matching(8U, t32, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(8U, t32, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t2 = (t0 + 6160);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t5, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB19;

LAB21:    xsi_size_not_matching(8U, t16, 0);
    goto LAB22;

}


extern void work_a_1684397835_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1684397835_3212880686_p_0,(void *)work_a_1684397835_3212880686_p_1,(void *)work_a_1684397835_3212880686_p_2};
	xsi_register_didat("work_a_1684397835_3212880686", "isim/demo_leduri_isim_beh.exe.sim/work/a_1684397835_3212880686.didat");
	xsi_register_executes(pe);
}
