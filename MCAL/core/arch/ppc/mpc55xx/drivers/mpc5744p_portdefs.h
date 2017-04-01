/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 *
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with
 * the terms contained in the written license agreement between you and ArcCore,
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as
 * published by the Free Software Foundation and appearing in the file
 * LICENSE.GPL included in the packaging of this file or here
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

#ifndef _MPC5744PPORTS_H
#define _MPC5744PPORTS_H


/* Pad: 0*/
#define PIN_FUNCTION_REG_0_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_0_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_0_PORT_PIN_MODE_SPI PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_0 {48, 1}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_0 {59, 2}

/* Pad: 1*/
#define PIN_FUNCTION_REG_1_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_1_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_1_PORT_PIN_MODE_SPI PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_1 {60, 2}

/* Pad: 2*/
#define PIN_FUNCTION_REG_2_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_2_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_2_PORT_PIN_MODE_PWM PORT_FUNC3
#define PIN_FUNCTION_REG_2_PORT_PIN_MODE_SPI PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_2 {47, 2}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_2 {61, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_2 {97, 1}

/* Pad: 3*/
#define PIN_FUNCTION_REG_3_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_3_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_3_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_3_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_3 {62, 2}
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_3 {49, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_3 {98, 1}

/* Pad: 4*/
#define PIN_FUNCTION_REG_4_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_4_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_4_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_4_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define PIN_FUNCTION_REG_4_PORT_PIN_MODE_PWM PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_4 {112, 1}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_4 {65, 1}
#define PIN_FUNCTION_REG_4_PORT_PIN_MODE_OTHER1 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER1_PAD_4 {63, 3}

/* Pad: 5*/
#define PIN_FUNCTION_REG_5_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_5_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_5_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_5_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_5 {70, 1}

/* Pad: 6*/
#define PIN_FUNCTION_REG_6_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_6_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_6_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_6 {73, 1}

/* Pad: 7*/
#define PIN_FUNCTION_REG_7_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_7_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_7_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_7 {74, 1}

/* Pad: 8*/
#define PIN_FUNCTION_REG_8_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_8_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_8_PORT_PIN_MODE_SPI PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_8 {44, 1}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_8 {75, 1}

/* Pad: 9*/
#define PIN_FUNCTION_REG_9_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_9_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_9_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_9_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_9 {76, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_9 {98, 2}
#define PIN_FUNCTION_REG_9_PORT_PIN_MODE_OTHER0 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER0_PAD_9 {83, 1}

/* Pad: 10*/
#define PIN_FUNCTION_REG_10_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_10_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_10_PORT_PIN_MODE_PWM PORT_FUNC2
#define PIN_FUNCTION_REG_10_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_10 {49, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_10 {89, 1}
#define PIN_FUNCTION_REG_10_PORT_PIN_MODE_OTHER1 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER1_PAD_10 {96, 1}

/* Pad: 11*/
#define PIN_FUNCTION_REG_11_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_11_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_11_PORT_PIN_MODE_PWM PORT_FUNC2
#define PIN_FUNCTION_REG_11_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_11 {48, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_11 {88, 1}
#define PIN_FUNCTION_REG_11_PORT_PIN_MODE_OTHER1 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER1_PAD_11 {94, 1}

/* Pad: 12*/
#define PIN_FUNCTION_REG_12_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_12_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_12_PORT_PIN_MODE_PWM PORT_FUNC2
#define PIN_FUNCTION_REG_12_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_12 {94, 2}
#define PIN_FUNCTION_REG_12_PORT_PIN_MODE_OTHER1 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER1_PAD_12 {95, 1}

/* Pad: 13*/
#define PIN_FUNCTION_REG_13_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_13_PORT_PIN_MODE_PWM PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_13 {83, 2}
#define PIN_FUNCTION_REG_13_PORT_PIN_MODE_OTHER0 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER0_PAD_13 {95, 2}
#define PIN_FUNCTION_REG_13_PORT_PIN_MODE_SPI PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_13 {47, 1}

/* Pad: 14*/
#define PIN_FUNCTION_REG_14_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_14_PORT_PIN_MODE_CAN PORT_FUNC1
#define PIN_FUNCTION_REG_14_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_14 {69, 1}

/* Pad: 15*/
#define PIN_FUNCTION_REG_15_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_15_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_15_PORT_PIN_MODE_CAN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_15 {32, 1}
#define PIN_FUNCTION_REG_15_PORT_PIN_MODE_OTHER0 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER0_PAD_15 {33, 1}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_15 {70, 2}

/* Pad: 16*/
#define PIN_FUNCTION_REG_16_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_16_PORT_PIN_MODE_CAN PORT_FUNC1
#define PIN_FUNCTION_REG_16_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_16 {67, 1}

/* Pad: 17*/
#define PIN_FUNCTION_REG_17_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_17_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_17_PORT_PIN_MODE_CAN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_17 {32, 2}
#define PIN_FUNCTION_REG_17_PORT_PIN_MODE_OTHER0 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER0_PAD_17 {33, 2}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_17 {68, 1}

/* Pad: 18*/
#define PIN_FUNCTION_REG_18_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_18_PORT_PIN_MODE_LIN PORT_FUNC1
#define PIN_FUNCTION_REG_18_PORT_PIN_MODE_SPI PORT_FUNC2

/* Pad: 19*/
#define PIN_FUNCTION_REG_19_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_19_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_19_PORT_PIN_MODE_LIN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_19 {165, 1}

/* Pad: 20*/
#define PIN_FUNCTION_REG_20_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 21*/
#define PIN_FUNCTION_REG_21_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_21_PORT_PIN_MODE_SPI PORT_FUNC1

/* Pad: 22*/
#define PIN_FUNCTION_REG_22_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_22_PORT_PIN_MODE_SPI PORT_FUNC2

/* Pad: 23*/
#define PIN_FUNCTION_REG_23_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_23_PORT_PIN_MODE_ADC PORT_FUNCADC
#define PIN_FUNCTION_REG_23_PORT_PIN_MODE_LIN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_23 {165, 2}

/* Pad: 24*/
#define PIN_FUNCTION_REG_24_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_24_PORT_PIN_MODE_ADC PORT_FUNCADC
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_24 {64, 1}

/* Pad: 25*/
#define PIN_FUNCTION_REG_25_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_25_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 26*/
#define PIN_FUNCTION_REG_26_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_26_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 27*/
#define PIN_FUNCTION_REG_27_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_27_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 28*/
#define PIN_FUNCTION_REG_28_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_28_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 29*/
#define PIN_FUNCTION_REG_29_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_29_PORT_PIN_MODE_ADC PORT_FUNCADC
#define PIN_FUNCTION_REG_29_PORT_PIN_MODE_LIN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_29 {166, 1}

/* Pad: 30*/
#define PIN_FUNCTION_REG_30_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_30_PORT_PIN_MODE_ADC PORT_FUNCADC
#define PIN_FUNCTION_REG_30_PORT_PIN_MODE_GPT PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_30 {63, 1}

/* Pad: 31*/
#define PIN_FUNCTION_REG_31_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_31_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 32*/
#define PIN_FUNCTION_REG_32_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_32_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 33*/
#define PIN_FUNCTION_REG_33_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_33_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 34*/
#define PIN_FUNCTION_REG_34_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_34_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 36*/
#define PIN_FUNCTION_REG_36_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_36_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_36_PORT_PIN_MODE_PWM PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_36 {93, 1}

/* Pad: 37*/
#define PIN_FUNCTION_REG_37_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_37_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_37_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_37 {86, 1}

/* Pad: 38*/
#define PIN_FUNCTION_REG_38_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_38_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_38_PORT_PIN_MODE_PWM PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_38 {92, 1}

/* Pad: 39*/
#define PIN_FUNCTION_REG_39_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_39_PORT_PIN_MODE_PWM PORT_FUNC2
#define PIN_FUNCTION_REG_39_PORT_PIN_MODE_SPI PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_39 {41, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_39 {91, 1}

/* Pad: 42*/
#define PIN_FUNCTION_REG_42_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_42_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_42_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_42 {84, 1}
#define PIN_FUNCTION_REG_42_PORT_PIN_MODE_OTHER0 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER0_PAD_42 {97, 2}

/* Pad: 43*/
#define PIN_FUNCTION_REG_43_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_43_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_43_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_43_PORT_PIN_MODE_ETH PORT_FUNC3
#define PIN_FUNCTION_REG_43_PORT_PIN_MODE_OTHER0 PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_43 {52, 1}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_43 {63, 4}

/* Pad: 44*/
#define PIN_FUNCTION_REG_44_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_44_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_44_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_44_PORT_PIN_MODE_OTHER0 PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_44 {64, 3}

/* Pad: 45*/
#define PIN_FUNCTION_REG_45_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_45_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_45_PORT_PIN_MODE_PWM PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_45 {66, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_45 {87, 1}
#define PIN_FUNCTION_REG_45_PORT_PIN_MODE_OTHER0 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER0_PAD_45 {105, 1}

/* Pad: 46*/
#define PIN_FUNCTION_REG_46_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_46_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_46_PORT_PIN_MODE_SPI PORT_FUNC3
#define PIN_FUNCTION_REG_46_PORT_PIN_MODE_PWM PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_46 {67, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_46 {106, 1}

/* Pad: 47*/
#define PIN_FUNCTION_REG_47_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_47_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_47_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_47_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_47 {65, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_47 {87, 2}
#define PIN_FUNCTION_REG_47_PORT_PIN_MODE_OTHER0 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER0_PAD_47 {91, 2}

/* Pad: 48*/
#define PIN_FUNCTION_REG_48_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_48_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_48_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_48_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_48 {66, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_48 {92, 2}

/* Pad: 49*/
#define PIN_FUNCTION_REG_49_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_49_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_49 {67, 3}
#define PIN_FUNCTION_REG_49_PORT_PIN_MODE_FLEXRAY PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_FLEXRAY_PAD_49 {136, 1}

/* Pad: 50*/
#define PIN_FUNCTION_REG_50_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_50_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_50_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_50 {68, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_50 {99, 1}
#define PIN_FUNCTION_REG_50_PORT_PIN_MODE_FLEXRAY PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_FLEXRAY_PAD_50 {137, 1}

/* Pad: 51*/
#define PIN_FUNCTION_REG_51_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_51_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_51_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_51_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_51 {69, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_51 {97, 3}

/* Pad: 52*/
#define PIN_FUNCTION_REG_52_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_52_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_52_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_52_PORT_PIN_MODE_PWM PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_52 {70, 3}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_52 {98, 3}

/* Pad: 53*/
#define PIN_FUNCTION_REG_53_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_53_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_53_PORT_PIN_MODE_OTHER0 PORT_FUNC4
#define PIN_FUNCTION_REG_53_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_53 {85, 1}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_53 {227, 1}
#define PIN_FUNCTION_REG_53_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 54*/
#define PIN_FUNCTION_REG_54_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_54_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_54_PORT_PIN_MODE_PWM PORT_FUNC3
#define PIN_FUNCTION_REG_54_PORT_PIN_MODE_OTHER0 PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_54 {51, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_54 {84, 2}
#define PIN_FUNCTION_REG_54_PORT_PIN_MODE_OTHER1 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER1_PAD_54 {99, 2}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_54 {226, 1}
#define PIN_FUNCTION_REG_54_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 55*/
#define PIN_FUNCTION_REG_55_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_55_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_55_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_55 {50, 2}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_55 {225, 1}
#define PIN_FUNCTION_REG_55_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 56*/
#define PIN_FUNCTION_REG_56_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_56_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_56_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_56_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_56 {69, 3}
#define PIN_FUNCTION_REG_56_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_56 {86, 2}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_56 {224, 1}
#define PIN_FUNCTION_REG_56_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 57*/
#define PIN_FUNCTION_REG_57_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_57_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_57_PORT_PIN_MODE_LIN PORT_FUNC2

/* Pad: 58*/
#define PIN_FUNCTION_REG_58_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_58_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_58_PORT_PIN_MODE_ETH PORT_FUNC3
#define PIN_FUNCTION_REG_58_PORT_PIN_MODE_SPI PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_58 {52, 2}
#define PIN_FUNCTION_REG_58_PORT_PIN_MODE_GPT PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_58 {59, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_58 {88, 2}

/* Pad: 59*/
#define PIN_FUNCTION_REG_59_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_59_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_59_PORT_PIN_MODE_SPI PORT_FUNC3
#define PIN_FUNCTION_REG_59_PORT_PIN_MODE_OTHER0 PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_59 {51, 2}
#define PIN_FUNCTION_REG_59_PORT_PIN_MODE_GPT PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_59 {60, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_59 {89, 2}

/* Pad: 60*/
#define PIN_FUNCTION_REG_60_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_60_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_60_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_60_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define PIN_FUNCTION_REG_60_PORT_PIN_MODE_OTHER1 PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_60 {93, 2}
#define PIN_FUNCTION_REG_60_PORT_PIN_MODE_LIN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_60 {166, 2}

/* Pad: 62*/
#define PIN_FUNCTION_REG_62_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_62_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_62_PORT_PIN_MODE_SPI PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_62 {50, 3}
#define PIN_FUNCTION_REG_62_PORT_PIN_MODE_GPT PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_62 {62, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_62 {92, 3}

/* Pad: 64*/
#define PIN_FUNCTION_REG_64_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_64_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 66*/
#define PIN_FUNCTION_REG_66_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_66_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 68*/
#define PIN_FUNCTION_REG_68_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_68_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 69*/
#define PIN_FUNCTION_REG_69_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_69_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 70*/
#define PIN_FUNCTION_REG_70_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_70_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 71*/
#define PIN_FUNCTION_REG_71_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_71_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 73*/
#define PIN_FUNCTION_REG_73_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_73_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 74*/
#define PIN_FUNCTION_REG_74_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_74_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 75*/
#define PIN_FUNCTION_REG_75_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_75_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 76*/
#define PIN_FUNCTION_REG_76_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_76_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 77*/
#define PIN_FUNCTION_REG_77_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_77_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_77_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_77_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define PIN_FUNCTION_REG_77_PORT_PIN_MODE_OTHER1 PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_77 {51, 3}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_77 {64, 4}

/* Pad: 78*/
#define PIN_FUNCTION_REG_78_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_78_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_78_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_78_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define PIN_FUNCTION_REG_78_PORT_PIN_MODE_PWM PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_78 {70, 4}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_78 {113, 1}

/* Pad: 79*/
#define PIN_FUNCTION_REG_79_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_79_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_79_PORT_PIN_MODE_ETH PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_79 {50, 4}

/* Pad: 80*/
#define PIN_FUNCTION_REG_80_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_80_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_80_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_80_PORT_PIN_MODE_ETH PORT_FUNC3
#define PIN_FUNCTION_REG_80_PORT_PIN_MODE_GPT PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_80 {61, 1}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_80 {91, 3}

/* Pad: 83*/
#define PIN_FUNCTION_REG_83_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_83_PORT_PIN_MODE_SPI PORT_FUNC1
#define PIN_FUNCTION_REG_83_PORT_PIN_MODE_OTHER0 PORT_FUNC3
#define PIN_FUNCTION_REG_83_PORT_PIN_MODE_ETH PORT_FUNC4

/* Pad: 84*/
#define PIN_FUNCTION_REG_84_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_84_PORT_PIN_MODE_SPI PORT_FUNC3

/* Pad: 85*/
#define PIN_FUNCTION_REG_85_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_85_PORT_PIN_MODE_SPI PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_85 {52, 3}

/* Pad: 86*/
#define PIN_FUNCTION_REG_86_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 87*/
#define PIN_FUNCTION_REG_87_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 88*/
#define PIN_FUNCTION_REG_88_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 89*/
#define PIN_FUNCTION_REG_89_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 90*/
#define PIN_FUNCTION_REG_90_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 91*/
#define PIN_FUNCTION_REG_91_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 92*/
#define PIN_FUNCTION_REG_92_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_92_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_92_PORT_PIN_MODE_PWM PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_92 {68, 3}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_92 {109, 1}

/* Pad: 93*/
#define PIN_FUNCTION_REG_93_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_93_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_93_PORT_PIN_MODE_PWM PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_93 {69, 4}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_93 {110, 1}

/* Pad: 94*/
#define PIN_FUNCTION_REG_94_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_94_PORT_PIN_MODE_LIN PORT_FUNC1
#define PIN_FUNCTION_REG_94_PORT_PIN_MODE_CAN PORT_FUNC2

/* Pad: 95*/
#define PIN_FUNCTION_REG_95_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_95_PORT_PIN_MODE_LIN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_LIN_PAD_95 {166, 3}
#define PIN_FUNCTION_REG_95_PORT_PIN_MODE_CAN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_95 {34, 1}

/* Pad: 98*/
#define PIN_FUNCTION_REG_98_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_98_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_98_PORT_PIN_MODE_SPI PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_98 {96, 2}

/* Pad: 99*/
#define PIN_FUNCTION_REG_99_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_99_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_99_PORT_PIN_MODE_GPT PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_99 {63, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_99 {94, 3}

/* Pad: 100*/
#define PIN_FUNCTION_REG_100_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_100_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_100_PORT_PIN_MODE_GPT PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_100 {64, 2}
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_100 {95, 3}

/* Pad: 101*/
#define PIN_FUNCTION_REG_101_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_101_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_101_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_101_PORT_PIN_MODE_ETH PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_101 {99, 3}

/* Pad: 102*/
#define PIN_FUNCTION_REG_102_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_102_PORT_PIN_MODE_PWM PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_102 {97, 4}

/* Pad: 103*/
#define PIN_FUNCTION_REG_103_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_103_PORT_PIN_MODE_PWM PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_103 {98, 4}

/* Pad: 104*/
#define PIN_FUNCTION_REG_104_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_104_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_104_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_104_PORT_PIN_MODE_ETH PORT_FUNC3
#define PIN_FUNCTION_REG_104_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_104 {83, 3}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_104 {233, 1}

/* Pad: 105*/
#define PIN_FUNCTION_REG_105_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_105_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_105_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_105_PORT_PIN_MODE_ETH PORT_FUNC3
#define PIN_FUNCTION_REG_105_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_105 {84, 3}

/* Pad: 106*/
#define PIN_FUNCTION_REG_106_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_106_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_106_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_106_PORT_PIN_MODE_ETH PORT_FUNC3
#define PIN_FUNCTION_REG_106_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_106 {85, 2}

/* Pad: 107*/
#define PIN_FUNCTION_REG_107_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_107_PORT_PIN_MODE_FLEXRAY PORT_FUNC1
#define PIN_FUNCTION_REG_107_PORT_PIN_MODE_ETH PORT_FUNC3
#define PIN_FUNCTION_REG_107_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_107 {86, 3}

/* Pad: 116*/
#define PIN_FUNCTION_REG_116_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_116_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_116_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_116 {71, 1}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_116 {231, 1}
#define PIN_FUNCTION_REG_116_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 117*/
#define PIN_FUNCTION_REG_117_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_117_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_117_PORT_PIN_MODE_SPI PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_117 {105, 2}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_117 {230, 1}
#define PIN_FUNCTION_REG_117_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 118*/
#define PIN_FUNCTION_REG_118_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_118_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_118_PORT_PIN_MODE_SPI PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_118 {106, 2}

/* Pad: 119*/
#define PIN_FUNCTION_REG_119_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_119_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_119_PORT_PIN_MODE_GPT PORT_FUNC2
#define PIN_FUNCTION_REG_119_PORT_PIN_MODE_ETH PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_119 {72, 1}

/* Pad: 120*/
#define PIN_FUNCTION_REG_120_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_120_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_120_PORT_PIN_MODE_SPI PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_120 {109, 2}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_120 {228, 1}
#define PIN_FUNCTION_REG_120_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 121*/
#define PIN_FUNCTION_REG_121_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_121_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_121_PORT_PIN_MODE_SPI PORT_FUNC3
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_121 {110, 2}

/* Pad: 122*/
#define PIN_FUNCTION_REG_122_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_122_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_122_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_122 {73, 2}

/* Pad: 123*/
#define PIN_FUNCTION_REG_123_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_123_PORT_PIN_MODE_PWM PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_123 {112, 2}

/* Pad: 124*/
#define PIN_FUNCTION_REG_124_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_124_PORT_PIN_MODE_PWM PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_124 {113, 2}

/* Pad: 125*/
#define PIN_FUNCTION_REG_125_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_125_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_125_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_125 {74, 2}

/* Pad: 126*/
#define PIN_FUNCTION_REG_126_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_126_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_126_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_126 {75, 2}

/* Pad: 127*/
#define PIN_FUNCTION_REG_127_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_127_PORT_PIN_MODE_PWM PORT_FUNC1
#define PIN_FUNCTION_REG_127_PORT_PIN_MODE_GPT PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_127 {76, 2}

/* Pad: 128*/
#define PIN_FUNCTION_REG_128_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_128_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_128_PORT_PIN_MODE_SPI PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_128 {71, 2}
#define PIN_FUNCTION_REG_128_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_128 {100, 1}

/* Pad: 129*/
#define PIN_FUNCTION_REG_129_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_129_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_129_PORT_PIN_MODE_SPI PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_129 {72, 2}
#define PIN_FUNCTION_REG_129_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_129 {101, 1}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_129 {232, 1}
#define PIN_FUNCTION_REG_129_PORT_PIN_MODE_ETH PORT_FUNC0

/* Pad: 130*/
#define PIN_FUNCTION_REG_130_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_130_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_130_PORT_PIN_MODE_SPI PORT_FUNC2
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_130 {73, 3}
#define PIN_FUNCTION_REG_130_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_130 {102, 1}

/* Pad: 131*/
#define PIN_FUNCTION_REG_131_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_131_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_131_PORT_PIN_MODE_SPI PORT_FUNC2
#define PIN_FUNCTION_REG_131_PORT_PIN_MODE_ETH PORT_FUNC4
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_131 {74, 3}
#define PIN_FUNCTION_REG_131_PORT_PIN_MODE_PWM PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_PWM_PAD_131 {103, 1}

/* Pad: 132*/
#define PIN_FUNCTION_REG_132_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 133*/
#define PIN_FUNCTION_REG_133_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_133_PORT_PIN_MODE_CAN PORT_FUNC1

/* Pad: 134*/
#define PIN_FUNCTION_REG_134_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_134_PORT_PIN_MODE_CAN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_134 {34, 2}

/* Pad: 135*/
#define PIN_FUNCTION_REG_135_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 136*/
#define PIN_FUNCTION_REG_136_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 137*/
#define PIN_FUNCTION_REG_137_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_137_PORT_PIN_MODE_GPT PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_137 {75, 3}

/* Pad: 138*/
#define PIN_FUNCTION_REG_138_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_138_PORT_PIN_MODE_GPT PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_138 {76, 3}

/* Pad: 139*/
#define PIN_FUNCTION_REG_139_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 140*/
#define PIN_FUNCTION_REG_140_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 141*/
#define PIN_FUNCTION_REG_141_PORT_PIN_MODE_DIO PORT_FUNC0

/* Pad: 142*/
#define PIN_FUNCTION_REG_142_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_142_PORT_PIN_MODE_SPI PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_142 {52, 4}

/* Pad: 143*/
#define PIN_FUNCTION_REG_143_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_143_PORT_PIN_MODE_SPI PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_143 {51, 4}

/* Pad: 144*/
#define PIN_FUNCTION_REG_144_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_144_PORT_PIN_MODE_SPI PORT_FUNC1

/* Pad: 145*/
#define PIN_FUNCTION_REG_145_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_145_PORT_PIN_MODE_SPI PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_SPI_PAD_145 {50, 1}

/* Pad: 146*/
#define PIN_FUNCTION_REG_146_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_146_PORT_PIN_MODE_SPI PORT_FUNC1

/* Pad: 147*/
#define PIN_FUNCTION_REG_147_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_147_PORT_PIN_MODE_SPI PORT_FUNC1

/* Pad: 148*/
#define PIN_FUNCTION_REG_148_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_148_PORT_PIN_MODE_SPI PORT_FUNC1

/* Pad: 149*/
#define PIN_FUNCTION_REG_149_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_149_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 150*/
#define PIN_FUNCTION_REG_150_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_150_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 151*/
#define PIN_FUNCTION_REG_151_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_151_PORT_PIN_MODE_ADC PORT_FUNCADC

/* Pad: 152*/
#define PIN_FUNCTION_REG_152_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_152_PORT_PIN_MODE_GPT PORT_FUNC1
#define PIN_FUNCTION_REG_152_PORT_PIN_MODE_OTHER0 PORT_FUNC2
#define PIN_FUNCTION_REG_152_PORT_PIN_MODE_CAN PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_152 {34, 3}
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_152 {73, 4}
#define PIN_FUNCTION_REG_152_PORT_PIN_MODE_OTHER1 PORT_FUNC0
#define INPUT_SELECT_PORT_PIN_MODE_OTHER1_PAD_152 {75, 4}

/* Pad: 153*/
#define PIN_FUNCTION_REG_153_PORT_PIN_MODE_DIO PORT_FUNC0
#define PIN_FUNCTION_REG_153_PORT_PIN_MODE_GPT PORT_FUNC1
#define INPUT_SELECT_PORT_PIN_MODE_GPT_PAD_153 {76, 4}
#define INPUT_SELECT_PORT_PIN_MODE_ETH_PAD_153 {229, 1}
#define PIN_FUNCTION_REG_153_PORT_PIN_MODE_ETH PORT_FUNC0

#endif  /* _MPC5744PPORTS_H*/ 
