//
// Created by 19377 on 2025/8/17.
//

#include "key.h"

uint8_t key_scan(void){
    uint8_t keyNum = 0;
    HAL_Delay(10);
    if (HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin) == GPIO_PIN_RESET) {
        while (HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin) == GPIO_PIN_RESET) {
            HAL_Delay(10);
        }
        keyNum = 1;
    }
    if (HAL_GPIO_ReadPin(KEY2_GPIO_Port, KEY2_Pin) == GPIO_PIN_RESET) {
        while (HAL_GPIO_ReadPin(KEY2_GPIO_Port, KEY2_Pin) == GPIO_PIN_RESET) {
            HAL_Delay(10);
        }
        keyNum = 2;
    }
    return keyNum;
}