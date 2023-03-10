/**
 *******************************************************************************
 * @file    txz_gpio_M4GR.h
 * @brief   This file provides all the functions prototypes for GPIO driver.
 * @version V1.0.0
 *
 * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LICENSE AGREEMENT.
 *
 * Copyright(C) Toshiba Electronic Device Solutions Corporation 2021
 *******************************************************************************
 */
/*------------------------------------------------------------------------------*/
/*  Define to prevent recursive inclusion                                       */
/*------------------------------------------------------------------------------*/
#ifndef __GPIO_M4GR_H
#define __GPIO_M4GR_H

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------------------------------------------*/
/*  Includes                                                                    */
/*------------------------------------------------------------------------------*/
#include "txz_driver_def.h"

/**
 *  @addtogroup Periph_Driver
 *  @{
 */

/**
 *  @defgroup GPIO GPIO
 *  @brief    GPIO Driver.
 *  @{
 */
/*------------------------------------------------------------------------------*/
/*  Macro Definition                                                            */
/*------------------------------------------------------------------------------*/
/**
 *  @defgroup GPIO_Exported_define GPIO Exported Define
 *  @{
 */
/*PinExist define*/
/* PortA */
#define GPIO_PORT_A_0   (0x3DDF)
#define GPIO_PORT_A_1   (0x3D57)
#define GPIO_PORT_A_2   (0x3D17)
#define GPIO_PORT_A_3   (0x3DDF)
#define GPIO_PORT_A_4   (0x3DDF)
#define GPIO_PORT_A_5   (0x3DD7)
#define GPIO_PORT_A_6   (0x3D97)
#define GPIO_PORT_A_7   (0x3DDF)
/* PortB */
#define GPIO_PORT_B_0   (0x3C7F)
#define GPIO_PORT_B_1   (0x3CDF)
#define GPIO_PORT_B_2   (0x3C57)
#define GPIO_PORT_B_3   (0x3C17)
#define GPIO_PORT_B_4   (0x3C77)
#define GPIO_PORT_B_5   (0x3C37)
#define GPIO_PORT_B_6   (0x3C7F)
#define GPIO_PORT_B_7   (0x3C7F)
/* PortC */
#define GPIO_PORT_C_0   (0x3C77)
#define GPIO_PORT_C_1   (0x3C77)
#define GPIO_PORT_C_2   (0x3C77)
#define GPIO_PORT_C_3   (0x3C37)
#define GPIO_PORT_C_4   (0x3C57)
#define GPIO_PORT_C_5   (0x3C17)
#define GPIO_PORT_C_6   (0x3C07)
#define GPIO_PORT_C_7   (0x3C07)
/* PortD */
#define GPIO_PORT_D_0   (0x3DFF)
#define GPIO_PORT_D_1   (0x3D7F)
#define GPIO_PORT_D_2   (0x3F77)
#define GPIO_PORT_D_3   (0x3F37)
#define GPIO_PORT_D_4   (0x3FD7)
#define GPIO_PORT_D_5   (0x3F97)
#define GPIO_PORT_D_6   (0x3FDF)
#define GPIO_PORT_D_7   (0x3FDF)
/* PortE */
#define GPIO_PORT_E_0   (0x3F7F)
#define GPIO_PORT_E_1   (0x3F77)
#define GPIO_PORT_E_2   (0x3F77)
#define GPIO_PORT_E_3   (0x3F77)
#define GPIO_PORT_E_4   (0x3EF7)
#define GPIO_PORT_E_5   (0x3EF7)
#define GPIO_PORT_E_6   (0x3EF7)
#define GPIO_PORT_E_7   (0x3EFF)
/* PortF */
#define GPIO_PORT_F_0   (0x3C07)
#define GPIO_PORT_F_1   (0x3C07)
#define GPIO_PORT_F_2   (0x3D83)
#define GPIO_PORT_F_3   (0x3D83)
#define GPIO_PORT_F_4   (0x3C07)
#define GPIO_PORT_F_5   (0x3C07)
#define GPIO_PORT_F_6   (0x3C07)
#define GPIO_PORT_F_7   (0x3C67)
/* PortG */
#define GPIO_PORT_G_0   (0x3C57)
#define GPIO_PORT_G_1   (0x3C57)
#define GPIO_PORT_G_2   (0x3DF3)
#define GPIO_PORT_G_3   (0x3DF3)
#define GPIO_PORT_G_4   (0x3DEB)
#define GPIO_PORT_G_5   (0x3DFB)
#define GPIO_PORT_G_6   (0x3CE7)
#define GPIO_PORT_G_7   (0x3C67)
/* PortH */
#define GPIO_PORT_H_0   (0x3C77)
#define GPIO_PORT_H_1   (0x3C77)
#define GPIO_PORT_H_2   (0x3C77)
#define GPIO_PORT_H_3   (0x3C77)
#define GPIO_PORT_H_4   (0x3C57)
#define GPIO_PORT_H_5   (0x3C57)
#define GPIO_PORT_H_6   (0x3C57)
#define GPIO_PORT_H_7   (0x3C57)
/* PortJ */
#define GPIO_PORT_J_0   (0x3C53)
#define GPIO_PORT_J_1   (0x3C53)
#define GPIO_PORT_J_2   (0x3DD3)
#define GPIO_PORT_J_3   (0x3DD3)
#define GPIO_PORT_J_4   (0x3C5B)
#define GPIO_PORT_J_5   (0x3C5B)
#define GPIO_PORT_J_6   (0x3DC3)
#define GPIO_PORT_J_7   (0x3DC3)
/* PortK */
#define GPIO_PORT_K_0   (0x3C9F)
#define GPIO_PORT_K_1   (0x3CFF)
#define GPIO_PORT_K_2   (0x3C87)
#define GPIO_PORT_K_3   (0x3C87)
#define GPIO_PORT_K_4   (0x3CA7)
#define GPIO_PORT_K_5   (0x3CA7)
#define GPIO_PORT_K_6   (0x3CBF)
#define GPIO_PORT_K_7   (0x3DBB)
/* PortL */
#define GPIO_PORT_L_0   (0x3DDB)
#define GPIO_PORT_L_1   (0x3D43)
#define GPIO_PORT_L_2   (0x3D43)
#define GPIO_PORT_L_3   (0x3DDB)
#define GPIO_PORT_L_4   (0x3C1B)
#define GPIO_PORT_L_5   (0x3C0B)
#define GPIO_PORT_L_6   (0x3C1B)
#define GPIO_PORT_L_7   (0x3C0F)
/* PortM */
#define GPIO_PORT_M_0   (0x3DE7)
#define GPIO_PORT_M_1   (0x3DE7)
#define GPIO_PORT_M_2   (0x3DDB)
#define GPIO_PORT_M_3   (0x3DEB)
#define GPIO_PORT_M_4   (0x3DAB)
#define GPIO_PORT_M_5   (0x3D9B)
#define GPIO_PORT_M_6   (0x3DFF)
#define GPIO_PORT_M_7   (0x3DEF)
/* PortN */
#define GPIO_PORT_N_0   (0x3C03)
#define GPIO_PORT_N_1   (0x3C03)
#define GPIO_PORT_N_2   (0x3C03)
#define GPIO_PORT_N_3   (0x3C03)
#define GPIO_PORT_N_4   (0x3C03)
#define GPIO_PORT_N_5   (0x3C03)
#define GPIO_PORT_N_6   (0x3C03)
#define GPIO_PORT_N_7   (0x3C03)
/* PortP */
#define GPIO_PORT_P_0   (0x3C5B)
#define GPIO_PORT_P_1   (0x3C5B)
#define GPIO_PORT_P_2   (0x3C5B)
#define GPIO_PORT_P_3   (0x3C5B)
#define GPIO_PORT_P_4   (0x3C5B)
#define GPIO_PORT_P_5   (0x3C5B)
#define GPIO_PORT_P_6   (0x3C5B)
#define GPIO_PORT_P_7   (0x3C5B)
/* PortR */
#define GPIO_PORT_R_0   (0x3C1B)
#define GPIO_PORT_R_1   (0x3C1B)
#define GPIO_PORT_R_2   (0x3C1B)
#define GPIO_PORT_R_3   (0x3C1B)
#define GPIO_PORT_R_4   (0x3C1B)
#define GPIO_PORT_R_5   (0x3C1B)
#define GPIO_PORT_R_6   (0x3C1B)
#define GPIO_PORT_R_7   (0x3C1B)
/* PortT */
#define GPIO_PORT_T_0   (0x3C03)
#define GPIO_PORT_T_1   (0x3C03)
#define GPIO_PORT_T_2   (0x3D03)
#define GPIO_PORT_T_3   (0x3C9F)
#define GPIO_PORT_T_4   (0x3C03)
#define GPIO_PORT_T_5   (0x3C0B)
#define GPIO_PORT_T_6   (0x0000)
#define GPIO_PORT_T_7   (0x0000)
/* PortU */
#define GPIO_PORT_U_0   (0x3D1B)
#define GPIO_PORT_U_1   (0x3D0B)
#define GPIO_PORT_U_2   (0x3D9B)
#define GPIO_PORT_U_3   (0x3D9B)
#define GPIO_PORT_U_4   (0x3D9B)
#define GPIO_PORT_U_5   (0x3D9B)
#define GPIO_PORT_U_6   (0x3D9B)
#define GPIO_PORT_U_7   (0x3D8B)
/* PortV */
#define GPIO_PORT_V_0   (0x3DDB)
#define GPIO_PORT_V_1   (0x3DDB)
#define GPIO_PORT_V_2   (0x3DDB)
#define GPIO_PORT_V_3   (0x3DCB)
#define GPIO_PORT_V_4   (0x3DEF)
#define GPIO_PORT_V_5   (0x3DFF)
#define GPIO_PORT_V_6   (0x3D7B)
#define GPIO_PORT_V_7   (0x3DEB)
/* PortW */
#define GPIO_PORT_W_0   (0x3CE3)
#define GPIO_PORT_W_1   (0x3D63)
#define GPIO_PORT_W_2   (0x3D63)
#define GPIO_PORT_W_3   (0x3C63)
#define GPIO_PORT_W_4   (0x3D53)
#define GPIO_PORT_W_5   (0x3D43)
#define GPIO_PORT_W_6   (0x3D43)
#define GPIO_PORT_W_7   (0x3D53)
/* PortY */
#define GPIO_PORT_Y_0   (0x3801)
#define GPIO_PORT_Y_1   (0x3801)
#define GPIO_PORT_Y_2   (0x3801)
#define GPIO_PORT_Y_3   (0x3801)
#define GPIO_PORT_Y_4   (0x1C27)
#define GPIO_PORT_Y_5   (0x0000)
#define GPIO_PORT_Y_6   (0x0000)
#define GPIO_PORT_Y_7   (0x0000)

/* Port Register setting */
#define PORT_CLOCK_DISABLE_PORTA(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTB(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTC(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTD(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTE(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTF(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTG(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTH(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTJ(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTK(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTL(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTM(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTN(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTP(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTR(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTT(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTU(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTV(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTW(var)     ((var) = 0U)
#define PORT_CLOCK_DISABLE_PORTY(var)     ((var) = 0U)

#define PORT_CLOCK_ENABLE_PORTA(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTB(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTC(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTD(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTE(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTF(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTG(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTH(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTJ(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTK(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTL(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTM(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTN(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTP(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTR(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTT(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTU(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTV(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTW(var)      ((var) = 1U)
#define PORT_CLOCK_ENABLE_PORTY(var)      ((var) = 1U)

/* PortA */
#define INIT_GPIO_PORT_A_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_A_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_A_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_FR4(var)
#define INIT_GPIO_PORT_A_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_FR8(var)
#define INIT_GPIO_PORT_A_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_A_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_A_IE(var)    ((var) = 0x00)
/* PortB */
#define INIT_GPIO_PORT_B_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_B_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_B_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_FR7(var)
#define INIT_GPIO_PORT_B_FR8(var)
#define INIT_GPIO_PORT_B_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_B_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_B_IE(var)    ((var) = 0x00)
/* PortC */
#define INIT_GPIO_PORT_C_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_C_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_C_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_C_FR2(var)
#define INIT_GPIO_PORT_C_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_C_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_C_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_C_FR6(var)
#define INIT_GPIO_PORT_C_FR7(var)
#define INIT_GPIO_PORT_C_FR8(var)
#define INIT_GPIO_PORT_C_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_C_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_C_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_C_IE(var)    ((var) = 0x00)
/* PortD */
#define INIT_GPIO_PORT_D_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_D_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_FR8(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_D_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_D_IE(var)    ((var) = 0x00)
/* PortE */
#define INIT_GPIO_PORT_E_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_E_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_FR8(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_E_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_E_IE(var)    ((var) = 0x00)
/* PortF */
#define INIT_GPIO_PORT_F_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_F_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_F_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_F_FR2(var)
#define INIT_GPIO_PORT_F_FR3(var)
#define INIT_GPIO_PORT_F_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_F_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_F_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_F_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_F_FR8(var)
#define INIT_GPIO_PORT_F_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_F_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_F_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_F_IE(var)    ((var) = 0x00)
/* PortG */
#define INIT_GPIO_PORT_G_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_G_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_FR8(var)
#define INIT_GPIO_PORT_G_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_G_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_G_IE(var)    ((var) = 0x00)
/* PortH */
#define INIT_GPIO_PORT_H_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_H_CR(var)    ((var) = 0x50)
#define INIT_GPIO_PORT_H_FR1(var)   ((var) = 0xF8)
#define INIT_GPIO_PORT_H_FR2(var)
#define INIT_GPIO_PORT_H_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_H_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_H_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_H_FR6(var)
#define INIT_GPIO_PORT_H_FR7(var)
#define INIT_GPIO_PORT_H_FR8(var)
#define INIT_GPIO_PORT_H_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_H_PUP(var)   ((var) = 0x98)
#define INIT_GPIO_PORT_H_PDN(var)   ((var) = 0x20)
#define INIT_GPIO_PORT_H_IE(var)    ((var) = 0xB8)
/* PortJ */
#define INIT_GPIO_PORT_J_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_J_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_J_FR1(var)
#define INIT_GPIO_PORT_J_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_J_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_J_FR4(var)
#define INIT_GPIO_PORT_J_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_J_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_J_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_J_FR8(var)
#define INIT_GPIO_PORT_J_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_J_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_J_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_J_IE(var)    ((var) = 0x00)
/* PortK */
#define INIT_GPIO_PORT_K_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_K_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_FR8(var)
#define INIT_GPIO_PORT_K_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_K_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_K_IE(var)    ((var) = 0x00)
/* PortL */
#define INIT_GPIO_PORT_L_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_L_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_L_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_FR4(var)
#define INIT_GPIO_PORT_L_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_FR8(var)
#define INIT_GPIO_PORT_L_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_L_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_L_IE(var)    ((var) = 0x00)
/* PortM */
#define INIT_GPIO_PORT_M_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_M_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_FR8(var)
#define INIT_GPIO_PORT_M_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_M_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_M_IE(var)    ((var) = 0x00)
/* PortN */
#define INIT_GPIO_PORT_N_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_N_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_N_FR1(var)
#define INIT_GPIO_PORT_N_FR2(var)
#define INIT_GPIO_PORT_N_FR3(var)
#define INIT_GPIO_PORT_N_FR4(var)
#define INIT_GPIO_PORT_N_FR5(var)
#define INIT_GPIO_PORT_N_FR6(var)
#define INIT_GPIO_PORT_N_FR7(var)
#define INIT_GPIO_PORT_N_FR8(var)
#define INIT_GPIO_PORT_N_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_N_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_N_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_N_IE(var)    ((var) = 0x00)
/* PortP */
#define INIT_GPIO_PORT_P_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_P_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_P_FR1(var)
#define INIT_GPIO_PORT_P_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_P_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_P_FR4(var)
#define INIT_GPIO_PORT_P_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_P_FR6(var)
#define INIT_GPIO_PORT_P_FR7(var)
#define INIT_GPIO_PORT_P_FR8(var)
#define INIT_GPIO_PORT_P_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_P_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_P_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_P_IE(var)    ((var) = 0x00)
/* PortR */
#define INIT_GPIO_PORT_R_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_R_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_R_FR1(var)
#define INIT_GPIO_PORT_R_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_R_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_R_FR4(var)
#define INIT_GPIO_PORT_R_FR5(var)
#define INIT_GPIO_PORT_R_FR6(var)
#define INIT_GPIO_PORT_R_FR7(var)
#define INIT_GPIO_PORT_R_FR8(var)
#define INIT_GPIO_PORT_R_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_R_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_R_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_R_IE(var)    ((var) = 0x00)
/* PortT */
#define INIT_GPIO_PORT_T_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_T_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_T_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_T_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_T_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_T_FR4(var)
#define INIT_GPIO_PORT_T_FR5(var)
#define INIT_GPIO_PORT_T_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_T_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_T_FR8(var)
#define INIT_GPIO_PORT_T_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_T_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_T_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_T_IE(var)    ((var) = 0x00)
/* PortU */
#define INIT_GPIO_PORT_U_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_U_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_U_FR1(var)
#define INIT_GPIO_PORT_U_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_U_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_U_FR4(var)
#define INIT_GPIO_PORT_U_FR5(var)
#define INIT_GPIO_PORT_U_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_U_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_U_FR8(var)
#define INIT_GPIO_PORT_U_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_U_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_U_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_U_IE(var)    ((var) = 0x00)
/* PortV */
#define INIT_GPIO_PORT_V_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_V_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR2(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_FR8(var)
#define INIT_GPIO_PORT_V_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_V_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_V_IE(var)    ((var) = 0x00)
/* PortW */
#define INIT_GPIO_PORT_W_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_W_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_W_FR1(var)
#define INIT_GPIO_PORT_W_FR2(var)
#define INIT_GPIO_PORT_W_FR3(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_W_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_W_FR5(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_W_FR6(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_W_FR7(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_W_FR8(var)
#define INIT_GPIO_PORT_W_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_W_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_W_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_W_IE(var)    ((var) = 0x00)
/* PortY */
#define INIT_GPIO_PORT_Y_DATA(var)  ((var) = 0x00)
#define INIT_GPIO_PORT_Y_CR(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_Y_FR1(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_Y_FR2(var)
#define INIT_GPIO_PORT_Y_FR3(var)
#define INIT_GPIO_PORT_Y_FR4(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_Y_FR5(var)
#define INIT_GPIO_PORT_Y_FR6(var)
#define INIT_GPIO_PORT_Y_FR7(var)
#define INIT_GPIO_PORT_Y_FR8(var)
#define INIT_GPIO_PORT_Y_OD(var)    ((var) = 0x00)
#define INIT_GPIO_PORT_Y_PUP(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_Y_PDN(var)   ((var) = 0x00)
#define INIT_GPIO_PORT_Y_IE(var)    ((var) = 0x00)
/**
 *  @}
 */ /* End of group GPIO_Exported_define */

