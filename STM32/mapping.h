#ifndef __mapping_H_
#define __mapping_H_

#include <stm32f4xx.h> 
//-----------------------------------------------------------------------------------------------------
//������    ADDRESS=0x4200 0000 + (0x0001 100C*0x20) + (bitx*4) ;bitx:��xλ
// �ѡ�λ�ε�ַ��λ��š�ת��������ַ��
#define BITBAND(addr, bitnum) ((addr & 0xF0000000)+0x2000000+((addr &0xFFFFF)<<5)+(bitnum<<2))
//�Ѹõ�ַת����һ��ָ��
#define MEM_ADDR(addr)  *((volatile unsigned long  *)(addr))


#define BIT_ADDR(addr, bitnum)   MEM_ADDR( BITBAND(addr, bitnum)  )


#define GPIOA_ODR_Addr    (GPIOA_BASE+20) //0x40020014C
#define GPIOB_ODR_Addr    (GPIOB_BASE+20) //0x40020414C
#define GPIOC_ODR_Addr    (GPIOC_BASE+20) //0x40020814C
#define GPIOD_ODR_Addr    (GPIOD_BASE+20) //0x40020C14C
#define GPIOE_ODR_Addr    (GPIOE_BASE+20) //0x40021014C
#define GPIOF_ODR_Addr    (GPIOF_BASE+20) //0x40021414C
#define GPIOG_ODR_Addr    (GPIOG_BASE+20) //0x40021814C

#define GPIOA_IDR_Addr    (GPIOA_BASE+16) //0x40020010
#define GPIOB_IDR_Addr    (GPIOB_BASE+16) //0x40020410
#define GPIOC_IDR_Addr    (GPIOC_BASE+16) //0x40020810
#define GPIOD_IDR_Addr    (GPIOD_BASE+16) //0x40020C10
#define GPIOE_IDR_Addr    (GPIOE_BASE+16) //0x40021010
#define GPIOF_IDR_Addr    (GPIOF_BASE+16) //0x40021410
#define GPIOG_IDR_Addr    (GPIOG_BASE+16) //0x40021810

//-----------------------------------------------------
#define PA0   BIT_ADDR(GPIOA_ODR_Addr, 0)  //���
#define PA1   BIT_ADDR(GPIOA_ODR_Addr, 1)  //���
#define PA2   BIT_ADDR(GPIOA_ODR_Addr, 2)  //���
#define PA3   BIT_ADDR(GPIOA_ODR_Addr, 3)  //���
#define PA4   BIT_ADDR(GPIOA_ODR_Addr, 4)  //���
#define PA5   BIT_ADDR(GPIOA_ODR_Addr, 5)  //���
#define PA6   BIT_ADDR(GPIOA_ODR_Addr, 6)  //���
#define PA7   BIT_ADDR(GPIOA_ODR_Addr, 7)  //���
#define PA8   BIT_ADDR(GPIOA_ODR_Addr, 8)  //���
#define PA9   BIT_ADDR(GPIOA_ODR_Addr, 9)  //���
#define PA10  BIT_ADDR(GPIOA_ODR_Addr, 10) //���
#define PA11  BIT_ADDR(GPIOA_ODR_Addr, 11) //���
#define PA12  BIT_ADDR(GPIOA_ODR_Addr, 12) //���
#define PA13  BIT_ADDR(GPIOA_ODR_Addr, 13) //���
#define PA14  BIT_ADDR(GPIOA_ODR_Addr, 14) //���
#define PA15  BIT_ADDR(GPIOA_ODR_Addr, 15) //���


