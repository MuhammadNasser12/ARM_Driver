/*********************************************************/
/* Author    : Muhammad Naser 							 */
/* Date  	 : 15/12/2023								 */
/* Version 	 :	V01										 */													
/*********************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

 void RCC_voidEnableClock(u8 Copy_u8BusId,u8 Copy_u8PerId)
 {
	 if Copy_u8PerId <= 31)
	 {
		switch (Copy_u8BusId)
		{
			case RCC_AHB : SET_BIR(RCC_AHBENR  ,Copy_u8PerId)  break;
			case RCC_APB1: SET_BIR(RCC_APB1ENR ,Copy_u8PerId)  break;
			case RCC_APB2: SET_BIR(RCC_APB2ENR ,Copy_u8PerId)  break;
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
	 if Copy_u8PerId <= 31)
	 {
		switch (Copy_u8BusId)
		{
			case RCC_AHB : CLR_BIR(RCC_AHBENR  ,Copy_u8PerId)  break;
			case RCC_APB1: CLR_BIR(RCC_APB1ENR ,Copy_u8PerId)  break;
			case RCC_APB2: CLR_BIR(RCC_APB2ENR ,Copy_u8PerId)  break;
			//default		 :/* Return Error*/  				   break;
			
		}
		
	 }
	 else
	 {
		 /* Return Error*/
	 }
	 
	 
 }