/*------------------------------------------------------------------------------*/
/*  Enumerated Type Definition                                                  */
/*------------------------------------------------------------------------------*/
/** @defgroup GPIO_Exported_Typedef GPIO Exported Typedef
  * @{
  */

/**
 *  @enum gpio_gr_t
 *  @brief    Port Group Enumerated Type Definition.
 */
typedef enum {
    GPIO_PORT_A = 0x0, /*!< 0: PA       */
    GPIO_PORT_B,       /*!< 1: PB       */
    GPIO_PORT_C,       /*!< 2: PC       */
    GPIO_PORT_D,       /*!< 3: PD       */
    GPIO_PORT_E,       /*!< 4: PE       */
    GPIO_PORT_F,       /*!< 5: PF       */
    GPIO_PORT_G,       /*!< 6: PG       */
    GPIO_PORT_H,       /*!< 7: PH       */
    GPIO_PORT_J,       /*!< 8: PJ       */
    GPIO_PORT_K,       /*!< 9: PK       */
    GPIO_PORT_L,       /*!< 10:PL       */
    GPIO_PORT_M,       /*!< 11: PM       */
    GPIO_PORT_N,       /*!< 12: PN       */
    GPIO_PORT_P,       /*!< 13: PP       */
    GPIO_PORT_R,       /*!< 14: PR       */
    GPIO_PORT_T,       /*!< 15: PT       */
    GPIO_PORT_U,       /*!< 16: PU       */
    GPIO_PORT_V,       /*!< 17: PV       */
    GPIO_PORT_W,       /*!< 18: PW       */
    GPIO_PORT_Y,       /*!< 19: PY       */
    GPIO_GROUP_Max     /*!< Max Number   */
} gpio_gr_t;

/**
 *  @enum gpio_num_t
 *  @brief    Port Number Enumerated Type Definition.
 */
typedef enum {
    GPIO_PORT_0 = 0x0, /*!< 0: Port0       */
    GPIO_PORT_1,       /*!< 1: Port1       */
    GPIO_PORT_2,       /*!< 2: Port2       */
    GPIO_PORT_3,       /*!< 3: Port3       */
    GPIO_PORT_4,       /*!< 4: Port4       */
    GPIO_PORT_5,       /*!< 5: Port5       */
    GPIO_PORT_6,       /*!< 6: Port6       */
    GPIO_PORT_7,       /*!< 7: Port7       */
    GPIO_PORT_Max      /*!< Max Number     */
} gpio_num_t;

/**
 *  @enum gpio_fr_t
 *  @brief    Port Function Number Enumerated Type Definition.
 */
typedef enum {
    GPIO_FR_1 = 1,   /*!< 1: PxFR1       */
    GPIO_FR_2,       /*!< 2: PxFR2       */
    GPIO_FR_3,       /*!< 3: PxFR3       */
    GPIO_FR_4,       /*!< 4: PxFR4       */
    GPIO_FR_5,       /*!< 5: PxFR5       */
    GPIO_FR_6,       /*!< 6: PxFR6       */
    GPIO_FR_7,       /*!< 7: PxFR7       */
    GPIO_FR_8,       /*!< 8: PxFR8       */
    GPIO_FR_NA,      /*!< 9: N/A         */
    GPIO_FR_Max,     /*!< Max Number     */
} gpio_fr_t;

/**
 *  @enum gpio_pa0_func_t
 *  @brief    PortA0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PA0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA0_INT02a     = 0,         /*!<     0: INT02a         */
    GPIO_PA0_EA00       = GPIO_FR_1, /*!< PAFR1: EA00           */
    GPIO_PA0_T32A00INB1 = GPIO_FR_2, /*!< PAFR2: T32A00INB1     */
    GPIO_PA0_T32A00INA0 = GPIO_FR_3, /*!< PAFR3: T32A00INA0     */
    GPIO_PA0_T32A00INC0 = GPIO_FR_5, /*!< PAFR5: T32A00INC0     */
    GPIO_PA0_TSPI0CSIN  = GPIO_FR_6, /*!< PAFR6: TSPI0CSIN      */
    GPIO_PA0_TSPI0CS0   = GPIO_FR_7, /*!< PAFR7: TSPI0CS0       */
} gpio_pa0_func_t;

/**
 *  @enum gpio_pa1_func_t
 *  @brief    PortA1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PA1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA1_EA01       = GPIO_FR_1, /*!< PAFR1: EA01           */
    GPIO_PA1_T32A00OUTA = GPIO_FR_3, /*!< PAFR3: T32A00OUTA     */
    GPIO_PA1_T32A00OUTC = GPIO_FR_5, /*!< PAFR5: T32A00OUTC     */
    GPIO_PA1_TSPI0SCK   = GPIO_FR_7, /*!< PAFR7: TSPI0SCK       */
} gpio_pa1_func_t;

/**
 *  @enum gpio_pa2_func_t
 *  @brief    PortA2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PA2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA2_EA02       = GPIO_FR_1, /*!< PAFR1: EA02           */
    GPIO_PA2_T32A00OUTB = GPIO_FR_3, /*!< PAFR3: T32A00OUTB     */
    GPIO_PA2_TSPI0RXD   = GPIO_FR_7, /*!< PAFR7: TSPI0RXD       */
} gpio_pa2_func_t;

/**
*  @enum gpio_pa3_func_t
*  @brief    PortA3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PA3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA3_EA03       = GPIO_FR_1, /*!< PAFR1: EA03           */
    GPIO_PA3_T32A00INA1 = GPIO_FR_2, /*!< PAFR2: T32A00INA1     */
    GPIO_PA3_T32A00INB0 = GPIO_FR_3, /*!< PAFR3: T32A00INB0     */
    GPIO_PA3_T32A00INC1 = GPIO_FR_5, /*!< PAFR5: T32A00INC1     */
    GPIO_PA3_TSPI2CS1   = GPIO_FR_6, /*!< PAFR6: TSPI2CS1       */
    GPIO_PA3_TSPI0TXD   = GPIO_FR_7, /*!< PAFR7: TSPI0TXD       */
} gpio_pa3_func_t;

/**
*  @enum gpio_pa4_func_t
*  @brief    PortA4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PA4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA4_EA04       = GPIO_FR_1, /*!< PAFR1: EA04           */
    GPIO_PA4_T32A01INB1 = GPIO_FR_2, /*!< PAFR2: T32A01INB1     */
    GPIO_PA4_T32A01INA0 = GPIO_FR_3, /*!< PAFR3: T32A01INA0     */
    GPIO_PA4_T32A01INC0 = GPIO_FR_5, /*!< PAFR5: T32A01INC0     */
    GPIO_PA4_TSPI0CS1   = GPIO_FR_6, /*!< PAFR6: TSPI0CS1       */
    GPIO_PA4_TSPI2TXD   = GPIO_FR_7, /*!< PAFR7: TSPI2TXD       */
} gpio_pa4_func_t;

/**
 *  @enum gpio_pa5_func_t
 *  @brief    PortA5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PA5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA5_EA05       = GPIO_FR_1, /*!< PAFR1: EA05           */
    GPIO_PA5_T32A01OUTA = GPIO_FR_3, /*!< PAFR3: T32A01OUTA     */
    GPIO_PA5_T32A01OUTC = GPIO_FR_5, /*!< PAFR5: T32A01OUTC     */
    GPIO_PA5_TSPI0CS2   = GPIO_FR_6, /*!< PAFR6: TSPI0CS2       */
    GPIO_PA5_TSPI2RXD   = GPIO_FR_7, /*!< PAFR7: TSPI2RXD       */
} gpio_pa5_func_t;

/**
 *  @enum gpio_pa6_func_t
 *  @brief    PortA6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PA6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA6_EA06       = GPIO_FR_1, /*!< PAFR1: EA06           */
    GPIO_PA6_T32A01OUTB = GPIO_FR_3, /*!< PAFR3: T32A01OUTB     */
    GPIO_PA6_TSPI0CS3   = GPIO_FR_6, /*!< PAFR6: TSPI0CS3       */
    GPIO_PA6_TSPI2SCK   = GPIO_FR_7, /*!< PAFR7: TSPI2SCK       */
} gpio_pa6_func_t;


/**
 *  @enum gpio_pa7_func_t
 *  @brief    PortA6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PA7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PA7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PA7_INT03a     = 0,         /*!<     0: INT03a         */
    GPIO_PA7_EA07       = GPIO_FR_1, /*!< PAFR1: EA07           */
    GPIO_PA7_T32A01INA1 = GPIO_FR_2, /*!< PAFR2: T32A01INA1     */
    GPIO_PA7_T32A01INB0 = GPIO_FR_3, /*!< PAFR3: T32A01INB0     */
    GPIO_PA7_T32A01INC1 = GPIO_FR_5, /*!< PAFR5: T32A01INC1     */
    GPIO_PA7_TSPI2CSIN  = GPIO_FR_6, /*!< PAFR6: TSPI2CSIN      */
    GPIO_PA7_TSPI2CS0   = GPIO_FR_7, /*!< PAFR7: TSPI2CS0       */
} gpio_pa7_func_t;



/**
 *  @enum gpio_pb0_func_t
 *  @brief    PortB0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PB0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PB0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PB0_INT04a     = 0,         /*!<     0: INT04a         */
    GPIO_PB0_EA08       = GPIO_FR_1, /*!< PBFR1: EA08           */
    GPIO_PB0_T32A02INB1 = GPIO_FR_2, /*!< PBFR2: T32A02INB1     */
    GPIO_PB0_T32A02INA0 = GPIO_FR_3, /*!< PBFR3: T32A02INA0     */
    GPIO_PB0_I2S0MCKIO  = GPIO_FR_4, /*!< PBFR4: I2S0MCKI/O     */
    GPIO_PB0_T32A02INC0 = GPIO_FR_5, /*!< PBFR5: T32A02INC0     */
} gpio_pb0_func_t;

/**
 *  @enum gpio_pb1_func_t
 *  @brief    PortB1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PB1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PB1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PB1_INT05a     = 0,         /*!<     0: INT05a         */
    GPIO_PB1_EA09       = GPIO_FR_1, /*!< PBFR1: EA09           */
    GPIO_PB1_T32A02INA1 = GPIO_FR_2, /*!< PBFR2: T32A02INA1     */
    GPIO_PB1_T32A02INB0 = GPIO_FR_3, /*!< PBFR3: T32A02INB0     */
    GPIO_PB1_T32A02INC1 = GPIO_FR_5, /*!< PBFR5: T32A02INC1     */
    GPIO_PB1_HDMAREQA   = GPIO_FR_6, /*!< PBFR6: HDMAREQA       */
} gpio_pb1_func_t;

/**
 *  @enum gpio_pb2_func_t
 *  @brief    PortB2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PB2_INPUT      = 0,         /*!<      0: Input Port     */
    GPIO_PB2_OUTPUT     = 0,         /*!<      0: Output Port    */
    GPIO_PB2_EA10       = GPIO_FR_1, /*!<  PBFR1: EA10           */
    GPIO_PB2_T32A02OUTA = GPIO_FR_3, /*!<  PBFR3: T32A02OUTA     */
    GPIO_PB2_T32A02OUTC = GPIO_FR_5, /*!<  PBFR5: T32A02OUTC     */
} gpio_pb2_func_t;

/**
*  @enum gpio_pb3_func_t
*  @brief    PortB3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PB3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PB3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PB3_EA11       = GPIO_FR_1, /*!< PBFR1: EA11           */
    GPIO_PB3_T32A02OUTB = GPIO_FR_3, /*!< PBFR3: T32A02OUTB     */
} gpio_pb3_func_t;

