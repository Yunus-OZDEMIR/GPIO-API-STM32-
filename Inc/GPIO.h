/*
 * GPIO.h
 *
 *  Created on: Feb 10, 2023
 *      Author: Yunus ÖZDEMİR
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "stm32f401xe.h"
#include "RCC.h"

typedef struct{
	uint8_t PinNumber;
	uint8_t PinMode;
	uint8_t OutputType;
	uint8_t Speed;
	uint8_t Pull;
	uint8_t Alternate;
}GPIO_CONFIG_t;

/*
 * GPIOx_MODER
 */
#define InputMode			0
#define OutputMode			1
#define AltFuncMode			2
#define AnalogMode			3
/*
 * GPIOx_OTYPER
 */
#define PushPull			0
#define OpenDrain			1

/*
 * GPIOx_OSPEEDR)
 */
#define LowSpeed			0
#define	MediumSpeed			1
#define	HighSpeed			2
#define	VeryHighSpeed		3

/*
 * GPIOx_PUPDR
 */
#define	NoPuPd				0
#define	PullUp				1
#define	PullDown			2

/*
 * GPIOx_AFRL
 */
#define AF_0				0
#define AF_1				1
#define AF_2				2
#define AF_3				3
#define AF_4				4
#define AF_5				5
#define AF_6				6
#define AF_7				7
#define AF_8				8
#define AF_9				9
#define AF_10				10
#define AF_11				11
#define AF_12				12
#define AF_13				13
#define AF_14				14
#define AF_15				15



/*
 * PinNumber
 */

#define PinNumber_0		    0
#define PinNumber_1		    1
#define PinNumber_2		    2
#define PinNumber_3		    3
#define PinNumber_4		    4
#define PinNumber_5		    5
#define PinNumber_6		    6
#define PinNumber_7		    7
#define PinNumber_8		    8
#define PinNumber_9		    9
#define PinNumber_10	    10
#define PinNumber_11	    11
#define PinNumber_12	    12
#define PinNumber_13	    13
#define PinNumber_14	    14
#define PinNumber_15	    15

/*
 * GPIO PORTS
 */





void GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_CONFIG_t *GPIO_CONFIG);
void GPIO_DeInit(GPIO_TypeDef *GPIOx);
void GPIO_WRITE(GPIO_TypeDef *GPIOx, uint8_t PinNumber,uint8_t Output);
void GPIO_TOGGLE(GPIO_TypeDef *GPIOx, uint8_t PinNumber);

#endif /* GPIO_H_ */
