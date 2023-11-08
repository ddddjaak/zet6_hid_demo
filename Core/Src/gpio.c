/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

}

/* USER CODE BEGIN 2 */
void LED_Init(void)
{
  GPIO_InitTypeDef  GPIO_Initure; 
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();

  GPIO_Initure.Pin=GPIO_PIN_5; //PB5 
  GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP; //推挽输出 
  GPIO_Initure.Pull=GPIO_PULLUP; //上拉
  GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH; //高速 
  HAL_GPIO_Init(GPIOB,&GPIO_Initure); 

  GPIO_Initure.Pin=GPIO_PIN_5; //PE5 
  HAL_GPIO_Init(GPIOE,&GPIO_Initure); 

  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET); 

  HAL_GPIO_WritePin(GPIOE,GPIO_PIN_5,GPIO_PIN_SET); 
}
/* USER CODE END 2 */