/**
*  @enum gpio_pb4_func_t
*  @brief    PortB4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PB4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PB4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PB4_EA12       = GPIO_FR_1, /*!< PBFR1: EA12           */
    GPIO_PB4_T32A03OUTA = GPIO_FR_3, /*!< PBFR3: T32A03OUTA     */
    GPIO_PB4_I2S0LRCK   = GPIO_FR_4, /*!< PBFR4: I2S0LRCK       */
    GPIO_PB4_T32A03OUTC = GPIO_FR_5, /*!< PBFR5: T32A03OUTC     */
} gpio_pb4_func_t;

/**
 *  @enum gpio_pb5_func_t
 *  @brief    PortB5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PB5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PB5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PB5_EA13       = GPIO_FR_1, /*!< PBFR1: EA13           */
    GPIO_PB5_T32A03OUTB = GPIO_FR_3, /*!< PBFR3: T32A03OUTB     */
    GPIO_PB5_I2S0BCK    = GPIO_FR_4, /*!< PBFR4: I2S0BCK        */
} gpio_pb5_func_t;

/**
 *  @enum gpio_pb6_func_t
 *  @brief    PortB6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PB6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PB6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PB6_INT06a     = 0,         /*!<     0: INT06a         */
    GPIO_PB6_EA14       = GPIO_FR_1, /*!< PBFR1: EA14           */
    GPIO_PB6_T32A03INB1 = GPIO_FR_2, /*!< PBFR2: T32A03INB1     */
    GPIO_PB6_T32A03INA0 = GPIO_FR_3, /*!< PBFR3: T32A03INA0     */
    GPIO_PB6_I2S0DI     = GPIO_FR_4, /*!< PBFR4: I2S0DI         */
    GPIO_PB6_T32A03INC0 = GPIO_FR_5, /*!< PBFR5: T32A03INC0     */
} gpio_pb6_func_t;

/**
 *  @enum gpio_pb7_func_t
 *  @brief    PortB7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PB7_INPUT      = 0,          /*!<   0: Input Port      */
    GPIO_PB7_OUTPUT     = 0,          /*!<   0: Output Port     */
    GPIO_PB7_INT07a     = 0,          /*!<   0: INT07a          */
    GPIO_PB7_EA15       = GPIO_FR_1, /*!< PBFR1: EA15           */
    GPIO_PB7_T32A03INA1 = GPIO_FR_2, /*!< PBFR2: T32A03INA1     */
    GPIO_PB7_T32A03INB0 = GPIO_FR_3, /*!< PBFR3: T32A03INB0     */
    GPIO_PB7_I2S0DO     = GPIO_FR_4, /*!< PBFR4: I2S0DO         */
    GPIO_PB7_T32A03INC1 = GPIO_FR_5, /*!< PBFR5: T32A03INC1     */
} gpio_pb7_func_t;

/**
 *  @enum gpio_pc0_func_t
 *  @brief    PortC0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PC0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PC0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PC0_INT12a     = 0,         /*!<     0: INT12a         */
    GPIO_PC0_EA16       = GPIO_FR_1, /*!< PCFR1: EA16           */
    GPIO_PC0_T32A08INA0 = GPIO_FR_3, /*!< PCFR3: T32A08INA0     */
    GPIO_PC0_I2S1DO     = GPIO_FR_4, /*!< PCFR4: I2S1DO         */
    GPIO_PC0_T32A08INC0 = GPIO_FR_5, /*!< PCFR5: T32A08INC0     */
} gpio_pc0_func_t;

/**
 *  @enum gpio_pc1_func_t
 *  @brief    PortC1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PC1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PC1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PC1_INT13a     = 0,         /*!<     0: INT13a         */
    GPIO_PC1_EA17       = GPIO_FR_1, /*!< PCFR1: EA17           */
    GPIO_PC1_T32A08INB0 = GPIO_FR_3, /*!< PCFR3: T32A08INB0     */
    GPIO_PC1_I2S1DI     = GPIO_FR_4, /*!< PCFR4: I2S1DI         */
    GPIO_PC1_T32A08INC1 = GPIO_FR_5, /*!< PCFR5: T32A08INC1     */
} gpio_pc1_func_t;

/**
 *  @enum gpio_pc2_func_t
 *  @brief    PortC2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PC2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PC2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PC2_EA18       = GPIO_FR_1, /*!< PCFR1: UT4TXDB        */
    GPIO_PC2_T32A08OUTA = GPIO_FR_3, /*!< PCFR3: T32A08OUTA     */
    GPIO_PC2_I2S1BCK    = GPIO_FR_4, /*!< PCFR4: I2S1BCK        */
    GPIO_PC2_T32A08OUTC = GPIO_FR_5, /*!< PCFR5: T32A08OUTC     */
} gpio_pc2_func_t;

/**
*  @enum gpio_pc3_func_t
*  @brief    PortC3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PC3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PC3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PC3_EA19       = GPIO_FR_1, /*!< PCFR1: EA19           */
    GPIO_PC3_T32A08OUTB = GPIO_FR_3, /*!< PCFR3: T32A08OUTB     */
    GPIO_PC3_I2S1LRCK   = GPIO_FR_4, /*!< PCFR4: I2S1LRCK       */
} gpio_pc3_func_t;

/**
*  @enum gpio_pc4_func_t
*  @brief    PortC4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PC4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PC4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PC4_EA20       = GPIO_FR_1, /*!< PCFR1: EA20           */
    GPIO_PC4_T32A10OUTA = GPIO_FR_3, /*!< PCFR3: T32A10OUTA     */
    GPIO_PC4_T32A10OUTC = GPIO_FR_5, /*!< PCFR5: T32A10OUTC     */
} gpio_pc4_func_t;

/**
 *  @enum gpio_pc5_func_t
 *  @brief    PortC5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PC5_INPUT       = 0,         /*!<     0: Input Port     */
    GPIO_PC5_OUTPUT      = 0,         /*!<     0: Output Port    */
    GPIO_PC5_EA21        = GPIO_FR_1, /*!< PCFR1: EA21           */
    GPIO_PC5_T32A10OUTB  = GPIO_FR_3, /*!< PCFR3: T32A10OUTB     */
} gpio_pc5_func_t;

/**
 *  @enum gpio_pc6_func_t
 *  @brief    PortC6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PC6_INPUT      = 0,         /*!<      0: Input Port     */
    GPIO_PC6_OUTPUT     = 0,         /*!<      0: Output Port    */
    GPIO_PC6_INT14a     = 0,         /*!<      0: INT14a         */
    GPIO_PC6_EA22       = GPIO_FR_1,  /*!< PCFR1: EA22           */
} gpio_pc6_func_t;

/**
 *  @enum gpio_pc7_func_t
 *  @brief    PortC7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PC7_INPUT      = 0,         /*!<      0: Input Port     */
    GPIO_PC7_OUTPUT     = 0,         /*!<      0: Output Port    */
    GPIO_PC7_INT15a     = 0,         /*!<      0: INT15a         */
    GPIO_PC7_EA23       = GPIO_FR_1,  /*!< PCFR1: EA23           */
} gpio_pc7_func_t;

/**
 *  @enum gpio_pd0_func_t
 *  @brief    PortD0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PD0_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD0_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD0_ED00       = GPIO_FR_1,  /*!< PCFR1: ED00           */
    GPIO_PD0_T32A04INB1 = GPIO_FR_2,  /*!< PCFR2: T32A04INB1     */
    GPIO_PD0_T32A04INA0 = GPIO_FR_3,  /*!< PCFR3: T32A04INA0     */
    GPIO_PD0_TSPI4CS0   = GPIO_FR_4,  /*!< PCFR4: TSPI4CS0       */
    GPIO_PD0_T32A04INC0 = GPIO_FR_5,  /*!< PCFR5: T32A04INC0     */
    GPIO_PD0_TSPI4CSIN  = GPIO_FR_6,  /*!< PCFR6: TSPI4CSIN      */
    GPIO_PD0_UO0        = GPIO_FR_7,  /*!< PCFR7: UO0            */
} gpio_pd0_func_t;

/**
 *  @enum gpio_pd1_func_t
 *  @brief    PortD1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PD1_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD1_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD1_ED01       = GPIO_FR_1,  /*!< PCFR1: ED01           */
    GPIO_PD1_T32A04INA1 = GPIO_FR_2,  /*!< PCFR2: T32A04INA1     */
    GPIO_PD1_T32A04INB0 = GPIO_FR_3,  /*!< PCFR3: T32A04INB0     */
    GPIO_PD1_TSPI4SCK   = GPIO_FR_4,  /*!< PCFR4: TSPI4SCK       */
    GPIO_PD1_T32A04INC1 = GPIO_FR_5,  /*!< PCFR5: T32A04INC1     */
    GPIO_PD1_XO0        = GPIO_FR_7,  /*!< PCFR7: XO0            */
} gpio_pd1_func_t;

/**
 *  @enum gpio_pd2_func_t
 *  @brief    PortD2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PD2_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD2_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD2_ED02       = GPIO_FR_1,  /*!< PCFR1: ED02           */
    GPIO_PD2_T32A04OUTA = GPIO_FR_3,  /*!< PCFR3: T32A04OUTA     */
    GPIO_PD2_TSPI4RXD   = GPIO_FR_4,  /*!< PCFR4: TSPI4RXD       */
    GPIO_PD2_T32A04OUTC = GPIO_FR_5,  /*!< PCFR5: T32A04OUTC     */
    GPIO_PD2_VO0        = GPIO_FR_7,  /*!< PCFR7: VO0            */
    GPIO_PD2_TSSI0TCK   = GPIO_FR_8,  /*!< PCFR8: TSSI0TCK       */
} gpio_pd2_func_t;

/**
*  @enum gpio_pd3_func_t
*  @brief    PortD3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PD3_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD3_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD3_ED03       = GPIO_FR_1,  /*!< PCFR1: ED03           */
    GPIO_PD3_T32A04OUTB = GPIO_FR_3,  /*!< PCFR3: T32A04OUTB     */
    GPIO_PD3_TSPI4TXD   = GPIO_FR_4,  /*!< PCFR4: TSPI4TXD       */
    GPIO_PD3_YO0        = GPIO_FR_7,  /*!< PCFR7: YO0            */
    GPIO_PD3_TSSI0TFS   = GPIO_FR_8,  /*!< PCFR8: TSSI0TFS       */
} gpio_pd3_func_t;

/**
 *  @enum gpio_pd4_func_t
 *  @brief    PortD4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PD4_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD4_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD4_ED04       = GPIO_FR_1,  /*!< PCFR1: ED04           */
    GPIO_PD4_T32A05OUTA = GPIO_FR_3,  /*!< PCFR3: T32A05OUTA     */
    GPIO_PD4_T32A05OUTC = GPIO_FR_5,  /*!< PCFR5: T32A05OUTC     */
    GPIO_PD4_I2S0LRCK   = GPIO_FR_6,  /*!< PCFR6: I2S0LRCK       */
    GPIO_PD4_WO0        = GPIO_FR_7,  /*!< PCFR7: WO0            */
    GPIO_PD4_TSSI0TXD   = GPIO_FR_8,  /*!< PCFR8: TSSI0TXD       */
} gpio_pd4_func_t;

/**
 *  @enum gpio_pd5_func_t
 *  @brief    PortD5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PD5_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD5_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD5_ED05       = GPIO_FR_1,  /*!< PCFR1: ED05           */
    GPIO_PD5_T32A05OUTB = GPIO_FR_3,  /*!< PCFR3: T32A05OUTB     */
    GPIO_PD5_I2S0BCK    = GPIO_FR_6,  /*!< PCFR6: I2S0BCK        */
    GPIO_PD5_ZO0        = GPIO_FR_7,  /*!< PCFR7: WO0            */
    GPIO_PD5_TSSI0RXD   = GPIO_FR_8,  /*!< PCFR8: TSSI0RXD       */
} gpio_pd5_func_t;

/**
 *  @enum gpio_pd6_func_t
 *  @brief    PortD6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PD6_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD6_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD6_ED06       = GPIO_FR_1,  /*!< PCFR1: ED06           */
    GPIO_PD6_T32A05INB1 = GPIO_FR_2,  /*!< PCFR2: T32A05INB1     */
    GPIO_PD6_T32A05INA0 = GPIO_FR_3,  /*!< PCFR3: T32A05INA0     */
    GPIO_PD6_T32A05INC0 = GPIO_FR_5,  /*!< PCFR5: T32A05INC0     */
    GPIO_PD6_I2S0DI     = GPIO_FR_6,  /*!< PCFR6: I2S0DI         */
    GPIO_PD6_EMG0       = GPIO_FR_7,  /*!< PCFR7: EMG0           */
    GPIO_PD6_TSSI0RFS   = GPIO_FR_8,  /*!< PCFR8: TSSI0RFS       */
} gpio_pd6_func_t;

/**
 *  @enum gpio_pd7_func_t
 *  @brief    PortD7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PD7_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PD7_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PD7_ED07       = GPIO_FR_1,  /*!< PCFR1: ED07           */
    GPIO_PD7_T32A05INA1 = GPIO_FR_2,  /*!< PCFR2: T32A05INA1     */
    GPIO_PD7_T32A05INB0 = GPIO_FR_3,  /*!< PCFR3: T32A05INB0     */
    GPIO_PD7_T32A05INC1 = GPIO_FR_5,  /*!< PCFR5: T32A05INC1     */
    GPIO_PD7_I2S0DO     = GPIO_FR_6,  /*!< PCFR6: I2S0DO         */
    GPIO_PD7_OVV0       = GPIO_FR_7,  /*!< PCFR7: OVV0           */
    GPIO_PD7_TSSI0RCK   = GPIO_FR_8,  /*!< PCFR8: TSSI0RCK       */
} gpio_pd7_func_t;

/**
 *  @enum gpio_pe0_func_t
 *  @brief    PortE0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PE0_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE0_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE0_ED08       = GPIO_FR_1,  /*!< PCFR1: ED08           */
    GPIO_PE0_T32A06INB1 = GPIO_FR_2,  /*!< PCFR2: T32A06INB1     */
    GPIO_PE0_T32A06OUTB = GPIO_FR_3,  /*!< PCFR3: T32A06OUTB     */
    GPIO_PE0_EA23       = GPIO_FR_4,  /*!< PCFR4: EA23           */
    GPIO_PE0_T32A06INA1 = GPIO_FR_5,  /*!< PCFR5: T32A06INA1     */
    GPIO_PE0_UT0RTS_N   = GPIO_FR_7,  /*!< PCFR7: UT0RTS_N       */
    GPIO_PE0_EA15       = GPIO_FR_8,  /*!< PCFR8: EA15           */
} gpio_pe0_func_t;

/**
 *  @enum gpio_pe1_func_t
 *  @brief    PortE1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PE1_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE1_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE1_ED09       = GPIO_FR_1,  /*!< PCFR1: ED09           */
    GPIO_PE1_T32A06OUTA = GPIO_FR_3,  /*!< PCFR3: T32A06OUTA     */
    GPIO_PE1_EA22       = GPIO_FR_4,  /*!< PCFR4: EA22           */
    GPIO_PE1_T32A06OUTC = GPIO_FR_5,  /*!< PCFR5: T32A06OUTC     */
    GPIO_PE1_UT0CTS_N   = GPIO_FR_7,  /*!< PCFR7: UT0CTS_N       */
    GPIO_PE1_EA14       = GPIO_FR_8,  /*!< PCFR8: EA14           */
} gpio_pe1_func_t;

