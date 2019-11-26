#include "stm32f4xx.h"                  // Device header
#include "stm32f4xx_hal.h"              // Keil::Device:STM32Cube HAL:Common
#include "RTE_Components.h"             // Component selection
#include "led.h"
#include "RTE_Device.h"                 // Keil::Device:STM32Cube Framework:Classic
#include "FreeRTOS.h"
#include "task.h"
#include "SysTick.h"

int main()
{
	SysTick_Init();
	LED_Init();
	while(1)
	{
		Create_LED_Task();				//����LED��˸����
		vTaskStartScheduler();          //�����������
	}
}

