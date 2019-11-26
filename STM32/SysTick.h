#ifndef __SysTick_H_
#define __SysTick_H_

#include "stm32f4xx.h"                  // Device header
#include "FreeRTOS.h"
#include "stdint.h"

void SysTick_Init(void);
void Delay_us(uint32_t nus);
void Delay_ms(uint32_t nms);
void Delay_xms(uint32_t nms);

#endif