#define PA0in   BIT_ADDR(GPIOA_IDR_Addr, 0)  //����
#define PA1in   BIT_ADDR(GPIOA_IDR_Addr, 1)  //����
#define PA2in   BIT_ADDR(GPIOA_IDR_Addr, 2)  //����
#define PA3in   BIT_ADDR(GPIOA_IDR_Addr, 3)  //����
#define PA4in   BIT_ADDR(GPIOA_IDR_Addr, 4)  //����
#define PA5in   BIT_ADDR(GPIOA_IDR_Addr, 5)  //����
#define PA6in   BIT_ADDR(GPIOA_IDR_Addr, 6)  //����
#define PA7in   BIT_ADDR(GPIOA_IDR_Addr, 7)  //����
#define PA8in   BIT_ADDR(GPIOA_IDR_Addr, 8)  //����
#define PA9in   BIT_ADDR(GPIOA_IDR_Addr, 9)  //����
#define PA10in  BIT_ADDR(GPIOA_IDR_Addr, 10) //����
#define PA11in  BIT_ADDR(GPIOA_IDR_Addr, 11) //����
#define PA12in  BIT_ADDR(GPIOA_IDR_Addr, 12) //����
#define PA13in  BIT_ADDR(GPIOA_IDR_Addr, 13) //����
#define PA14in  BIT_ADDR(GPIOA_IDR_Addr, 14) //����
#define PA15in  BIT_ADDR(GPIOA_IDR_Addr, 15) //����


//-----------------------------------------------------
#define PB0   BIT_ADDR(GPIOB_ODR_Addr, 0)  //���
#define PB1   BIT_ADDR(GPIOB_ODR_Addr, 1)  //���
#define PB2   BIT_ADDR(GPIOB_ODR_Addr, 2)  //���
#define PB3   BIT_ADDR(GPIOB_ODR_Addr, 3)  //���
#define PB4   BIT_ADDR(GPIOB_ODR_Addr, 4)  //���
#define PB5   BIT_ADDR(GPIOB_ODR_Addr, 5)  //���
#define PB6   BIT_ADDR(GPIOB_ODR_Addr, 6)  //���
#define PB7   BIT_ADDR(GPIOB_ODR_Addr, 7)  //���
#define PB8   BIT_ADDR(GPIOB_ODR_Addr, 8)  //���
#define PB9   BIT_ADDR(GPIOB_ODR_Addr, 9)  //���
#define PB10  BIT_ADDR(GPIOB_ODR_Addr, 10) //���
#define PB11  BIT_ADDR(GPIOB_ODR_Addr, 11) //���
#define PB12  BIT_ADDR(GPIOB_ODR_Addr, 12) //���
#define PB13  BIT_ADDR(GPIOB_ODR_Addr, 13) //���
#define PB14  BIT_ADDR(GPIOB_ODR_Addr, 14) //���
#define PB15  BIT_ADDR(GPIOB_ODR_Addr, 15) //���


#define PB0in   BIT_ADDR(GPIOB_IDR_Addr, 0)  //����
#define PB1in   BIT_ADDR(GPIOB_IDR_Addr, 1)  //����
#define PB2in   BIT_ADDR(GPIOB_IDR_Addr, 2)  //����
#define PB3in   BIT_ADDR(GPIOB_IDR_Addr, 3)  //����
#define PB4in   BIT_ADDR(GPIOB_IDR_Addr, 4)  //����
#define PB5in   BIT_ADDR(GPIOB_IDR_Addr, 5)  //����
#define PB6in   BIT_ADDR(GPIOB_IDR_Addr, 6)  //����
#define PB7in   BIT_ADDR(GPIOB_IDR_Addr, 7)  //����
#define PB8in   BIT_ADDR(GPIOB_IDR_Addr, 8)  //����
#define PB9in   BIT_ADDR(GPIOB_IDR_Addr, 9)  //����
#define PB10in  BIT_ADDR(GPIOB_IDR_Addr, 10) //����
#define PB11in  BIT_ADDR(GPIOB_IDR_Addr, 11) //����
#define PB12in  BIT_ADDR(GPIOB_IDR_Addr, 12) //����
#define PB13in  BIT_ADDR(GPIOB_IDR_Addr, 13) //����
#define PB14in  BIT_ADDR(GPIOB_IDR_Addr, 14) //����
#define PB15in  BIT_ADDR(GPIOB_IDR_Addr, 15) //����
//----------------------------------------------------
#define PC0   BIT_ADDR(GPIOC_ODR_Addr, 0)  //���
#define PC1   BIT_ADDR(GPIOC_ODR_Addr, 1)  //���
#define PC2   BIT_ADDR(GPIOC_ODR_Addr, 2)  //���
#define PC3   BIT_ADDR(GPIOC_ODR_Addr, 3)  //���
#define PC4   BIT_ADDR(GPIOC_ODR_Addr, 4)  //���
#define PC5   BIT_ADDR(GPIOC_ODR_Addr, 5)  //���
#define PC6   BIT_ADDR(GPIOC_ODR_Addr, 6)  //���
#define PC7   BIT_ADDR(GPIOC_ODR_Addr, 7)  //���
#define PC8   BIT_ADDR(GPIOC_ODR_Addr, 8)  //���
#define PC9   BIT_ADDR(GPIOC_ODR_Addr, 9)  //���
#define PC10  BIT_ADDR(GPIOC_ODR_Addr, 10) //���
#define PC11  BIT_ADDR(GPIOC_ODR_Addr, 11) //���
#define PC12  BIT_ADDR(GPIOC_ODR_Addr, 12) //���
#define PC13  BIT_ADDR(GPIOC_ODR_Addr, 13) //���
#define PC14  BIT_ADDR(GPIOC_ODR_Addr, 14) //���
#define PC15  BIT_ADDR(GPIOC_ODR_Addr, 15) //���


#define PC0in   BIT_ADDR(GPIOC_IDR_Addr, 0)  //����
#define PC1in   BIT_ADDR(GPIOC_IDR_Addr, 1)  //����
#define PC2in   BIT_ADDR(GPIOC_IDR_Addr, 2)  //����
#define PC3in   BIT_ADDR(GPIOC_IDR_Addr, 3)  //����
#define PC4in   BIT_ADDR(GPIOC_IDR_Addr, 4)  //����
#define PC5in   BIT_ADDR(GPIOC_IDR_Addr, 5)  //����
#define PC6in   BIT_ADDR(GPIOC_IDR_Addr, 6)  //����
#define PC7in   BIT_ADDR(GPIOC_IDR_Addr, 7)  //����
#define PC8in   BIT_ADDR(GPIOC_IDR_Addr, 8)  //����
#define PC9in   BIT_ADDR(GPIOC_IDR_Addr, 9)  //����
#define PC10in  BIT_ADDR(GPIOC_IDR_Addr, 10) //����
#define PC11in  BIT_ADDR(GPIOC_IDR_Addr, 11) //����
#define PC12in  BIT_ADDR(GPIOC_IDR_Addr, 12) //����
#define PC13in  BIT_ADDR(GPIOC_IDR_Addr, 13) //����
#define PC14in  BIT_ADDR(GPIOC_IDR_Addr, 14) //����
#define PC15in  BIT_ADDR(GPIOC_IDR_Addr, 15) //����


//----------------------------------------------------
#define PD0   BIT_ADDR(GPIOD_ODR_Addr, 0)  //���
#define PD1   BIT_ADDR(GPIOD_ODR_Addr, 1)  //���
#define PD2   BIT_ADDR(GPIOD_ODR_Addr, 2)  //���
#define PD3   BIT_ADDR(GPIOD_ODR_Addr, 3)  //���
#define PD4   BIT_ADDR(GPIOD_ODR_Addr, 4)  //���
#define PD5   BIT_ADDR(GPIOD_ODR_Addr, 5)  //���
#define PD6   BIT_ADDR(GPIOD_ODR_Addr, 6)  //���
#define PD7   BIT_ADDR(GPIOD_ODR_Addr, 7)  //���
#define PD8   BIT_ADDR(GPIOD_ODR_Addr, 8)  //���
#define PD9   BIT_ADDR(GPIOD_ODR_Addr, 9)  //���
#define PD10  BIT_ADDR(GPIOD_ODR_Addr, 10) //���
#define PD11  BIT_ADDR(GPIOD_ODR_Addr, 11) //���
#define PD12  BIT_ADDR(GPIOD_ODR_Addr, 12) //���
#define PD13  BIT_ADDR(GPIOD_ODR_Addr, 13) //���
#define PD14  BIT_ADDR(GPIOD_ODR_Addr, 14) //���
#define PD15  BIT_ADDR(GPIOD_ODR_Addr, 15) //���


#define PD0in   BIT_ADDR(GPIOD_IDR_Addr, 0)  //����
#define PD1in   BIT_ADDR(GPIOD_IDR_Addr, 1)  //����
#define PD2in   BIT_ADDR(GPIOD_IDR_Addr, 2)  //����
#define PD3in   BIT_ADDR(GPIOD_IDR_Addr, 3)  //����
#define PD4in   BIT_ADDR(GPIOD_IDR_Addr, 4)  //����
#define PD5in   BIT_ADDR(GPIOD_IDR_Addr, 5)  //����
#define PD6in   BIT_ADDR(GPIOD_IDR_Addr, 6)  //����
#define PD7in   BIT_ADDR(GPIOD_IDR_Addr, 7)  //����
#define PD8in   BIT_ADDR(GPIOD_IDR_Addr, 8)  //����
#define PD9in   BIT_ADDR(GPIOD_IDR_Addr, 9)  //����
#define PD10in  BIT_ADDR(GPIOD_IDR_Addr, 10) //����
#define PD11in  BIT_ADDR(GPIOD_IDR_Addr, 11) //����
#define PD12in  BIT_ADDR(GPIOD_IDR_Addr, 12) //����
#define PD13in  BIT_ADDR(GPIOD_IDR_Addr, 13) //����
#define PD14in  BIT_ADDR(GPIOD_IDR_Addr, 14) //����
#define PD15in  BIT_ADDR(GPIOD_IDR_Addr, 15) //����


//----------------------------------------------------
#define PE0   BIT_ADDR(GPIOE_ODR_Addr, 0)  //���
#define PE1   BIT_ADDR(GPIOE_ODR_Addr, 1)  //���
#define PE2   BIT_ADDR(GPIOE_ODR_Addr, 2)  //���
#define PE3   BIT_ADDR(GPIOE_ODR_Addr, 3)  //���
#define PE4   BIT_ADDR(GPIOE_ODR_Addr, 4)  //���
#define PE5   BIT_ADDR(GPIOE_ODR_Addr, 5)  //���
#define PE6   BIT_ADDR(GPIOE_ODR_Addr, 6)  //���
#define PE7   BIT_ADDR(GPIOE_ODR_Addr, 7)  //���
#define PE8   BIT_ADDR(GPIOE_ODR_Addr, 8)  //���
#define PE9   BIT_ADDR(GPIOE_ODR_Addr, 9)  //���
#define PE10  BIT_ADDR(GPIOE_ODR_Addr, 10) //���
#define PE11  BIT_ADDR(GPIOE_ODR_Addr, 11) //���
#define PE12  BIT_ADDR(GPIOE_ODR_Addr, 12) //���
#define PE13  BIT_ADDR(GPIOE_ODR_Addr, 13) //���
#define PE14  BIT_ADDR(GPIOE_ODR_Addr, 14) //���
#define PE15  BIT_ADDR(GPIOE_ODR_Addr, 15) //���


#define PE0in   BIT_ADDR(GPIOE_IDR_Addr, 0)  //����
#define PE1in   BIT_ADDR(GPIOE_IDR_Addr, 1)  //����
#define PE2in   BIT_ADDR(GPIOE_IDR_Addr, 2)  //����
#define PE3in   BIT_ADDR(GPIOE_IDR_Addr, 3)  //����
#define PE4in   BIT_ADDR(GPIOE_IDR_Addr, 4)  //����
#define PE5in   BIT_ADDR(GPIOE_IDR_Addr, 5)  //����
#define PE6in   BIT_ADDR(GPIOE_IDR_Addr, 6)  //����
#define PE7in   BIT_ADDR(GPIOE_IDR_Addr, 7)  //����
#define PE8in   BIT_ADDR(GPIOE_IDR_Addr, 8)  //����
#define PE9in   BIT_ADDR(GPIOE_IDR_Addr, 9)  //����
#define PE10in  BIT_ADDR(GPIOE_IDR_Addr, 10) //����
#define PE11in  BIT_ADDR(GPIOE_IDR_Addr, 11) //����
#define PE12in  BIT_ADDR(GPIOE_IDR_Addr, 12) //����
#define PE13in  BIT_ADDR(GPIOE_IDR_Addr, 13) //����
#define PE14in  BIT_ADDR(GPIOE_IDR_Addr, 14) //����
#define PE15in  BIT_ADDR(GPIOE_IDR_Addr, 15) //����



#endif