/**
 *  @enum gpio_pe2_func_t
 *  @brief    PortE2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PE2_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE2_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE2_ED10       = GPIO_FR_1,  /*!< PCFR1: ED10           */
    GPIO_PE2_T32A06INA0 = GPIO_FR_3,  /*!< PCFR3: T32A06INA0     */
    GPIO_PE2_EA21       = GPIO_FR_4,  /*!< PCFR4: EA21           */
    GPIO_PE2_T32A06INC0 = GPIO_FR_5,  /*!< PCFR5: T32A06INC0     */
    GPIO_PE2_UT0RXD     = GPIO_FR_7,  /*!< PCFR7: UT0RXD         */
    GPIO_PE2_EA13       = GPIO_FR_8,  /*!< PCFR8: EA13           */
} gpio_pe2_func_t;

/**
*  @enum gpio_pe3_func_t
*  @brief    PortE3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PE3_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE3_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE3_ED11       = GPIO_FR_1,  /*!< PCFR1: ED11           */
    GPIO_PE3_T32A06INB0 = GPIO_FR_3,  /*!< PCFR3: T32A06INB0     */
    GPIO_PE3_EA20       = GPIO_FR_4,  /*!< PCFR4: EA20           */
    GPIO_PE3_T32A06INC1 = GPIO_FR_5,  /*!< PCFR5: T32A06INC1     */
    GPIO_PE3_UT0TXDA    = GPIO_FR_7,  /*!< PCFR7: UT0TXDA        */
    GPIO_PE3_EA12       = GPIO_FR_8,  /*!< PCFR8: EA12           */
} gpio_pe3_func_t;

/**
*  @enum gpio_pe4_func_t
*  @brief    PortE4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PE4_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE4_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE4_ED12       = GPIO_FR_1,  /*!< PCFR1: ED12           */
    GPIO_PE4_T32A07INA0 = GPIO_FR_3,  /*!< PCFR3: T32A07INA0     */
    GPIO_PE4_EA19       = GPIO_FR_4,  /*!< PCFR4: EA19           */
    GPIO_PE4_T32A07INC0 = GPIO_FR_5,  /*!< PCFR5: T32A07INC0     */
    GPIO_PE4_I2S1DO     = GPIO_FR_6,  /*!< PCFR6: I2S1DO         */
    GPIO_PE4_ISDAIN0    = 0,          /*!<     0: ISDAIN0        */
    GPIO_PE4_EA11       = GPIO_FR_8,  /*!< PCFR8: EA11           */
} gpio_pe4_func_t;

/**
 *  @enum gpio_pe5_func_t
 *  @brief    PortE5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PE5_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE5_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE5_ED13       = GPIO_FR_1,  /*!< PCFR1: ED13           */
    GPIO_PE5_T32A07INB0 = GPIO_FR_3,  /*!< PCFR3: T32A07INB0     */
    GPIO_PE5_EA18       = GPIO_FR_4,  /*!< PCFR4: EA18           */
    GPIO_PE5_T32A07INC1 = GPIO_FR_5,  /*!< PCFR5: T32A07INC1     */
    GPIO_PE5_I2S1DI     = GPIO_FR_6,  /*!< PCFR6: I2S1DI         */
    GPIO_PE5_ISDAIN1    = 0,          /*!<     0: ISDAIN1        */
    GPIO_PE5_EA10       = GPIO_FR_8,  /*!< PCFR8: EA10           */
} gpio_pe5_func_t;

/**
 *  @enum gpio_pe6_func_t
 *  @brief    PortE6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PE6_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE6_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE6_ED14       = GPIO_FR_1,  /*!< PCFR1: ED14           */
    GPIO_PE6_T32A07OUTA = GPIO_FR_3,  /*!< PCFR3: T32A07OUTA     */
    GPIO_PE6_EA17       = GPIO_FR_4,  /*!< PCFR4: EA17           */
    GPIO_PE6_T32A07OUTC = GPIO_FR_5,  /*!< PCFR5: T32A07OUTC     */
    GPIO_PE6_I2S1BCK    = GPIO_FR_6,  /*!< PCFR6: I2S1BCK        */
    GPIO_PE6_ISDAIN2    = 0,          /*!<     0: ISDAIN2        */
    GPIO_PE6_EA09       = GPIO_FR_8,  /*!< PCFR8: EA09           */
} gpio_pe6_func_t;

/**
 *  @enum gpio_pe7_func_t
 *  @brief    PortE7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PE7_INPUT      = 0,          /*!<     0: Input Port     */
    GPIO_PE7_OUTPUT     = 0,          /*!<     0: Output Port    */
    GPIO_PE7_ED15       = GPIO_FR_1,  /*!< PCFR1: ED15           */
    GPIO_PE7_T32A07INB1 = GPIO_FR_2,  /*!< PCFR2: T32A07INB1     */
    GPIO_PE7_T32A07OUTB = GPIO_FR_3,  /*!< PCFR3: T32A07OUTB     */
    GPIO_PE7_EA16       = GPIO_FR_4,  /*!< PCFR4: EA16           */
    GPIO_PE7_T32A07INA1 = GPIO_FR_5,  /*!< PCFR5: T32A07INA1     */
    GPIO_PE7_I2S1LRCK   = GPIO_FR_6,  /*!< PCFR6: I2S1LRCK       */
    GPIO_PE7_ISDAIN3    = 0,          /*!<     0: ISDAIN3        */
    GPIO_PE7_EA08       = GPIO_FR_8,  /*!< PCFR8: EA08           */
} gpio_pe7_func_t;

/**
 *  @enum gpio_pf0_func_t
 *  @brief    PortF0 Function Enumerated TyPF Definition.
 */
typedef enum {
    GPIO_PF0_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF0_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF0_INT04b  = 0,          /*!<     0: INT04b       */
    GPIO_PF0_ERD_N   = GPIO_FR_1,  /*!< PCFR1: ERD_N        */
} gpio_pf0_func_t;

/**
 *  @enum gpio_pf1_func_t
 *  @brief    PortF1 Function Enumerated TyPF Definition.
 */
typedef enum {
    GPIO_PF1_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF1_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF1_EWR_N   = GPIO_FR_1,  /*!< PCFR1: EWR_N        */
} gpio_pf1_func_t;

/**
 *  @enum gpio_pf2_func_t
 *  @brief    PortF2 Function Enumerated TyPF Definition.
 */
typedef enum {
    GPIO_PF2_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF2_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF2_EI2C1SDA = GPIO_FR_6, /*!< PCFR6: EI2C1SDA     */
    GPIO_PF2_I2C1SDA = GPIO_FR_7,  /*!< PCFR7: I2C1SDA      */
} gpio_pf2_func_t;

/**
*  @enum gpio_pf3_func_t
*  @brief    PortF3 Function Enumerated TyPF Definition.
*/
typedef enum {
    GPIO_PF3_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF3_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF3_EI2C1SCL = GPIO_FR_6, /*!< PCFR6: EI2C1SCL     */
    GPIO_PF3_I2C1SCL = GPIO_FR_7,  /*!< PCFR7: I2C1SCL      */
} gpio_pf3_func_t;

/**
*  @enum gpio_pf4_func_t
*  @brief    PortF4 Function Enumerated TyPF Definition.
*/
typedef enum {
    GPIO_PF4_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF4_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF4_ECS2_N  = GPIO_FR_1,  /*!< PCFR1: ECS2_N       */
} gpio_pf4_func_t;

/**
*  @enum gpio_pf5_func_t
*  @brief    PortF5 Function Enumerated TyPF Definition.
*/
typedef enum {
    GPIO_PF5_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF5_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF5_ECS3_N  = GPIO_FR_1,  /*!< PCFR1: ECS3_N       */
} gpio_pf5_func_t;

/**
*  @enum gpio_pf6_func_t
*  @brief    PortF6 Function Enumerated TyPF Definition.
*/
typedef enum {
    GPIO_PF6_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF6_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF6_EBELL_N = GPIO_FR_1,  /*!< PCFR1: EBELL_N      */
} gpio_pf6_func_t;

/**
*  @enum gpio_pf7_func_t
*  @brief    PortF7 Function Enumerated TyPF Definition.
*/
typedef enum {
    GPIO_PF7_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PF7_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PF7_INT05b  = 0,          /*!<     0: INT05b       */
    GPIO_PF7_EBELH_N = GPIO_FR_1,  /*!< PCFR1: EBELH_N      */
    GPIO_PF7_TSPI2CSIN = GPIO_FR_4, /*!< PCFR4: TSPI2CSIN    */
    GPIO_PF7_TSPI2CS0 = GPIO_FR_5, /*!< PCFR5: TSPI2CS0     */
} gpio_pf7_func_t;

/**
 *  @enum gpio_pg0_func_t
 *  @brief    PortG0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG0_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PG0_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PG0_INT08a  = 0,          /*!<     0: INT08a       */
    GPIO_PG0_EALE    = GPIO_FR_1,  /*!< PCFR1: EALE         */
    GPIO_PG0_UT2RXD  = GPIO_FR_3,  /*!< PCFR3: UT2RXD       */
    GPIO_PG0_UT2TXDA = GPIO_FR_5,  /*!< PCFR5: UT2TXDA      */
} gpio_pg0_func_t;

/**
 *  @enum gpio_pg1_func_t
 *  @brief    PortG1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG1_INPUT   = 0,          /*!<     0: Input Port   */
    GPIO_PG1_OUTPUT  = 0,          /*!<     0: Output Port  */
    GPIO_PG1_INT09a  = 0,          /*!<     0: INT09a       */
    GPIO_PG1_EWAIT_N = GPIO_FR_1,  /*!< PCFR1: EWAIT_N      */
    GPIO_PG1_UT2TXDA = GPIO_FR_3,  /*!< PCFR3: UT2TXDA      */
    GPIO_PG1_UT2RXD  = GPIO_FR_5,  /*!< PCFR5: UT2RXD       */
} gpio_pg1_func_t;

/**
 *  @enum gpio_pg2_func_t
 *  @brief    PortG2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG2_INPUT    = 0,          /*!<     0: Input Port   */
    GPIO_PG2_OUTPUT   = 0,          /*!<     0: Output Port  */
    GPIO_PG2_UT2RTS_N = GPIO_FR_3,  /*!< PCFR3: UT2RTS_N     */
    GPIO_PG2_ALARM_N  = GPIO_FR_4,  /*!< PCFR4: ALARM_N      */
    GPIO_PG2_UT2CTS_N = GPIO_FR_5,  /*!< PCFR5: UT2CTS_N     */
    GPIO_PG2_EI2C0SDA = GPIO_FR_6,  /*!< PCFR6: EI2C0SDA     */
    GPIO_PG2_I2C0SDA  = GPIO_FR_7,  /*!< PCFR7: I2C0SDA      */
} gpio_pg2_func_t;

/**
 *  @enum gpio_pg3_func_t
 *  @brief    PortG3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG3_INPUT    = 0,          /*!<     0: Input Port   */
    GPIO_PG3_OUTPUT   = 0,          /*!<     0: Output Port  */
    GPIO_PG3_UT2CTS_N = GPIO_FR_3,  /*!< PCFR3: UT2CTS_N     */
    GPIO_PG3_TRGIN0   = GPIO_FR_4,  /*!< PCFR4: TRGIN0       */
    GPIO_PG3_UT2RTS_N = GPIO_FR_5,  /*!< PCFR5: UT2RTS_N     */
    GPIO_PG3_EI2C0SCL = GPIO_FR_6,  /*!< PCFR6: EI2C0SCL     */
    GPIO_PG3_I2C0SCL  = GPIO_FR_7,  /*!< PCFR7: I2C0SCL      */
} gpio_pg3_func_t;

/**
 *  @enum gpio_pg4_func_t
 *  @brief    PortG4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG4_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PG4_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PG4_T32A02OUTB = GPIO_FR_2,  /*!< PCFR2: T32A02OUTB   */
    GPIO_PG4_FUT0IROUT  = GPIO_FR_4,  /*!< PCF41: FUT0IROUT    */
    GPIO_PG4_FUT0TXD    = GPIO_FR_5,  /*!< PCFR5: FUT0TXD      */
    GPIO_PG4_EI2C2SDA   = GPIO_FR_6,  /*!< PCFR6: EI2C2SDA     */
    GPIO_PG4_I2C2SDA    = GPIO_FR_7,  /*!< PCFR7: I2C2SDA      */
} gpio_pg4_func_t;

/**
 *  @enum gpio_pg5_func_t
 *  @brief    PortG5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG5_INPUT        = 0,          /*!<     0: Input Port   */
    GPIO_PG5_OUTPUT       = 0,          /*!<     0: Output Port  */
    GPIO_PG5_T32A02OUTA   = GPIO_FR_2,  /*!< PCFR2: T32A02OUTB   */
    GPIO_PG5_T32A02OUTC   = GPIO_FR_3,  /*!< PCFR3: T32A02OUTC   */
    GPIO_PG5_FUT0IRIN     = GPIO_FR_4,  /*!< PCFR4: FUT0IRIN     */
    GPIO_PG5_FUT0RXD      = GPIO_FR_5,  /*!< PCFR5: FUT0RXD      */
    GPIO_PG5_EI2C2SCL     = GPIO_FR_6,  /*!< PCFR6: EI2C2SCL     */
    GPIO_PG5_I2C2SCL      = GPIO_FR_7,  /*!< PCFR7: I2C2SCL      */
} gpio_pg5_func_t;

/**
 *  @enum gpio_pg6_func_t
 *  @brief    PortG6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG6_INPUT        = 0,          /*!<     0: Input Port   */
    GPIO_PG6_OUTPUT       = 0,          /*!<     0: Output Port  */
    GPIO_PG6_TRACECLK     = GPIO_FR_1,  /*!< PCFR1: TRACECLK     */
    GPIO_PG6_NBDCLK       = GPIO_FR_4,  /*!< PCFR4: NBDCLK       */
    GPIO_PG6_FUT0RTS_N    = GPIO_FR_5,  /*!< PCFR5: FUT0RTS_N    */
    GPIO_PG6_I2S1MCKIO    = GPIO_FR_6,  /*!< PCFR6: I2S1MCKIO    */
} gpio_pg6_func_t;

/**
 *  @enum gpio_pg7_func_t
 *  @brief    PortG7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PG7_INPUT        = 0,          /*!<     0: Input Port   */
    GPIO_PG7_OUTPUT       = 0,          /*!<     0: Output Port  */
    GPIO_PG7_TRACEDATA0   = GPIO_FR_1,  /*!< PCFR1: TRACEDATA0   */
    GPIO_PG7_NBDDATA0     = GPIO_FR_4,  /*!< PCFR4: NBDDATA0     */
    GPIO_PG7_FUT0CTS_N    = GPIO_FR_5,  /*!< PCFR5: FUT0CTS_N    */
} gpio_pg7_func_t;

/**
 *  @enum gpio_ph0_func_t
 *  @brief    PortH0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PH0_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH0_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH0_TRACEDATA1 = GPIO_FR_1,  /*!< PCFR1: TRACEDATA1   */
    GPIO_PH0_UT1RXD     = GPIO_FR_3,  /*!< PCFR3: UT1RXD       */
    GPIO_PH0_NBDDATA1   = GPIO_FR_4,  /*!< PCFR4: NBDDATA1     */
    GPIO_PH0_UT1TXDA    = GPIO_FR_5,  /*!< PCFR5: UT1TXDA      */
} gpio_ph0_func_t;

