#include "led.h"

//LED任务优先级
#define LED_TASK_PRIO		1

//LED任务堆栈大小	
#define LED_STK_SIZE 		20  

//LED任务句柄
TaskHandle_t LEDTask_Handler;


//LED任务函数
void LEDTwinkle_Task(void *pvParameters);

void LED_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitStructure.Pin = GPIO_PIN_5;				 	//LED-->PB.5 端口配置
	GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP; 		 	//推挽输出
	GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_VERY_HIGH;	//IO口速度为50MHz
	HAL_GPIO_Init(GPIOB, &GPIO_InitStructure);				//根据设定参数初始化GPIOB.5
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);		//PB.5 输出高					 	 

}

void LEDTwinkle_Task(void *pvParameters)
{
    while(1)
    {
        LED ^= 1;
        vTaskDelay(1000);  //100us系统延时函数
    }
}


void Create_LED_Task(void)
{
	taskENTER_CRITICAL();           //进入临界区
	//创建LED任务
    xTaskCreate((TaskFunction_t )LEDTwinkle_Task,     	
                (const char*    )"led_task",   	
                (uint16_t       )LED_STK_SIZE, 
                (void*          )NULL,				
                (UBaseType_t    )LED_TASK_PRIO,	
                (TaskHandle_t*  )&LEDTask_Handler);            
    taskEXIT_CRITICAL();            //退出临界区
}
