#ifndef __led_H_
#define __led_H_

#include "stm32f4xx.h"                  // Device header
#include "mapping.h"
#include "stm32f4xx_hal.h"              // Keil::Device:STM32Cube HAL:Common
#include "stdint.h"
#include "FreeRTOS.h"
#include "task.h"





#define LED PB5

void LED_Init(void);
void LEDTwinkle(uint16_t nms);
void Create_LED_Task(void);

#endif