/**
 *  @enum gpio_ph1_func_t
 *  @brief    PortH1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PH1_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH1_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH1_TRACEDATA2 = GPIO_FR_1,  /*!< PCFR1: TRACEDATA2   */
    GPIO_PH1_UT1TXDA    = GPIO_FR_3,  /*!< PCFR3: UT1TXDA      */
    GPIO_PH1_NBDDATA2   = GPIO_FR_4,  /*!< PCFR4: NBDDATA2     */
    GPIO_PH1_UT1RXD     = GPIO_FR_5,  /*!< PCFR5: UT1RXD       */
} gpio_ph1_func_t;

/**
 *  @enum gpio_ph2_func_t
 *  @brief    PortH2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PH2_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH2_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH2_TRACEDATA3 = GPIO_FR_1,  /*!< PCFR1: TRACEDATA3   */
    GPIO_PH2_UT1RTS_N   = GPIO_FR_3,  /*!< PCFR3: UT1RTS_N     */
    GPIO_PH2_NBDDATA3   = GPIO_FR_4,  /*!< PCFR4: NBDDATA3     */
    GPIO_PH2_UT1CTS_N   = GPIO_FR_5,  /*!< PCFR5: UT1CTS_N     */
} gpio_ph2_func_t;

/**
*  @enum gpio_ph3_func_t
*  @brief    PortH3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PH3_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH3_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH3_TDI        = GPIO_FR_1,  /*!< PCFR1: TDI          */
    GPIO_PH3_UT1CTS_N   = GPIO_FR_3,  /*!< PCFR3: UT1CTS_N     */
    GPIO_PH3_NBDSYNC    = GPIO_FR_4,  /*!< PCFR4: NBDSYNC      */
    GPIO_PH3_UT1RTS_N   = GPIO_FR_5,  /*!< PCFR5: UT1RTS_N     */
} gpio_ph3_func_t;

/**
*  @enum gpio_ph4_func_t
*  @brief    PortH4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PH4_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH4_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH4_SWDIO      = GPIO_FR_1,  /*!< PCFR1: SWDIO        */
    GPIO_PH4_UT0RXD     = GPIO_FR_3,  /*!< PCFR3: UT0RXD       */
    GPIO_PH4_UT0TXDA    = GPIO_FR_5,  /*!< PCFR5: UT0TXDA      */
} gpio_ph4_func_t;

/**
*  @enum gpio_ph5_func_t
*  @brief    PortH5 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PH5_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH5_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH5_TCK        = GPIO_FR_1,  /*!< PCFR1: TCK          */
    GPIO_PH5_UT0TXDA    = GPIO_FR_3,  /*!< PCFR3: UT0TXDA      */
    GPIO_PH5_UT0RXD     = GPIO_FR_5,  /*!< PCFR5: UT0RXD       */
} gpio_ph5_func_t;

/**
*  @enum gpio_ph6_func_t
*  @brief    PortH6 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PH6_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH6_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH6_TDO        = GPIO_FR_1,  /*!< PCFR1: TDO          */
    GPIO_PH6_UT0RTS_N   = GPIO_FR_3,  /*!< PCFR3: UT0RTS_N     */
    GPIO_PH6_UT0CTS_N   = GPIO_FR_5,  /*!< PCFR5: UT0CTS_N     */
} gpio_ph6_func_t;

/**
*  @enum gpio_ph7_func_t
*  @brief    PortH7 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PH7_INPUT      = 0,          /*!<     0: Input Port   */
    GPIO_PH7_OUTPUT     = 0,          /*!<     0: Output Port  */
    GPIO_PH7_TRST_N     = GPIO_FR_1,  /*!< PCFR1: TRST_N       */
    GPIO_PH7_UT0CTS_N   = GPIO_FR_3,  /*!< PCFR3: UT0CTS_N     */
    GPIO_PH7_UT0RTS_N   = GPIO_FR_5,  /*!< PCFR5: UT0RTS_N     */
} gpio_ph7_func_t;

/**
 *  @enum gpio_pj0_func_t
 *  @brief    PortJ0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PJ0_INPUT       = 0,         /*!<     0: Input Port     */
    GPIO_PJ0_OUTPUT      = 0,         /*!<     0: Output Port    */
    GPIO_PJ0_UT5RXD      = GPIO_FR_3, /*!< PJFR3: UT5RXD         */
    GPIO_PJ0_UT5TXDA     = GPIO_FR_5, /*!< PJFR5: UT5TXDA        */
} gpio_pj0_func_t;

/**
 *  @enum gpio_pj1_func_t
 *  @brief    PortJ1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PJ1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PJ1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PJ1_UT5TXDA    = GPIO_FR_3, /*!< PJFR3: UT5TXDA        */
    GPIO_PJ1_UT5RXD     = GPIO_FR_5, /*!< PJFR5: UT5RXD         */
} gpio_pj1_func_t;

/**
 *  @enum gpio_pj2_func_t
 *  @brief    PortJ2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PJ2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PJ2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PJ2_UT5RTS_N   = GPIO_FR_3, /*!< PJFR3: UT5RTS_N       */
    GPIO_PJ2_UT5CTS_N   = GPIO_FR_5, /*!< PJFR5: UT5CTS_N       */
    GPIO_PJ2_EI2C4SCL   = GPIO_FR_6, /*!< PJFR6: EI2C4SCL       */
    GPIO_PJ2_I2C4SCL    = GPIO_FR_7, /*!< PJFR7: I2C4SCL        */
} gpio_pj2_func_t;

/**
*  @enum gpio_pj3_func_t
*  @brief    PortJ3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PJ3_INPUT       = 0,         /*!<     0: Input Port     */
    GPIO_PJ3_OUTPUT      = 0,         /*!<     0: Output Port    */
    GPIO_PJ3_UT5CTS_N    = GPIO_FR_3, /*!< PJFR3: UT5CTS_N       */
    GPIO_PJ3_UT5RTS_N    = GPIO_FR_5, /*!< PJFR5: UT5RTS_N       */
    GPIO_PJ3_EI2C4SDA    = GPIO_FR_6, /*!< PJFR6: EI2C4SDA       */
    GPIO_PJ3_I2C4SDA     = GPIO_FR_7, /*!< PJFR7: I2C4SDA        */
} gpio_pj3_func_t;

/**
*  @enum gpio_pj4_func_t
*  @brief    PortJ4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PJ4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PJ4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PJ4_T32A03INA0 = GPIO_FR_2, /*!< PJFR2: T32A03INA0     */
    GPIO_PJ4_T32A03INC0 = GPIO_FR_3, /*!< PJFR3: T32A03INC0     */
    GPIO_PJ4_FUT0TXD    = GPIO_FR_5, /*!< PJFR5: FUT0TXD        */
} gpio_pj4_func_t;

/**
 *  @enum gpio_pj5_func_t
 *  @brief    PortJ5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PJ5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PJ5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PJ5_T32A03INB0 = GPIO_FR_2, /*!< PJFR2: T32A03INB0     */
    GPIO_PJ5_T32A03INC1 = GPIO_FR_3, /*!< PJFR3: T32A03INC1     */
    GPIO_PJ5_FUT0RXD    = GPIO_FR_5, /*!< PJFR5: FUT0RXD        */
} gpio_pj5_func_t;

/**
 *  @enum gpio_pj6_func_t
 *  @brief    PortJ6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PJ6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PJ6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PJ6_FUT1TXD    = GPIO_FR_5, /*!< PJFR5: FUT1TXD        */
    GPIO_PJ6_EI2C3SDA   = GPIO_FR_6, /*!< PJFR6: EI2C3SDA       */
    GPIO_PJ6_I2C3SDA    = GPIO_FR_7, /*!< PJFR7: I2C3SDA        */
} gpio_pj6_func_t;

/**
 *  @enum gpio_pj7_func_t
 *  @brief    PortJ7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PJ7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PJ7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PJ7_FUT1RXD    = GPIO_FR_5, /*!< PJFR5: FUT1RXD        */
    GPIO_PJ7_EI2C3SCL   = GPIO_FR_6, /*!< PJFR6: EI2C3SCL       */
    GPIO_PJ7_I2C3SCL    = GPIO_FR_7, /*!< PJFR7: I2C3SCL        */
} gpio_pj7_func_t;

/**
 *  @enum gpio_pk0_func_t
 *  @brief    PortK0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PK0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PK0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PK0_INT10a     = 0,         /*!<     0: INT10a         */
    GPIO_PK0_ISDAOUT    = GPIO_FR_1, /*!< PKFR1: ISDAOUT        */
    GPIO_PK0_T32A00INA0 = GPIO_FR_2, /*!< PKFR2: T32A00INA0     */
    GPIO_PK0_T32A00INC0 = GPIO_FR_3, /*!< PKFR3: T32A00INC0     */
    GPIO_PK0_SMI0CS1_N  = GPIO_FR_6, /*!< PKFR6: ISDAOUT        */
} gpio_pk0_func_t;

/**
 *  @enum gpio_pk1_func_t
 *  @brief    PortK1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PK1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PK1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PK1_INT11a     = 0,         /*!<     0: INT11a         */
    GPIO_PK1_ISDBOUT    = GPIO_FR_1, /*!< PKFR1: ISDBOUT        */
    GPIO_PK1_T32A00INB0 = GPIO_FR_2, /*!< PKFR2: T32A00INB0     */
    GPIO_PK1_T32A00INC1 = GPIO_FR_3, /*!< PKFR3: T32A00INC1     */
    GPIO_PK1_HDMAREQB   = GPIO_FR_4, /*!< PKFR4: HDMAREQB       */
    GPIO_PK1_TSPI3CS0   = GPIO_FR_5, /*!< PKFR5: TSPI3CS0       */
    GPIO_PK1_TSPI3CSIN  = GPIO_FR_6, /*!< PKFR6: TSPI3CSIN      */
} gpio_pk1_func_t;

/**
 *  @enum gpio_pk2_func_t
 *  @brief    PortK2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PK2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PK2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PK2_ECS0_N     = GPIO_FR_1, /*!< PKFR1: ECS0_N         */
    GPIO_PK2_SMI0D0     = GPIO_FR_6, /*!< PKFR6: SMI0D0         */
} gpio_pk2_func_t;

/**
*  @enum gpio_pk3_func_t
*  @brief    PortK3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PK3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PK3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PK3_ECS1_N     = GPIO_FR_1, /*!< PKFR1: ECS1_N         */
    GPIO_PK3_SMI0D1     = GPIO_FR_6, /*!< PKFR6: SMI0D1         */
} gpio_pk3_func_t;

/**
*  @enum gpio_pk4_func_t
*  @brief    PortK4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PK4_INPUT       = 0,         /*!<     0: Input Port     */
    GPIO_PK4_OUTPUT      = 0,         /*!<     0: Output Port    */
    GPIO_PK4_TSPI1CS1    = GPIO_FR_1, /*!< PKFR1: TSPI1CS1       */
    GPIO_PK4_TSPI3TXD    = GPIO_FR_4, /*!< PKFR4: TSPI3TXD       */
    GPIO_PK4_SMI0D2      = GPIO_FR_6, /*!< PKFR6: SMI0D2         */
} gpio_pk4_func_t;

/**
 *  @enum gpio_pk5_func_t
 *  @brief    PortK5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PK5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PK5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PK5_TSPI1CS2   = GPIO_FR_1, /*!< PKFR1: TSPI1CS2       */
    GPIO_PK5_TSPI3RXD   = GPIO_FR_4, /*!< PKFR4: TSPI3RXD       */
    GPIO_PK5_SMI0D3     = GPIO_FR_6, /*!< PKFR6: SMI0D3         */
} gpio_pk5_func_t;

/**
 *  @enum gpio_pk6_func_t
 *  @brief    PortK6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PK6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PK6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PK6_TSPI1CS3   = GPIO_FR_1, /*!< PKFR1: TSPI1CS3       */
    GPIO_PK6_T32A01INA0 = GPIO_FR_2, /*!< PKFR2: T32A01INA0     */
    GPIO_PK6_T32A01INC0 = GPIO_FR_3, /*!< PKFR3: T32A01INC0     */
    GPIO_PK6_TSPI3SCK   = GPIO_FR_4, /*!< PKFR4: TSPI3SCK       */
    GPIO_PK6_SMI0CLK    = GPIO_FR_6, /*!< PKFR6: SMI0CLK        */
} gpio_pk6_func_t;

/**
 *  @enum gpio_pk7_func_t
 *  @brief    PortK7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PK7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PK7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PK7_INT00a     = 0,         /*!<     0: INT00a         */
    GPIO_PK7_T32A01INB0 = GPIO_FR_2, /*!< PKFR2: T32A01INB0     */
    GPIO_PK7_T32A01INC1 = GPIO_FR_3, /*!< PKFR3: T32A01INC1     */
    GPIO_PK7_TSPI3CS0   = GPIO_FR_4, /*!< PKFR4: TSPI3CS0       */
    GPIO_PK7_SMI0CS0_N  = GPIO_FR_6, /*!< PKFR6: SMI0CS0_N      */
    GPIO_PK7_TSPI3CSIN  = GPIO_FR_7, /*!< PKFR7: TSPI3CSIN      */
} gpio_pk7_func_t;

/**
 *  @enum gpio_pl0_func_t
 *  @brief    PortL0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PL0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PL0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PL0_INT01a     = 0,         /*!<     0: INT01a         */
    GPIO_PL0_T32A02INA0 = GPIO_FR_2, /*!< PLFR2: T32A02INA0     */
    GPIO_PL0_T32A02INC0 = GPIO_FR_3, /*!< PLFR3: T32A02INC0     */
    GPIO_PL0_SMI0D4     = GPIO_FR_5, /*!< PLFR5: SMI0D4         */
    GPIO_PL0_TSPI1CSIN  = GPIO_FR_6, /*!< PLFR6: TSPI1CSIN      */
    GPIO_PL0_TSPI1CS0   = GPIO_FR_7, /*!< PLFR7: TSPI1CS0       */
} gpio_pl0_func_t;

/**
 *  @enum gpio_pl1_func_t
 *  @brief    PortL1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PL1_INPUT     = 0,         /*!<     0: Input Port     */
    GPIO_PL1_OUTPUT    = 0,         /*!<     0: Output Port    */
    GPIO_PL1_SMI0D5    = GPIO_FR_5, /*!< PLFR5: SMI0D5         */
    GPIO_PL1_TSPI1SCK  = GPIO_FR_7, /*!< PLFR7: TSPI1SCK       */
} gpio_pl1_func_t;

/**
 *  @enum gpio_pl2_func_t
 *  @brief    PortL2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PL2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PL2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PL2_SMI0D6     = GPIO_FR_5, /*!< PLFR5: SMI0D6         */
    GPIO_PL2_TSPI1RXD   = GPIO_FR_7, /*!< PLFR7: TSPI1RXD       */
} gpio_pl2_func_t;

/**
*  @enum gpio_pl3_func_t
*  @brief    PortL3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PL3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PL3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PL3_T32A02INB0 = GPIO_FR_2, /*!< PLFR2: T32A02INB0     */
    GPIO_PL3_T32A02INC1 = GPIO_FR_3, /*!< PLFR3: T32A02INC1     */
    GPIO_PL3_SMI0D7     = GPIO_FR_5, /*!< PLFR5: SMI0D7         */
    GPIO_PL3_TSPI3CS1   = GPIO_FR_6, /*!< PLFR6: TSPI3CS1       */
    GPIO_PL3_TSPI1TXD   = GPIO_FR_7, /*!< PLFR7: TSPI1TXD       */
} gpio_pl3_func_t;

