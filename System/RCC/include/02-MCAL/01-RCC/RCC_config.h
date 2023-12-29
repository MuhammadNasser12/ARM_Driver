/*********************************************************/
/* Author    : Muhammad Naser 							 */
/* Date  	 : 15/12/2023								 */
/* Version 	 :	V01										 */
/*********************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/*Options : RCC_HSE_CRYSTAL
			RCC_HSE_RC
			RCC_HSI
			RCC_PLL
*/
#define RCC_CLOCK_TYPE		 RCC_HSE_CRYSTAL
/*Options : RCC_PLL_IN_HSI_DIV_2
 	 	 	RCC_PLL_IN_HSE_DIV_2
 	 	 	RCC_PLL_IN_HSE
 */
// Note: Select the Value only if you have Pll as an input source
#if RCC_CLOCK_TYPE == RCC_PLL
	#define RCC_PLL_INPUT		RCC_PLL_IN_HSE_DIV_2
#endif


/* Multiplication Options 2:16*/
// Note: Select the Value only if you have Pll as an input source
#if RCC_CLOCK_TYPE == RCC_PLL
	#define RCC_PLL_MUL_VAL 	RCC_PLL_MUL_FACTOR_4
#endif




#endif
