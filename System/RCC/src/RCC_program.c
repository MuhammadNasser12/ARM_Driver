/*********************************************************/
/* Author    : Muhammad Naser 							 */
/* Date  	 : 15/12/2023								 */
/* Version 	 :	V01										 */													
/*********************************************************/
#include <01-LIB/01-STD_TYPES/STD_TYPES.h>
#include <01-LIB/02-BIT_MATH/BIT_MATH.h>
#include <02-MCAL/01-RCC/RCC_interface.h>
#include <02-MCAL/01-RCC/RCC_private.h>
#include <02-MCAL/01-RCC/RCC_config.h>

void RCC_voidInitSysClock(void)
{
	#if RCC_CLOCK_TYPE == RCC_HSE_CRYSTAL

		RCC_CR 	 = 0x00010000 ;		 // without bypass
		RCC_CFGR = 0x00000001 ;

		#elif RCC_CLOCK_TYPE == RCC_HSE_RC
			RCC_CR 	 = 0x00050000 ;	 // with bypass
			RCC_CFGR = 0x00000001 ;

		#elif RCC_CLOCK_TYPE == RCC_HSI
			RCC_CR	 = 0x00000081 ;  	// With no trim
			RCC_CFGR = 0x00000000 ;

		#elif RCC_CLOCK_TYPE == RCC_PLL
			#if RCC_PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
				RCC_CR 	 = 0x01000001 ;
				RCC_CFGR = 0x0000008A ;

				#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
					RCC_CR 	 = 0x01010000 ;
					RCC_CFGR = 0x000B0005 ;

				#elif RCC_PLL_INPUT == RCC_PLL_IN_HSE
					RCC_CR 	 = 0x01010000 ;
					RCC_CFGR = 0x00090005 ;

			#endif
		#else
			#error ("you Chosed wrong Clock type")
	#endif

}

 void RCC_voidEnableClock(u8 Copy_u8BusId,u8 Copy_u8PerId)
 {
	 if (Copy_u8PerId <= 31)
	 {
		switch (Copy_u8BusId)
		{
			case RCC_AHB : SET_BIR(RCC_AHBENR  ,Copy_u8PerId);
				break;
			case RCC_APB1: SET_BIR(RCC_APB1ENR ,Copy_u8PerId);
				break;
			case RCC_APB2: SET_BIR(RCC_APB2ENR ,Copy_u8PerId);
				break;

			//default		 :/* Return Error*/  				   break;
			
		}
		
	 }
	 else
	 {
		 /* Return Error*/
	 }
	 
	 
 }
 
 void RCC_voidDisableClock(u8 Copy_u8BusId,u8 Copy_u8PerId)
 {
	 if (Copy_u8PerId <= 31)
	 {
		switch (Copy_u8BusId)
		{
			case RCC_AHB : CLR_BIR(RCC_AHBENR  ,Copy_u8PerId) ;
				break;
			case RCC_APB1: CLR_BIR(RCC_APB1ENR ,Copy_u8PerId) ;
				break;
			case RCC_APB2: CLR_BIR(RCC_APB2ENR ,Copy_u8PerId) ;
				break;

			//default		 :/* Return Error*/  				   break;
			
		}
		
	 }
	 else
	 {
		 /* Return Error*/
	 }
	 
	 
 }
