/*
 * GPIO.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Yunus ÖZDEMİR
 */

#include "stm32f401xe.h"
#include "GPIO.h"
#include "RCC.h"

void GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_CONFIG_t *GPIO_CONFIG){
		 if (GPIOx == GPIOA)GPIOA_CLK_EN();
	else if (GPIOx == GPIOB)GPIOB_CLK_EN();
	else if (GPIOx == GPIOC)GPIOC_CLK_EN();
	else if (GPIOx == GPIOD)GPIOD_CLK_EN();
	else if (GPIOx == GPIOE)GPIOE_CLK_EN();
	else if (GPIOx == GPIOH)GPIOH_CLK_EN();

	GPIOx->MODER 	|= (GPIO_CONFIG->PinMode 	 <<2*(GPIO_CONFIG->PinNumber));
	GPIOx->OSPEEDR  |= (GPIO_CONFIG->Speed)      <<  (2*(GPIO_CONFIG->PinNumber));
	GPIOx->OTYPER   |= (GPIO_CONFIG->OutputType) <<  (GPIO_CONFIG->PinNumber);
	GPIOx->PUPDR    |= (GPIO_CONFIG->Pull)       <<  (2*(GPIO_CONFIG->PinNumber));

	if (GPIO_CONFIG->PinMode == AltFuncMode){
		if (GPIO_CONFIG->Alternate < 8){
			GPIOx->AFR[0] |= ((GPIO_CONFIG->Alternate)<<4*(GPIO_CONFIG->PinNumber));
		}
		else{
			GPIOx->AFR[1] |= GPIO_CONFIG->Alternate;
		}
	}



}


void GPIO_DeInit(GPIO_TypeDef *GPIOx){

	RCC_AHB1ENR_t DisablePorts;

	if(GPIOx == GPIOA){
		DisablePorts.GPIOAEN = DISABLE;
		RCC->AHB1ENR = DisablePorts.RCC_AHB1ENR;
	}
	else if (GPIOx == GPIOB){
		DisablePorts.GPIOBEN = DISABLE;
		RCC->AHB1ENR = DisablePorts.RCC_AHB1ENR;
	}
	else if (GPIOx == GPIOC){
		DisablePorts.GPIOCEN = DISABLE;
		RCC->AHB1ENR = DisablePorts.RCC_AHB1ENR;
	}
	else if (GPIOx == GPIOD){
		DisablePorts.GPIODEN = DISABLE;
		RCC->AHB1ENR = DisablePorts.RCC_AHB1ENR;
	}
	else if (GPIOx == GPIOE){
		DisablePorts.GPIOEEN = DISABLE;
		RCC->AHB1ENR = DisablePorts.RCC_AHB1ENR;
	}
	else if (GPIOx == GPIOH){
		DisablePorts.GPIOHEN = DISABLE;
		RCC->AHB1ENR = DisablePorts.RCC_AHB1ENR;
	}

}



uint8_t GPIO_READ(GPIO_TypeDef *GPIOx, uint8_t PinNumber){
	return ((GPIOx->IDR >> PinNumber) & 0x00000001);
}

void GPIO_WRITE(GPIO_TypeDef *GPIOx, uint8_t PinNumber,uint8_t Output){
	GPIOx->ODR |= (Output<<PinNumber);
}

void GPIO_TOGGLE(GPIO_TypeDef *GPIOx, uint8_t PinNumber){
	GPIOx->ODR ^= (1<<PinNumber);
}




