/**
  ******************************************************************************
  * @file           : shift_registers.h
  * @brief          : Header for shift_registers.c file.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SHIFT_REGISTERS_H__
#define __SHIFT_REGISTERS_H__

#include "stm32f1xx_hal.h"
#include "common_types.h"
#include "periphery.h"

void ShiftRegistersInit(app_config_t * p_config);
void ShiftRegistersProcess (buttons_state_t * button_state_buf, uint8_t * pov_buf, app_config_t * p_config, uint8_t * pos);

#endif 	/* __SHIFT_REGISTERS_H__ */
