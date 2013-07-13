/*
 * include/linux/mfd/wm1811/gpio.h - GPIO configuration for WM1811
 *
 * Copyright 2009 Wolfson Microelectronics PLC.
 *
 * Author: Mark Brown <broonie@opensource.wolfsonmicro.com>
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#ifndef __MFD_WM1811_GPIO_H__
#define __MFD_WM1811_GPIO_H__

#define WM1811_GPIO_MAX 11

#define WM1811_GP_FN_PIN_SPECIFIC    0
#define WM1811_GP_FN_GPIO            1
#define WM1811_GP_FN_SDOUT           2
#define WM1811_GP_FN_IRQ             3
#define WM1811_GP_FN_TEMPERATURE     4
#define WM1811_GP_FN_MICBIAS1_DET    5
#define WM1811_GP_FN_MICBIAS1_SHORT  6
#define WM1811_GP_FN_MICBIAS2_DET    7
#define WM1811_GP_FN_MICBIAS2_SHORT  8
#define WM1811_GP_FN_FLL1_LOCK       9
#define WM1811_GP_FN_FLL2_LOCK      10
#define WM1811_GP_FN_SRC1_LOCK      11
#define WM1811_GP_FN_SRC2_LOCK      12
#define WM1811_GP_FN_DRC1_ACT       13
#define WM1811_GP_FN_DRC2_ACT       14
#define WM1811_GP_FN_DRC3_ACT       15
#define WM1811_GP_FN_WSEQ_STATUS    16
#define WM1811_GP_FN_FIFO_ERROR     17
#define WM1811_GP_FN_OPCLK          18

#define WM1811_GPN_DIR                          0x8000  /* GPN_DIR */
#define WM1811_GPN_DIR_MASK                     0x8000  /* GPN_DIR */
#define WM1811_GPN_DIR_SHIFT                        15  /* GPN_DIR */
#define WM1811_GPN_DIR_WIDTH                         1  /* GPN_DIR */
#define WM1811_GPN_PU                           0x4000  /* GPN_PU */
#define WM1811_GPN_PU_MASK                      0x4000  /* GPN_PU */
#define WM1811_GPN_PU_SHIFT                         14  /* GPN_PU */
#define WM1811_GPN_PU_WIDTH                          1  /* GPN_PU */
#define WM1811_GPN_PD                           0x2000  /* GPN_PD */
#define WM1811_GPN_PD_MASK                      0x2000  /* GPN_PD */
#define WM1811_GPN_PD_SHIFT                         13  /* GPN_PD */
#define WM1811_GPN_PD_WIDTH                          1  /* GPN_PD */
#define WM1811_GPN_POL                          0x0400  /* GPN_POL */
#define WM1811_GPN_POL_MASK                     0x0400  /* GPN_POL */
#define WM1811_GPN_POL_SHIFT                        10  /* GPN_POL */
#define WM1811_GPN_POL_WIDTH                         1  /* GPN_POL */
#define WM1811_GPN_OP_CFG                       0x0200  /* GPN_OP_CFG */
#define WM1811_GPN_OP_CFG_MASK                  0x0200  /* GPN_OP_CFG */
#define WM1811_GPN_OP_CFG_SHIFT                      9  /* GPN_OP_CFG */
#define WM1811_GPN_OP_CFG_WIDTH                      1  /* GPN_OP_CFG */
#define WM1811_GPN_DB                           0x0100  /* GPN_DB */
#define WM1811_GPN_DB_MASK                      0x0100  /* GPN_DB */
#define WM1811_GPN_DB_SHIFT                          8  /* GPN_DB */
#define WM1811_GPN_DB_WIDTH                          1  /* GPN_DB */
#define WM1811_GPN_LVL                          0x0040  /* GPN_LVL */
#define WM1811_GPN_LVL_MASK                     0x0040  /* GPN_LVL */
#define WM1811_GPN_LVL_SHIFT                         6  /* GPN_LVL */
#define WM1811_GPN_LVL_WIDTH                         1  /* GPN_LVL */
#define WM1811_GPN_FN_MASK                      0x001F  /* GPN_FN - [4:0] */
#define WM1811_GPN_FN_SHIFT                          0  /* GPN_FN - [4:0] */
#define WM1811_GPN_FN_WIDTH                          5  /* GPN_FN - [4:0] */

#endif
