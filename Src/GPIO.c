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

	if (GPIOx == GPIOA){
		GPIOA_CLK_EN(); //GPIOA PERIPHERAL CLOCK ENABLE
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
		GPIOB_CLK_EN(); //GPIOB PERIPHERAL CLOCK ENABLE
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
		GPIOC_CLK_EN(); //GPIOC PERIPHERAL CLOCK ENABLE
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
		GPIOD_CLK_EN(); //GPIOD PERIPHERAL CLOCK ENABLE
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
		GPIOE_CLK_EN(); //GPIOE PERIPHERAL CLOCK ENABLE
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
		GPIOH_CLK_EN(); //GPIOH PERIPHERAL CLOCK ENABLE
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

	uint8_t ReadBit = 0;
	if (GPIOx == GPIOA){
		ReadBit = ((GPIOA->IDR >> PinNumber) & 0x00000001);
	}

	else if (GPIOx == GPIOB){
		ReadBit = ((GPIOx->IDR >> PinNumber) & 0x00000001);
	}
	else if (GPIOx == GPIOC){
		ReadBit = ((GPIOx->IDR >> PinNumber) & 0x00000001);
	}
	else if (GPIOx == GPIOD){
		ReadBit = ((GPIOx->IDR >> PinNumber) & 0x00000001);
	}
	else if (GPIOx == GPIOE){
		ReadBit = ((GPIOx->IDR >> PinNumber) & 0x00000001);
	}
	else if (GPIOx == GPIOH){
		ReadBit = ((GPIOx->IDR >> PinNumber) & 0x00000001);
	}

	return ReadBit;
}



