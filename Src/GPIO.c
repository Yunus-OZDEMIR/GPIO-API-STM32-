/*
 * GPIO.c
 *
 *  Created on: Feb 10, 2023
 *      Author: yunus
 */

#include "stm32f401xe.h"
#include "GPIO.h"




void GPIO_INIT(GPIO_TypeDef *GPIOx, GPIO_CONFIG_t *GPIO_CONFIG){

	if (GPIOx == GPIOA){
		RCC->AHB1ENR 	|= (1<<0); //GPIOA PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOA->MODER 	|= (GPIO_CONFIG->PinMode) << (2*(GPIO_CONFIG->PinNumber));
		GPIOA->OSPEEDR  |= (GPIO_CONFIG->Speed)<< (2*(GPIO_CONFIG->PinNumber));
		GPIOA->OTYPER   |= (GPIO_CONFIG->OutputType)<<(GPIO_CONFIG->PinNumber);
		GPIOA->PUPDR    |= (GPIO_CONFIG->Pull)<<(2*(GPIO_CONFIG->PinNumber));

	}

/***********************************************************************************/
	if (GPIOx == GPIOB){
		RCC->AHB1ENR 	|= (1<<1); //GPIOA PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOA->MODER 	|= (GPIO_CONFIG->PinMode) << (2*(GPIO_CONFIG->PinNumber));
		GPIOA->OSPEEDR  |= (GPIO_CONFIG->Speed)<< (2*(GPIO_CONFIG->PinNumber));
		GPIOA->OTYPER   |= (GPIO_CONFIG->OutputType)<<(GPIO_CONFIG->PinNumber);
		GPIOA->PUPDR    |= (GPIO_CONFIG->Pull)<<(2*(GPIO_CONFIG->PinNumber));

	}

}