/**
*  @enum gpio_pl4_func_t
*  @brief    PortL4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PL4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PL4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PL4_INT12b     = 0,         /*!<     0: IN112b         */
    GPIO_PL4_T32A08OUTA = GPIO_FR_2, /*!< PLFR2: T32A08OUTA     */
    GPIO_PL4_T32A08OUTC = GPIO_FR_3, /*!< PLFR3: T32A08OUTC     */
} gpio_pl4_func_t;

/**
 *  @enum gpio_pl5_func_t
 *  @brief    PortL5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PL5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PL5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PL5_INT13b     = 0,         /*!<     0: INT13b         */
    GPIO_PL5_T32A08OUTB = GPIO_FR_2, /*!< PLFR2: T32A08OUTB     */
} gpio_pl5_func_t;

/**
 *  @enum gpio_pl6_func_t
 *  @brief    PortL6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PL6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PL6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PL6_INT03b     = 0,         /*!<     0: INT03b         */
    GPIO_PL6_T32A09OUTA = GPIO_FR_2, /*!< PLFR2: T32A09OUTA     */
    GPIO_PL6_T32A09OUTC = GPIO_FR_3, /*!< PLFR3: T32A09OUTC     */
} gpio_pl6_func_t;

/**
 *  @enum gpio_pl7_func_t
 *  @brief    PortL7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PL7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PL7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PL7_TRGIN1     = GPIO_FR_1, /*!< PLFR1: TRGIN1         */
    GPIO_PL7_T32A09OUTB = GPIO_FR_2, /*!< PLFR2: T32A09OUTB     */
} gpio_pl7_func_t;

/**
 *  @enum gpio_pm0_func_t
 *  @brief    PortM0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PM0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM0_EI2C3SDA   = GPIO_FR_1, /*!< PMFR1: EI2C3SDA       */
    GPIO_PM0_I2C3SDA    = GPIO_FR_4, /*!< PMFR4: I2C3SDA        */
    GPIO_PM0_UT4RXD     = GPIO_FR_5, /*!< PMFR5: UT4RXD         */
    GPIO_PM0_TSPI6TXD   = GPIO_FR_6, /*!< PMFR6: TSPI6TXD       */
    GPIO_PM0_UT4TXDA    = GPIO_FR_7, /*!< PMFR7: UT4TXDA        */
} gpio_pm0_func_t;

/**
 *  @enum gpio_pm1_func_t
 *  @brief    PortM1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PM1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM1_EI2C3SCL   = GPIO_FR_1, /*!< PMFR1: EI2C3SCL       */
    GPIO_PM1_I2C3SCL    = GPIO_FR_4, /*!< PMFR4: I2C3SCL        */
    GPIO_PM1_UT4TXDA    = GPIO_FR_5, /*!< PMFR5: UT4TXDA        */
    GPIO_PM1_TSPI6RXD   = GPIO_FR_6, /*!< PMFR6: TSPI6RXD       */
    GPIO_PM1_UT4RXD     = GPIO_FR_7, /*!< PMFR7: UT4RXD         */
} gpio_pm1_func_t;

/**
 *  @enum gpio_pm2_func_t
 *  @brief    PortM2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PM2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM2_T32A11OUTA = GPIO_FR_2, /*!< PMFR2: T32A11OUTA     */
    GPIO_PM2_T32A11OUTC = GPIO_FR_3, /*!< PMFR3: T32A11OUTC     */
    GPIO_PM2_UT4RTS_N   = GPIO_FR_5, /*!< PMFR5: UT4RTS_N       */
    GPIO_PM2_TSPI6SCK   = GPIO_FR_6, /*!< PMFR6: TSPI6SCK       */
    GPIO_PM2_UT4CTS_N   = GPIO_FR_7, /*!< PMFR7: UT4CTS_N       */
} gpio_pm2_func_t;

/**
*  @enum gpio_pm3_func_t
*  @brief    PortM3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PM3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM3_INT14b     = 0,         /*!<     0: INT14b         */
    GPIO_PM3_T32A11OUTB = GPIO_FR_2, /*!< PMFR2: T32A11OUTB     */
    GPIO_PM3_TSPI6CSIN  = GPIO_FR_4, /*!< PMFR4: TSPI6CSIN      */
    GPIO_PM3_UT4CTS_N   = GPIO_FR_5, /*!< PMFR5: UT4CTS_N       */
    GPIO_PM3_TSPI6CS0   = GPIO_FR_6, /*!< PMFR6: TSPI6CS0       */
    GPIO_PM3_UT4RTS_N   = GPIO_FR_7, /*!< PMFR7: UT4RTS_N       */
} gpio_pm3_func_t;

/**
*  @enum gpio_pm4_func_t
*  @brief    PortM4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PM4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM4_INT15b     = 0,         /*!<     0: INT15b         */
    GPIO_PM4_T32A06OUTB = GPIO_FR_2, /*!< PMFR2: T32A06OUTB     */
    GPIO_PM4_TSPI7CSIN  = GPIO_FR_4, /*!< PMFR4: TSPI7CSIN      */
    GPIO_PM4_TSPI7CS0   = GPIO_FR_6, /*!< PMFR6: TSPI7CS0       */
    GPIO_PM4_FUT1CTS_N  = GPIO_FR_7, /*!< PMFR7: FUT1CTS_N      */
} gpio_pm4_func_t;

/**
 *  @enum gpio_pm5_func_t
 *  @brief    PortM5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PM5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM5_T32A06OUTA = GPIO_FR_2, /*!< PMFR2: T32A06OUTA     */
    GPIO_PM5_T32A06OUTC = GPIO_FR_3, /*!< PMFR3: T32A06OUTC     */
    GPIO_PM5_TSPI7SCK   = GPIO_FR_6, /*!< PMFR6: TSPI7SCK       */
    GPIO_PM5_FUT1RTS_N  = GPIO_FR_7, /*!< PMFR7: FUT1RTS_N      */
} gpio_pm5_func_t;

/**
 *  @enum gpio_pm6_func_t
 *  @brief    PortM6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PM6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM6_EI2C4SDA   = GPIO_FR_1, /*!< PMFR1: EI2C4SDA        */
    GPIO_PM6_T32A07OUTA = GPIO_FR_2, /*!< PMFR2: T32A07OUTA     */
    GPIO_PM6_T32A07OUTC = GPIO_FR_3, /*!< PMFR3: T32A07OUTC     */
    GPIO_PM6_I2C4SDA    = GPIO_FR_4, /*!< PMFR4: I2C4SDA        */
    GPIO_PM6_FUT1IRIN   = GPIO_FR_5, /*!< PMFR5: FUT1IRIN       */
    GPIO_PM6_TSPI7RXD   = GPIO_FR_6, /*!< PMFR6: TSPI7RXD       */
    GPIO_PM6_FUT1RXD    = GPIO_FR_7, /*!< PMFR7: FUT1RXD        */
} gpio_pm6_func_t;

/**
 *  @enum gpio_pm7_func_t
 *  @brief    PortM7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PM7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PM7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PM7_EI2C4SCL   = GPIO_FR_1, /*!< PMFR1: EI2C4SCL       */
    GPIO_PM7_T32A07OUTB = GPIO_FR_2, /*!< PMFR2: T32A07OUTB     */
    GPIO_PM7_I2C4SCL    = GPIO_FR_4, /*!< PMFR4: I2C4SCL        */
    GPIO_PM7_FUT1IROUT  = GPIO_FR_5, /*!< PMFR5: FUT1IROUT      */
    GPIO_PM7_TSPI7TXD   = GPIO_FR_6, /*!< PMFR6: TSPI7TXD       */
    GPIO_PM7_FUT1TXD    = GPIO_FR_7, /*!< PMFR7: FUT1TXD        */
} gpio_pm7_func_t;

/**
 *  @enum gpio_pn0_func_t
 *  @brief    PortN0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PN0_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN0_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN0_AINA00     = GPIO_FR_NA, /*!< N/A: AINA00         */
} gpio_pn0_func_t;

/**
 *  @enum gpio_pn1_func_t
 *  @brief    PortN1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PN1_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN1_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN1_AINA01     = GPIO_FR_NA, /*!< N/A: AINA01         */
} gpio_pn1_func_t;

/**
 *  @enum gpio_pn2_func_t
 *  @brief    PortN2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PN2_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN2_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN2_AINA02     = GPIO_FR_NA, /*!< N/A: AINA02         */
} gpio_pn2_func_t;

/**
 *  @enum gpio_pn3_func_t
 *  @brief    PortN3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PN3_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN3_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN3_AINA03     = GPIO_FR_NA, /*!< N/A: AINA03         */
} gpio_pn3_func_t;

/**
*  @enum gpio_pn4_func_t
*  @brief    PortN4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PN4_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN4_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN4_AINA04     = GPIO_FR_NA, /*!< N/A: AINA04         */
} gpio_pn4_func_t;

/**
 *  @enum gpio_pn5_func_t
 *  @brief    PortN5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PN5_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN5_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN5_AINA05     = GPIO_FR_NA, /*!< N/A: AINA05         */
} gpio_pn5_func_t;

/**
 *  @enum gpio_pn6_func_t
 *  @brief    PortN6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PN6_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN6_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN6_AINA06     = GPIO_FR_NA, /*!< N/A: AINA06         */
} gpio_pn6_func_t;

/**
 *  @enum gpio_pn7_func_t
 *  @brief    PortN7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PN7_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PN7_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PN7_AINA07     = GPIO_FR_NA, /*!< N/A: AINA07         */
} gpio_pn7_func_t;

/**
 *  @enum gpio_pp0_func_t
 *  @brief    PortP0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PP0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP0_AINA08     = 0,         /*!<     0: AINA08         */
    GPIO_PP0_T32A04INA0 = GPIO_FR_2, /*!< PPFR2: T32A04INA0     */
    GPIO_PP0_T32A04INC0 = GPIO_FR_3, /*!< PPFR3: T32A04INC0     */
    GPIO_PP0_T32A04INB1 = GPIO_FR_5, /*!< PPFR5: T32A04INB1     */
} gpio_pp0_func_t;

/**
 *  @enum gpio_pp1_func_t
 *  @brief    PortP1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PP1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP1_AINA09     = 0,         /*!<     0: AINA09         */
    GPIO_PP1_T32A04INB0 = GPIO_FR_2, /*!< PPFR2: T32A04INB0     */
    GPIO_PP1_T32A04INC1 = GPIO_FR_3, /*!< PPFR3: T32A04INC1     */
    GPIO_PP1_T32A04INA1 = GPIO_FR_5, /*!< PPFR5: T32A04INA1     */
} gpio_pp1_func_t;

/**
 *  @enum gpio_pp2_func_t
 *  @brief    PortP2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PP2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP2_AINA10     = 0,         /*!<     0: AINA10         */
    GPIO_PP2_T32A05INA0 = GPIO_FR_2, /*!< PPFR2: T32A05INA0     */
    GPIO_PP2_T32A05INC0 = GPIO_FR_3, /*!< PPFR3: T32A05INC0     */
    GPIO_PP2_T32A05INB1 = GPIO_FR_5, /*!< PPFR5: T32A05INB1     */
} gpio_pp2_func_t;

/**
*  @enum gpio_pp3_func_t
*  @brief    PortP3 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PP3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP3_AINA11     = 0,         /*!<     0: AINA11         */
    GPIO_PP3_T32A05INB0 = GPIO_FR_2, /*!< PPFR2: T32A05INB0     */
    GPIO_PP3_T32A05INC1 = GPIO_FR_3, /*!< PPFR3: T32A05INC1     */
    GPIO_PP3_T32A05INA1 = GPIO_FR_5, /*!< PPFR5: T32A05INA1     */
} gpio_pp3_func_t;

/**
*  @enum gpio_pp4_func_t
*  @brief    PortP4 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PP4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP4_AINA12     = 0,         /*!<     0: AINA12         */
    GPIO_PP4_T32A06INA0 = GPIO_FR_2, /*!< PPFR2: T32A06INA0     */
    GPIO_PP4_T32A06INC0 = GPIO_FR_3, /*!< PPFR3: T32A06INC0     */
    GPIO_PP4_T32A06INB1 = GPIO_FR_5, /*!< PPFR5: T32A06INB1     */
} gpio_pp4_func_t;

/**
*  @enum gpio_pp5_func_t
*  @brief    PortP5 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PP5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP5_AINA13     = 0,         /*!<     0: AINA13         */
    GPIO_PP5_T32A06INB0 = GPIO_FR_2, /*!< PPFR2: T32A06INB0     */
    GPIO_PP5_T32A06INC1 = GPIO_FR_3, /*!< PPFR3: T32A06INC1     */
    GPIO_PP5_T32A06INA1 = GPIO_FR_5, /*!< PPFR5: T32A06INA1     */
} gpio_pp5_func_t;

/**
 *  @enum gpio_pp6_func_t
 *  @brief    PortP6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PP6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP6_AINA14     = 0,         /*!<     0: AINA14         */
    GPIO_PP6_INT10b     = 0,         /*!<     0: INT10b         */
    GPIO_PP6_T32A07INA0 = GPIO_FR_2, /*!< PPFR2: T32A07INA0     */
    GPIO_PP6_T32A07INC0 = GPIO_FR_3, /*!< PPFR3: T32A07INC0     */
    GPIO_PP6_T32A07INB1 = GPIO_FR_5, /*!< PPFR5: T32A07INB1     */
} gpio_pp6_func_t;

/**
*  @enum gpio_pp7_func_t
*  @brief    PortP7 Function Enumerated Type Definition.
*/
typedef enum {
    GPIO_PP7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PP7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PP7_AINA15     = 0,         /*!<     0: AINA15         */
    GPIO_PP7_INT11b     = 0,         /*!<     0: INT11b         */
    GPIO_PP7_T32A07INB0 = GPIO_FR_2, /*!< PPFR2: T32A07INB0     */
    GPIO_PP7_T32A07INC1 = GPIO_FR_3, /*!< PPFR3: T32A07INC1     */
    GPIO_PP7_T32A07INA1 = GPIO_FR_5, /*!< PPFR5: T32A07INA1     */
} gpio_pp7_func_t;

/**
 *  @enum gpio_pr0_func_t
 *  @brief    PortR0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PR0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PR0_AINA16     = 0,         /*!<     0: AINA16         */
    GPIO_PR0_T32A08INA0 = GPIO_FR_2, /*!< PRFR2: T32A08INA0     */
    GPIO_PR0_T32A08INC0 = GPIO_FR_3, /*!< PRFR3: T32A08INC0     */
} gpio_pr0_func_t;

/**
 *  @enum gpio_pr1_func_t
 *  @brief    PortR1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR1_INPUT       = 0,         /*!<     0: Input Port     */
    GPIO_PR1_OUTPUT      = 0,         /*!<     0: Output Port    */
    GPIO_PR1_AINA17      = 0,         /*!<     0: AINA17         */
    GPIO_PR1_T32A08INB0  = GPIO_FR_2, /*!< PRFR2: T32A08INB0     */
    GPIO_PR1_T32A08INC1  = GPIO_FR_3, /*!< PRFR3: T32A08INC1     */
} gpio_pr1_func_t;

