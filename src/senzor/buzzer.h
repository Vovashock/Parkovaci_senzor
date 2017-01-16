/*
 * buzzer.h
 *
 *  Created on: 15. 1. 2017
 *      Author: MisoPC
 */

#ifndef BUZZER_H_
#define BUZZER_H_

#include "stm32l1xx.h"

void Init_Buzzer(void);
void Set_channel(int premenna);
void Set_Low (void);
void Set_Med (void);
void Set_High (void);
void Set_None(void);

#endif /* BUZZER_H_ */
