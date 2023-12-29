/*********************************************************/
/* Author    : Muhammad Naser 							 */
/* Date  	 : 15/12/2023								 */
/* Version 	 :	V01										 */													
/*********************************************************/
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


					/* Base Address 0x4002 1000*/
/*Register Definations*/
#define RCC_CR  				*((u32*)0x40021000) //Clock..Chose Clock Source  
#define RCC_CFGR 				*((u32*)0x40021004) //Clock..Chose Clock Source
#define RCC_CIR  				*((u32*)0x40021008) //Reset
#define RCC_APB2RSTR  			*((u32*)0x4002100C) //Reset
#define RCC_APB1RSTR  			*((u32*)0x40021010) //Reset
#define RCC_AHBENR  			*((u32*)0x40021014) //Clock..Enable/Desable 
#define RCC_APB2ENR 			*((u32*)0x40021018) //Clock..Enable/Desable
#define RCC_APB1ENR	 			*((u32*)0x4002101C) //Clock..Enable/Desable
#define RCC_BDCR				*((u32*)0x40021020) //Reset
#define RCC_CSR					*((u32*)0x40021024) //Reset

#endif