/**
 *  @enum gpio_pr2_func_t
 *  @brief    PortR2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PR2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PR2_AINA18     = 0,         /*!<     0: AINA18         */
    GPIO_PR2_T32A09INA0 = GPIO_FR_2, /*!< PRFR2: T32A09INA0     */
    GPIO_PR2_T32A09INC0 = GPIO_FR_3, /*!< PRFR3: T32A09INC0     */
} gpio_pr2_func_t;

/**
 *  @enum gpio_pr3_func_t
 *  @brief    PortR3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PR3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PR3_AINA19     = 0,         /*!<     0: AINA19         */
    GPIO_PR3_T32A09INB0 = GPIO_FR_2, /*!< PRFR2: T32A09INB0     */
    GPIO_PR3_T32A09INC1 = GPIO_FR_3, /*!< PRFR3: T32A09INC1     */
} gpio_pr3_func_t;

/**
 *  @enum gpio_pr4_func_t
 *  @brief    PortR4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PR4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PR4_AINA20     = 0,         /*!<     0: AINA20         */
    GPIO_PR4_T32A10INA0 = GPIO_FR_2, /*!< PRFR2: T32A10INA0     */
    GPIO_PR4_T32A10INC0 = GPIO_FR_3, /*!< PRFR3: T32A10INC0     */
} gpio_pr4_func_t;

/**
 *  @enum gpio_pr5_func_t
 *  @brief    PortR5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PR5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PR5_AINA21     = 0,         /*!<     0: AINA21         */
    GPIO_PR5_T32A10INB0 = GPIO_FR_2, /*!< PRFR2: T32A10INB0     */
    GPIO_PR5_T32A10INC1 = GPIO_FR_3, /*!< PRFR3: T32A10INC1     */
} gpio_pr5_func_t;

/**
 *  @enum gpio_pr6_func_t
 *  @brief    PortR6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PR6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PR6_AINA22     = 0,         /*!<     0: AINA22         */
    GPIO_PR6_T32A11INA0 = GPIO_FR_2, /*!< PRFR2: T32A11INA0     */
    GPIO_PR6_T32A11INC0 = GPIO_FR_3, /*!< PRFR3: T32A11INC0     */
} gpio_pr6_func_t;

/**
 *  @enum gpio_pr7_func_t
 *  @brief    PortR7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PR7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PR7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PR7_AINA23     = 0,         /*!<     0: AINA23         */
    GPIO_PR7_T32A11INB0 = GPIO_FR_2, /*!< PRFR2: T32A11INB0     */
    GPIO_PR7_T32A11INC0 = GPIO_FR_3, /*!< PRFR3: T32A11INC1     */
} gpio_pr7_func_t;


/**
 *  @enum gpio_pt0_func_t
 *  @brief    PortT0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PT0_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PT0_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PT0_DAC0       = GPIO_FR_NA, /*!< N/A: DAC0           */
} gpio_pt0_func_t;

/**
 *  @enum gpio_pt1_func_t
 *  @brief    PortT1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PT1_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PT1_OUTPUT     = GPIO_FR_NA, /*!< N/A: Output Port    */
    GPIO_PT1_DAC1       = GPIO_FR_NA, /*!< N/A: DAC1           */
} gpio_pt1_func_t;

/**
 *  @enum gpio_pt2_func_t
 *  @brief    PortT2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PT2_INPUT      = 0,         /*!<     0: Input Port        */
    GPIO_PT2_OUTPUT     = 0,         /*!<     0: Output Port       */
    GPIO_PT2_CEC0       = GPIO_FR_7, /*!< PTFR1: CEC0 Input/Output */
} gpio_pt2_func_t;

/**
 *  @enum gpio_pt3_func_t
 *  @brief    PortT3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PT3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PT3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PT3_INT00b     = 0,         /*!<     0: INT00b         */
    GPIO_PT3_RTCOUT     = GPIO_FR_1, /*!< PTFR1: RTCOUT         */
    GPIO_PT3_T32A03OUTA = GPIO_FR_2, /*!< PTFR2: T32A03OUTA     */
    GPIO_PT3_T32A03OUTC = GPIO_FR_3, /*!< PTFR3: T32A03OUTC     */
    GPIO_PT3_RXIN0      = 0,         /*!<     0: RXIN0          */
    GPIO_PT3_TRGIN2     = GPIO_FR_6, /*!< PTFR6: TRGIN2         */
} gpio_pt3_func_t;

/**
 *  @enum gpio_pt4_func_t
 *  @brief    PortT4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PT4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PT4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PT4_INT01b     = 0,         /*!<     0: INT01b         */
    GPIO_PT4_RXIN1      = 0,         /*!<     0: RXIN1          */
} gpio_pt4_func_t;

/**
 *  @enum gpio_pt5_func_t
 *  @brief    PortT5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PT5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PT5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PT5_INT02b     = 0,         /*!<     0: INT02b         */
    GPIO_PT5_T32A03OUTB = GPIO_FR_2, /*!< PTFR2: T32A03OUTB     */
} gpio_pt5_func_t;

/**
 *  @enum gpio_pu0_func_t
 *  @brief    PortU0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU0_T32A12OUTA = GPIO_FR_2, /*!< PUFR2: T32A12OUTA     */
    GPIO_PU0_T32A12OUTC = GPIO_FR_3, /*!< PUFR3: T32A12OUTC     */
    GPIO_PU0_UT4TXDA    = GPIO_FR_7, /*!< PUFR7: UT4TXDA        */
} gpio_pu0_func_t;

/**
 *  @enum gpio_pu1_func_t
 *  @brief    PortU1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU1_T32A12OUTB = GPIO_FR_2, /*!< PUFR2: T32A12OUTB     */
    GPIO_PU1_UT4RXD     = GPIO_FR_7, /*!< PUFR7: UT4RXD         */
} gpio_pu1_func_t;

/**
 *  @enum gpio_pu2_func_t
 *  @brief    PortU2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU2_INT06b     = 0,         /*!<     0: INT06b         */
    GPIO_PU2_T32A12INA0 = GPIO_FR_2, /*!< PUFR2: T32A12INA0     */
    GPIO_PU2_T32A12INC0 = GPIO_FR_3, /*!< PUFR3: T32A12INC0     */
    GPIO_PU2_TSSI1TCK   = GPIO_FR_6, /*!< PUFR6: TSSI1TCK       */
    GPIO_PU2_UT4CTS_N   = GPIO_FR_7, /*!< PUFR7: UT4CTS_N       */
} gpio_pu2_func_t;

/**
 *  @enum gpio_pu3_func_t
 *  @brief    PortU3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU3_INT07b     = 0,         /*!<     0: INT07b         */
    GPIO_PU3_T32A12INB0 = GPIO_FR_2, /*!< PUFR2: T32A12INB0     */
    GPIO_PU3_T32A12INC1 = GPIO_FR_3, /*!< PUFR3: T32A12INC1     */
    GPIO_PU3_TSSI1TFS   = GPIO_FR_6, /*!< PUFR6: TSSI1TFS       */
    GPIO_PU3_UT4RTS_N   = GPIO_FR_7, /*!< PUFR7: UT4RTS_N       */
} gpio_pu3_func_t;

/**
 *  @enum gpio_pu4_func_t
 *  @brief    PortU4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU4_INT08b     = 0,         /*!<     0: INT08b         */
    GPIO_PU4_T32A13INB0 = GPIO_FR_2, /*!< PUFR2: T32A13INB0     */
    GPIO_PU4_T32A13INC1 = GPIO_FR_3, /*!< PUFR3: T32A13INC1     */
    GPIO_PU4_TSSI1TXD   = GPIO_FR_6, /*!< PUFR6: TSSI1TXD       */
    GPIO_PU4_UT3RTS_N   = GPIO_FR_7, /*!< PUFR7: UT3RTS_N       */
} gpio_pu4_func_t;

/**
 *  @enum gpio_pu5_func_t
 *  @brief    PortU5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU5_INT09b     = 0,         /*!<     0: INT09b         */
    GPIO_PU5_T32A13INA0 = GPIO_FR_2, /*!< PUFR2: T32A13INA0     */
    GPIO_PU5_T32A13INC0 = GPIO_FR_3, /*!< PUFR3: T32A13INC0     */
    GPIO_PU5_TSSI1RXD   = GPIO_FR_6, /*!< PUFR6: TSSI1RXD       */
    GPIO_PU5_UT3CTS_N   = GPIO_FR_7, /*!< PUFR7: UT3CTS_N       */
} gpio_pu5_func_t;

/**
 *  @enum gpio_pu6_func_t
 *  @brief    PortU6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU6_T32A13OUTA = GPIO_FR_2, /*!< PUFR2: T32A13OUTA     */
    GPIO_PU6_T32A13OUTC = GPIO_FR_3, /*!< PUFR3: T32A13OUTC     */
    GPIO_PU6_TSSI1RFS   = GPIO_FR_6, /*!< PUFR6: TSSI1RFS       */
    GPIO_PU6_UT3RXD     = GPIO_FR_7, /*!< PUFR7: UT3RXD         */
} gpio_pu6_func_t;

/**
 *  @enum gpio_pu7_func_t
 *  @brief    PortU7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PU7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PU7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PU7_T32A13OUTB = GPIO_FR_2, /*!< PUFR2: T32A13OUTB     */
    GPIO_PU7_TSSI1RCK   = GPIO_FR_6, /*!< PUFR6: TSSI1RCK       */
    GPIO_PU7_UT3TXDA    = GPIO_FR_7, /*!< PUFR7: UT3TXDA        */
} gpio_pu7_func_t;

/**
 *  @enum gpio_pv0_func_t
 *  @brief    PortV0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV0_T32A09INA0 = GPIO_FR_2, /*!< PVFR2: T32A09INA0     */
    GPIO_PV0_T32A09INC0 = GPIO_FR_3, /*!< PVFR3: T32A09INC0     */
    GPIO_PV0_ISDBIN0    = 0,         /*!<     0: ISDBIN0        */
    GPIO_PV0_UO0        = GPIO_FR_5, /*!< PVFR5: UO0            */
    GPIO_PV0_UT3RXD     = GPIO_FR_6, /*!< PVFR6: UT3RXD         */
    GPIO_PV0_UT3TXDA    = GPIO_FR_7, /*!< PVFR7: UT3TXDA        */
} gpio_pv0_func_t;

/**
 *  @enum gpio_pv1_func_t
 *  @brief    PortV1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV1_T32A09INB0 = GPIO_FR_2, /*!< PVFR2: T32A09INB0     */
    GPIO_PV1_T32A09INC1 = GPIO_FR_3, /*!< PVFR3: T32A09INC1     */
    GPIO_PV1_ISDBIN1    = 0,         /*!<     0: ISDBIN1        */
    GPIO_PV1_XO0        = GPIO_FR_5, /*!< PVFR5: XO0            */
    GPIO_PV1_UT3TXDA    = GPIO_FR_6, /*!< PVFR6: UT3TXDA        */
    GPIO_PV1_UT3RXD     = GPIO_FR_7, /*!< PVFR7: UT3RXD         */
} gpio_pv1_func_t;

/**
 *  @enum gpio_pv2_func_t
 *  @brief    PortV2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV2_T32A09OUTA = GPIO_FR_2, /*!< PVFR2: T32A09OUTA     */
    GPIO_PV2_T32A09OUTC = GPIO_FR_3, /*!< PVFR3: T32A09OUTC     */
    GPIO_PV2_ISDBIN2    = 0,         /*!<     0: ISDBIN2        */
    GPIO_PV2_VO0        = GPIO_FR_5, /*!< PVFR5: VO0            */
    GPIO_PV2_UT3RTS_N   = GPIO_FR_6, /*!< PVFR6: UT3RTS_N       */
    GPIO_PV2_UT3CTS_N   = GPIO_FR_7, /*!< PVFR7: UT3CTS_N       */
} gpio_pv2_func_t;

/**
 *  @enum gpio_pv3_func_t
 *  @brief    PortV3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV3_T32A09OUTB = GPIO_FR_2, /*!< PVFR2: T32A09OUTB     */
    GPIO_PV3_ISDBIN3    = 0,         /*!<     0: ISDBIN3        */
    GPIO_PV3_YO0        = GPIO_FR_5, /*!< PVFR5: YO0            */
    GPIO_PV3_UT3CTS_N   = GPIO_FR_6, /*!< PVFR6: UT3CTS_N       */
    GPIO_PV3_UT3RTS_N   = GPIO_FR_7, /*!< PVFR7: UT3RTS_N       */
} gpio_pv3_func_t;

/**
 *  @enum gpio_pv4_func_t
 *  @brief    PortV4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV4_EI2C2SCL   = GPIO_FR_1, /*!< PVFR1: EI2C2SCL       */
    GPIO_PV4_T32A04OUTB = GPIO_FR_2, /*!< PVFR2: T32A04OUTB     */
    GPIO_PV4_TSPI5RXD   = GPIO_FR_4, /*!< PVFR4: TSPI5RXD       */
    GPIO_PV4_WO0        = GPIO_FR_5, /*!< PVFR5: WO0            */
    GPIO_PV4_I2C2SCL    = GPIO_FR_6, /*!< PVFR6: I2C2SCL        */
    GPIO_PV4_UT1RXD     = GPIO_FR_7, /*!< PVFR7: UT1RXD         */
} gpio_pv4_func_t;

/**
 *  @enum gpio_pv5_func_t
 *  @brief    PortV5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV5_EI2CSDA    = GPIO_FR_1, /*!< PVFR1: EI2CSDA        */
    GPIO_PV5_T32A04OUTA = GPIO_FR_2, /*!< PVFR2: T32A04OUTA     */
    GPIO_PV5_T32A04OUTC = GPIO_FR_3, /*!< PVFR3: T32A04OUTC     */
    GPIO_PV5_TSPI5TXD   = GPIO_FR_4, /*!< PVFR4: TSPI5TXD       */
    GPIO_PV5_ZO0        = GPIO_FR_5, /*!< PVFR5: ZO0            */
    GPIO_PV5_I2C2SDA    = GPIO_FR_6, /*!< PVFR6: I2C2SDA        */
    GPIO_PV5_UT1TXDA    = GPIO_FR_7, /*!< PVFR7: UT1TXDA        */
} gpio_pv5_func_t;

/**
 *  @enum gpio_pv6_func_t
 *  @brief    PortV6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV6_T32A05OUTA = GPIO_FR_2, /*!< PVFR2: T32A05OUTA     */
    GPIO_PV6_T32A05OUTC = GPIO_FR_3, /*!< PVFR3: T32A05OUTC     */
    GPIO_PV6_TSPI5SCK   = GPIO_FR_4, /*!< PVFR4: TSPI5SCK       */
    GPIO_PV6_EMG0       = GPIO_FR_5, /*!< PVFR5: EMG0           */
    GPIO_PV6_UT1CTS_N   = GPIO_FR_7, /*!< PVFR7: UT1CTS_N       */
} gpio_pv6_func_t;

/**
 *  @enum gpio_pv7_func_t
 *  @brief    PortV7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PV7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PV7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PV7_T32A05OUTB = GPIO_FR_2, /*!< PVFR2: T32A05OUTB     */
    GPIO_PV7_TSPI5CS0   = GPIO_FR_4, /*!< PVFR4: TSPI5CS0       */
    GPIO_PV7_OVV0       = GPIO_FR_5, /*!< PVFR5: OVV0           */
    GPIO_PV7_TSPI5CSIN  = GPIO_FR_6, /*!< PVFR6: TSPI5CSIN      */
    GPIO_PV7_UT1RTS_N   = GPIO_FR_7, /*!< PVFR7: UT1RTS_N       */
} gpio_pv7_func_t;

