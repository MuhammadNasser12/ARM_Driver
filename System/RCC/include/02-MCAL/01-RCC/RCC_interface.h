/*********************************************************/
/* Author    : Muhammad Naser 							 */
/* Date  	 : 15/12/2023								 */
/* Version 	 :	V01										 */
/*********************************************************/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

// Clock Types
#define RCC_AHB		0
#define RCC_APB1	1
#define RCC_APB2	2

// PLL Options
#define RCC_PLL_IN_HSI_DIV_2		0
#define	RCC_PLL_IN_HSE_DIV_2		1
#define	RCC_PLL_IN_HSE				2

/* Multiplication Options 2:16*/
#define RCC_PLL_MUL_FACTOR_2 	0
#define RCC_PLL_MUL_FACTOR_3 	1
#define RCC_PLL_MUL_FACTOR_4 	2
#define RCC_PLL_MUL_FACTOR_5 	3
#define RCC_PLL_MUL_FACTOR_6 	4
#define RCC_PLL_MUL_FACTOR_7 	5
#define RCC_PLL_MUL_FACTOR_8 	6
#define RCC_PLL_MUL_FACTOR_9 	7
#define RCC_PLL_MUL_FACTOR_10 	8
#define RCC_PLL_MUL_FACTOR_11 	9
#define RCC_PLL_MUL_FACTOR_12 	10
#define RCC_PLL_MUL_FACTOR_13 	11
#define RCC_PLL_MUL_FACTOR_14 	12
#define RCC_PLL_MUL_FACTOR_15 	13
#define RCC_PLL_MUL_FACTOR_16 	14
//Functions Headers

void RCC_voidInitSysClock(void);

void RCC_voidEnableClock(u8 Copy_u8BusId,u8 Copy_u8PerId);

void RCC_voidDisableClock(u8 Copy_u8BusId,u8 Copy_u8PerId);


#endif
