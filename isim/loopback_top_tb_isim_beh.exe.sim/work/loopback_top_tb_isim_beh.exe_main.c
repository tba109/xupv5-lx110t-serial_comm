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
    work_m_02751779311480115130_2336605594_init();
    work_m_06546297605400170865_0150004869_init();
    work_m_09893734401274989204_2689862658_init();
    work_m_16141528107128017398_0820168969_init();
    work_m_15315816987866210678_2521469133_init();
    work_m_07552917741803665597_3763181667_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_07552917741803665597_3763181667");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