/**
 *  @enum gpio_pw0_func_t
 *  @brief    PortW0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW0_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW0_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW0_TSPI8CS0   = GPIO_FR_4, /*!< PWFR4: TSPI8CS0       */
    GPIO_PW0_T32A00OUTB = GPIO_FR_5, /*!< PWFR5: T32A00OUTB     */
    GPIO_PW0_TSPI8CSIN  = GPIO_FR_6, /*!< PWFR6: TSPI8CSIN      */
} gpio_pw0_func_t;

/**
 *  @enum gpio_pw1_func_t
 *  @brief    PortW1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW1_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW1_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW1_TSPI8SCK   = GPIO_FR_4, /*!< PWFR4: TSPI8SCK       */
    GPIO_PW1_T32A00OUTA = GPIO_FR_5, /*!< PWFR5: T32A00OUTA     */
    GPIO_PW1_T32A00OUTC = GPIO_FR_7, /*!< PWFR7: T32A00OUTC     */
} gpio_pw1_func_t;

/**
 *  @enum gpio_pw2_func_t
 *  @brief    PortW2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW2_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW2_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW2_TSPI8RXD   = GPIO_FR_4, /*!< PWFR4: TSPI8RXD       */
    GPIO_PW2_T32A01OUTA = GPIO_FR_5, /*!< PWFR5: T32A01OUTA     */
    GPIO_PW2_T32A01OUTC = GPIO_FR_7, /*!< PWFR7: T32A01OUTC     */
} gpio_pw2_func_t;

/**
 *  @enum gpio_pw3_func_t
 *  @brief    PortW3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW3_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW3_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW3_TSPI8TXD   = GPIO_FR_4, /*!< PWFR4: TSPI8TXD       */
    GPIO_PW3_T32A01OUTB = GPIO_FR_5, /*!< PWFR5: T32A01OUTB     */
} gpio_pw3_func_t;

/**
 *  @enum gpio_pw4_func_t
 *  @brief    PortW4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW4_T32A11INA1 = GPIO_FR_3, /*!< PWFR3: T32A11INA1     */
    GPIO_PW4_T32A10OUTB = GPIO_FR_5, /*!< PWFR5: T32A10OUTB     */
    GPIO_PW4_ISDCIN0    = 0,         /*!<     0: ISDCIN0        */
    GPIO_PW4_T32A10INA0 = GPIO_FR_7, /*!< PWFR7: T32A10INA0     */
} gpio_pw4_func_t;

/**
 *  @enum gpio_pw5_func_t
 *  @brief    PortW5 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW5_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW5_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW5_T32A10OUTA = GPIO_FR_5, /*!< PWFR5: T32A10OUTA     */
    GPIO_PW5_ISDCIN1    = 0,         /*!<     0: ISDCIN1        */
    GPIO_PW5_T32A10OUTC = GPIO_FR_7, /*!< PWFR7: T32A10OUTC     */
} gpio_pw5_func_t;

/**
 *  @enum gpio_pw6_func_t
 *  @brief    PortW6 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW6_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW6_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW6_T32A11OUTA = GPIO_FR_5, /*!< PWFR5: T32A11OUTA     */
    GPIO_PW6_ISDCIN2    = 0,         /*!<     0: ISDCIN2        */
    GPIO_PW6_T32A11OUTC = GPIO_FR_7, /*!< PWFR7: T32A11OUTC     */
} gpio_pw6_func_t;

/**
 *  @enum gpio_pw7_func_t
 *  @brief    PortW7 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PW7_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PW7_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PW7_T32A10INA1 = GPIO_FR_3, /*!< PWFR3: T32A10INA1     */
    GPIO_PW7_T32A11OUTB = GPIO_FR_5, /*!< PWFR5: T32A11OUTB     */
    GPIO_PW7_ISDCIN3    = 0,         /*!<     0: ISDCIN3        */
    GPIO_PW7_T32A11INA0 = GPIO_FR_7, /*!< PWFR7: T32A11INA0     */
} gpio_pw7_func_t;

/**
 *  @enum gpio_py0_func_t
 *  @brief    PortY0 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PY0_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PY0_X1         = GPIO_FR_NA, /*!< N/A: X1             */
} gpio_py0_func_t;

/**
 *  @enum gpio_py1_func_t
 *  @brief    PortY1 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PY1_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PY1_X2         = GPIO_FR_NA, /*!< N/A: X2             */
} gpio_py1_func_t;

/**
 *  @enum gpio_py2_func_t
 *  @brief    PortY2 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PY2_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PY2_XT1        = GPIO_FR_NA, /*!< N/A: XT1            */
} gpio_py2_func_t;

/**
 *  @enum gpio_py3_func_t
 *  @brief    PortY3 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PY3_INPUT      = GPIO_FR_NA, /*!< N/A: Input Port     */
    GPIO_PY3_XT2        = GPIO_FR_NA, /*!< N/A: XT2            */
} gpio_py3_func_t;

/**
 *  @enum gpio_py4_func_t
 *  @brief    PortY4 Function Enumerated Type Definition.
 */
typedef enum {
    GPIO_PY4_INPUT      = 0,         /*!<     0: Input Port     */
    GPIO_PY4_OUTPUT     = 0,         /*!<     0: Output Port    */
    GPIO_PY4_ISDCOUT    = GPIO_FR_1, /*!< PYFR1: ISDCOUT        */
    GPIO_PY4_EEXBCLK    = GPIO_FR_4, /*!< PYFR4: EEXBCLK        */
} gpio_py4_func_t;

/**
 *  @}
 */ /* End of group GPIO_Exported_Typedef */

/*------------------------------------------------------------------------------*/
/*  Structure Definition                                                        */
/*------------------------------------------------------------------------------*/
/**
 *  @defgroup GPIO_Private_typedef GPIO Private Typedef
 *  @{
 */
/*!
  * @brief  Pin Exist Table
  * @details Bit0 :GPIO_Mode_DATA
  * @details Bit1 :GPIO_Mode_CR
  * @details Bit2 :GPIO_Mode_FR1
  * @details Bit3 :GPIO_Mode_FR2
  * @details Bit4 :GPIO_Mode_FR3
  * @details Bit5 :GPIO_Mode_FR4
  * @details Bit6 :GPIO_Mode_FR5
  * @details Bit7 :GPIO_Mode_FR6
  * @details Bit8 :GPIO_Mode_FR7
  * @details Bit9 :GPIO_Mode_FR8
  * @details Bit10 :GPIO_Mode_OD
  * @details Bit11 :GPIO_Mode_PUP
  * @details Bit12 :GPIO_Mode_PDN
  * @details Bit13 :GPIO_Mode_IE
  */
static uint16_t PinExistTbl[GPIO_GROUP_Max][GPIO_PORT_Max] = {
    /* Port-0         Port-1         Port-2         Port-3         Port-4         Port-5         Port-6         Port-7 */
    { GPIO_PORT_A_0, GPIO_PORT_A_1, GPIO_PORT_A_2, GPIO_PORT_A_3, GPIO_PORT_A_4, GPIO_PORT_A_5, GPIO_PORT_A_6, GPIO_PORT_A_7 },     /** GPIO_PORT_A */
    { GPIO_PORT_B_0, GPIO_PORT_B_1, GPIO_PORT_B_2, GPIO_PORT_B_3, GPIO_PORT_B_4, GPIO_PORT_B_5, GPIO_PORT_B_6, GPIO_PORT_B_7 },     /** GPIO_PORT_B */
    { GPIO_PORT_C_0, GPIO_PORT_C_1, GPIO_PORT_C_2, GPIO_PORT_C_3, GPIO_PORT_C_4, GPIO_PORT_C_5, GPIO_PORT_C_6, GPIO_PORT_C_7 },     /** GPIO_PORT_C */
    { GPIO_PORT_D_0, GPIO_PORT_D_1, GPIO_PORT_D_2, GPIO_PORT_D_3, GPIO_PORT_D_4, GPIO_PORT_D_5, GPIO_PORT_D_6, GPIO_PORT_D_7 },     /** GPIO_PORT_D */
    { GPIO_PORT_E_0, GPIO_PORT_E_1, GPIO_PORT_E_2, GPIO_PORT_E_3, GPIO_PORT_E_4, GPIO_PORT_E_5, GPIO_PORT_E_6, GPIO_PORT_E_7 },     /** GPIO_PORT_E */
    { GPIO_PORT_F_0, GPIO_PORT_F_1, GPIO_PORT_F_2, GPIO_PORT_F_3, GPIO_PORT_F_4, GPIO_PORT_F_5, GPIO_PORT_F_6, GPIO_PORT_F_7 },     /** GPIO_PORT_F */
    { GPIO_PORT_G_0, GPIO_PORT_G_1, GPIO_PORT_G_2, GPIO_PORT_G_3, GPIO_PORT_G_4, GPIO_PORT_G_5, GPIO_PORT_G_6, GPIO_PORT_G_7 },     /** GPIO_PORT_G */
    { GPIO_PORT_H_0, GPIO_PORT_H_1, GPIO_PORT_H_2, GPIO_PORT_H_3, GPIO_PORT_H_4, GPIO_PORT_H_5, GPIO_PORT_H_6, GPIO_PORT_H_7 },     /** GPIO_PORT_H */
    { GPIO_PORT_J_0, GPIO_PORT_J_1, GPIO_PORT_J_2, GPIO_PORT_J_3, GPIO_PORT_J_4, GPIO_PORT_J_5, GPIO_PORT_J_6, GPIO_PORT_J_7 },     /** GPIO_PORT_J */
    { GPIO_PORT_K_0, GPIO_PORT_K_1, GPIO_PORT_K_2, GPIO_PORT_K_3, GPIO_PORT_K_4, GPIO_PORT_K_5, GPIO_PORT_K_6, GPIO_PORT_K_7 },     /** GPIO_PORT_K */
    { GPIO_PORT_L_0, GPIO_PORT_L_1, GPIO_PORT_L_2, GPIO_PORT_L_3, GPIO_PORT_L_4, GPIO_PORT_L_5, GPIO_PORT_L_6, GPIO_PORT_L_7 },     /** GPIO_PORT_L */
    { GPIO_PORT_M_0, GPIO_PORT_M_1, GPIO_PORT_M_2, GPIO_PORT_M_3, GPIO_PORT_M_4, GPIO_PORT_M_5, GPIO_PORT_M_6, GPIO_PORT_M_7 },     /** GPIO_PORT_M */
    { GPIO_PORT_N_0, GPIO_PORT_N_1, GPIO_PORT_N_2, GPIO_PORT_N_3, GPIO_PORT_N_4, GPIO_PORT_N_5, GPIO_PORT_N_6, GPIO_PORT_N_7 },     /** GPIO_PORT_N */
    { GPIO_PORT_P_0, GPIO_PORT_P_1, GPIO_PORT_P_2, GPIO_PORT_P_3, GPIO_PORT_P_4, GPIO_PORT_P_5, GPIO_PORT_P_6, GPIO_PORT_P_7 },     /** GPIO_PORT_P */
    { GPIO_PORT_R_0, GPIO_PORT_R_1, GPIO_PORT_R_2, GPIO_PORT_R_3, GPIO_PORT_R_4, GPIO_PORT_R_5, GPIO_PORT_R_6, GPIO_PORT_R_7 },     /** GPIO_PORT_R */
    { GPIO_PORT_T_0, GPIO_PORT_T_1, GPIO_PORT_T_2, GPIO_PORT_T_3, GPIO_PORT_T_4, GPIO_PORT_T_5, GPIO_PORT_T_6, GPIO_PORT_T_7 },     /** GPIO_PORT_T */
    { GPIO_PORT_U_0, GPIO_PORT_U_1, GPIO_PORT_U_2, GPIO_PORT_U_3, GPIO_PORT_U_4, GPIO_PORT_U_5, GPIO_PORT_U_6, GPIO_PORT_U_7 },     /** GPIO_PORT_U */
    { GPIO_PORT_V_0, GPIO_PORT_V_1, GPIO_PORT_V_2, GPIO_PORT_V_3, GPIO_PORT_V_4, GPIO_PORT_V_5, GPIO_PORT_V_6, GPIO_PORT_V_7 },     /** GPIO_PORT_V */
    { GPIO_PORT_W_0, GPIO_PORT_W_1, GPIO_PORT_W_2, GPIO_PORT_W_3, GPIO_PORT_W_4, GPIO_PORT_W_5, GPIO_PORT_W_6, GPIO_PORT_W_7 },     /** GPIO_PORT_W */
    { GPIO_PORT_Y_0, GPIO_PORT_Y_1, GPIO_PORT_Y_2, GPIO_PORT_Y_3, GPIO_PORT_Y_4, GPIO_PORT_Y_5, GPIO_PORT_Y_6, GPIO_PORT_Y_7 },     /** GPIO_PORT_Y */
};
/**
 *  @}
 */ /* End of group GPIO_Private_typedef */
/*----------------------------------*/
/**
 * @brief  GPIO handle structure definition.
*/
/*----------------------------------*/
typedef struct gpio_pa_handle {
    TSB_PA_TypeDef       *p_pa_instance;     /*!< Registers base address.           */
    TSB_PB_TypeDef       *p_pb_instance;     /*!< Registers base address.           */
    TSB_PC_TypeDef       *p_pc_instance;     /*!< Registers base address.           */
    TSB_PD_TypeDef       *p_pd_instance;     /*!< Registers base address.           */
    TSB_PE_TypeDef       *p_pe_instance;     /*!< Registers base address.           */
    TSB_PF_TypeDef       *p_pf_instance;     /*!< Registers base address.           */
    TSB_PG_TypeDef       *p_pg_instance;     /*!< Registers base address.           */
    TSB_PH_TypeDef       *p_ph_instance;     /*!< Registers base address.           */
    TSB_PJ_TypeDef       *p_pj_instance;     /*!< Registers base address.           */
    TSB_PK_TypeDef       *p_pk_instance;     /*!< Registers base address.           */
    TSB_PL_TypeDef       *p_pl_instance;     /*!< Registers base address.           */
    TSB_PM_TypeDef       *p_pm_instance;     /*!< Registers base address.           */
    TSB_PN_TypeDef       *p_pn_instance;     /*!< Registers base address.           */
    TSB_PP_TypeDef       *p_pp_instance;     /*!< Registers base address.           */
    TSB_PR_TypeDef       *p_pr_instance;     /*!< Registers base address.           */
    TSB_PT_TypeDef       *p_pt_instance;     /*!< Registers base address.           */
    TSB_PU_TypeDef       *p_pu_instance;     /*!< Registers base address.           */
    TSB_PV_TypeDef       *p_pv_instance;     /*!< Registers base address.           */
    TSB_PW_TypeDef       *p_pw_instance;     /*!< Registers base address.           */
    TSB_PY_TypeDef       *p_py_instance;     /*!< Registers base address.           */
} _gpio_t;

/**
 *  @}
 */ /* End of group GPIO_Exported_Typedef */

/**
 *  @}
 */ /* End of group GPIO */

/**
 *  @}
 */ /* End of group Periph_Driver */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __GPIO_M4GR_H */
