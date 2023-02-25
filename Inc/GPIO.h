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
#define InputMode			0x00
#define OutputMode			0x01
#define AltFuncMode			0x10
#define AnalogMode			0x11
/*
 * GPIOx_OTYPER
 */
#define PushPull			0x00 //reset state
#define OpenDrain			0x01

/*
 * GPIOx_OSPEEDR)
 */
#define LowSpeed			0x00
#define	MediumSpeed			0x01
#define	HighSpeed			0x10
#define	VeryHighSpeed		0x10

/*
 * GPIOx_PUPDR
 */
#define	NoPuPd				0x00
#define	PullUp				0x01
#define	PullDown			0x10

/*
 * GPIOx_AFRL
 */
#define AFL_0				0x0000
#define AFL_1				0x0001
#define AFL_2				0x0010
#define AFL_3				0x0011
#define AFL_4				0x0100
#define AFL_5				0x0101
#define AFL_6				0x0110
#define AFL_7				0x0111
#define AFL_8				0x1000
#define AFL_9				0x1001
#define AFL_10				0x1010
#define AFL_11				0x1011
#define AFL_12				0x1100
#define AFL_13				0x1101
#define AFL_14				0x1110
#define AFL_15				0x1111

/*
 * GPIOx_AFRH
 */
#define NoAltFunc			0x0000
#define AFH_0				0x0000
#define AFH_1				0x0001
#define AFH_2				0x0010
#define AFH_3				0x0011
#define AFH_4				0x0100
#define AFH_5				0x0101
#define AFH_6				0x0110
#define AFH_7				0x0111
#define AFH_8				0x1000
#define AFH_9				0x1001
#define AFH_10				0x1010
#define AFH_11				0x1011
#define AFH_12				0x1100
#define AFH_13				0x1101
#define AFH_14				0x1110
#define AFH_15				0x1111

/*
 * GPIO PORTS
 */





void GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_CONFIG_t *GPIO_CONFIG);
void GPIO_DeInit(GPIO_TypeDef *GPIOx);

uint8_t GPIO_READ(GPIO_TypeDef *GPIOx, uint8_t PinNumber);



#endif /* GPIO_H_ */
