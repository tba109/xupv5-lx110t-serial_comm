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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001225428922_2336605594_init();
    work_m_00000000000064885105_0150004869_init();
    work_m_00000000004272409674_1683090282_init();
    xilinxcorelib_ver_m_00000000000592824535_3860866948_init();
    xilinxcorelib_ver_m_00000000003461156251_3936147078_init();
    xilinxcorelib_ver_m_00000000001291582275_2246162841_init();
    work_m_00000000003630952586_0645511371_init();
    work_m_00000000002226812820_3701492297_init();
    work_m_00000000001035051123_1082013321_init();
    work_m_00000000001881013819_1312248435_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001881013819_1312248435");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
