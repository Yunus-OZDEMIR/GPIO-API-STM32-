/*
 * GPIO.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Yunus ÖZDEMİR
 */

#include "stm32f401xe.h"
#include "GPIO.h"
#include "RCC.h"




void GPIO_INIT(GPIO_TypeDef *GPIOx, GPIO_CONFIG_t *GPIO_CONFIG){

	if (GPIOx == GPIOA){
		GPIOA_CLK_EN; //GPIOA PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOx->MODER 	|= (GPIO_CONFIG->PinMode)    <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OSPEEDR  |= (GPIO_CONFIG->Speed)      <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OTYPER   |= (GPIO_CONFIG->OutputType) <<  (GPIO_CONFIG->PinNumber);
		GPIOx->PUPDR    |= (GPIO_CONFIG->Pull)       <<  (2*(GPIO_CONFIG->PinNumber));

	}

/***********************************************************************************/
	if (GPIOx == GPIOB){
		GPIOB_CLK_EN; //GPIOB PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOx->MODER 	|= (GPIO_CONFIG->PinMode)    <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OSPEEDR  |= (GPIO_CONFIG->Speed)      <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OTYPER   |= (GPIO_CONFIG->OutputType) <<  (GPIO_CONFIG->PinNumber);
		GPIOx->PUPDR    |= (GPIO_CONFIG->Pull)       <<  (2*(GPIO_CONFIG->PinNumber));

	}
/***********************************************************************************/
	if (GPIOx == GPIOC){
		GPIOC_CLK_EN; //GPIOC PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOx->MODER 	|= (GPIO_CONFIG->PinMode)    <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OSPEEDR  |= (GPIO_CONFIG->Speed)      <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OTYPER   |= (GPIO_CONFIG->OutputType) <<  (GPIO_CONFIG->PinNumber);
		GPIOx->PUPDR    |= (GPIO_CONFIG->Pull)       <<  (2*(GPIO_CONFIG->PinNumber));

	}
/***********************************************************************************/
	if (GPIOx == GPIOD){
		GPIOD_CLK_EN; //GPIOD PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOx->MODER 	|= (GPIO_CONFIG->PinMode)    <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OSPEEDR  |= (GPIO_CONFIG->Speed)      <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OTYPER   |= (GPIO_CONFIG->OutputType) <<  (GPIO_CONFIG->PinNumber);
		GPIOx->PUPDR    |= (GPIO_CONFIG->Pull)       <<  (2*(GPIO_CONFIG->PinNumber));

	}
/***********************************************************************************/
	if (GPIOx == GPIOE){
		GPIOE_CLK_EN; //GPIOE PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOx->MODER 	|= (GPIO_CONFIG->PinMode)    <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OSPEEDR  |= (GPIO_CONFIG->Speed)      <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OTYPER   |= (GPIO_CONFIG->OutputType) <<  (GPIO_CONFIG->PinNumber);
		GPIOx->PUPDR    |= (GPIO_CONFIG->Pull)       <<  (2*(GPIO_CONFIG->PinNumber));

		}
/***********************************************************************************/
	if (GPIOx == GPIOH){
		GPIOH_CLK_EN; //GPIOH PERIPHERAL CLOCK ENABLE
		if (GPIO_CONFIG->PinMode == AltFuncMode){
			if (GPIO_CONFIG->Alternate < 8){
				GPIOA->AFR[0] |= GPIO_CONFIG->Alternate;
			}
			else{
				GPIOA->AFR[1] |= GPIO_CONFIG->Alternate;
			}
		}

		GPIOx->MODER 	|= (GPIO_CONFIG->PinMode)    <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OSPEEDR  |= (GPIO_CONFIG->Speed)      <<  (2*(GPIO_CONFIG->PinNumber));
		GPIOx->OTYPER   |= (GPIO_CONFIG->OutputType) <<  (GPIO_CONFIG->PinNumber);
		GPIOx->PUPDR    |= (GPIO_CONFIG->Pull)       <<  (2*(GPIO_CONFIG->PinNumber));

	}

}
