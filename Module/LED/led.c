#include "led.h"

//LED�������ȼ�
#define LED_TASK_PRIO		1

//LED�����ջ��С	
#define LED_STK_SIZE 		20  

//LED������
TaskHandle_t LEDTask_Handler;


//LED������
void LEDTwinkle_Task(void *pvParameters);

void LED_Init(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	__HAL_RCC_GPIOB_CLK_ENABLE();

	GPIO_InitStructure.Pin = GPIO_PIN_5;				 	//LED-->PB.5 �˿�����
	GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP; 		 	//�������
	GPIO_InitStructure.Speed = GPIO_SPEED_FREQ_VERY_HIGH;	//IO���ٶ�Ϊ50MHz
	HAL_GPIO_Init(GPIOB, &GPIO_InitStructure);				//�����趨������ʼ��GPIOB.5
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);		//PB.5 �����					 	 

}

void LEDTwinkle_Task(void *pvParameters)
{
    while(1)
    {
        LED ^= 1;
        vTaskDelay(1000);  //100usϵͳ��ʱ����
    }
}


void Create_LED_Task(void)
{
	taskENTER_CRITICAL();           //�����ٽ���
	//����LED����
    xTaskCreate((TaskFunction_t )LEDTwinkle_Task,     	
                (const char*    )"led_task",   	
                (uint16_t       )LED_STK_SIZE, 
                (void*          )NULL,				
                (UBaseType_t    )LED_TASK_PRIO,	
                (TaskHandle_t*  )&LEDTask_Handler);            
    taskEXIT_CRITICAL();            //�˳��ٽ���
}
