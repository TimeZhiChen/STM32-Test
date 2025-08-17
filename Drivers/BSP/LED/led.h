//
// Created by 19377 on 2025/8/17.
//

#ifndef STM32_TEST_LED_H
#define STM32_TEST_LED_H

#include "main.h"

#define led1(x) x ? HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET):\
                    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET)
#define led2(x) x ? HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET):\
                    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET)


#endif //STM32_TEST_LED_H