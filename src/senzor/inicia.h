/*
 * inicia.h
 *
 *  Created on: 11. 1. 2017
 *      Author: MisoPC
 */

#ifndef INICIA_H_
#define INICIA_H_

#include <stddef.h>
#include "stm32l1xx.h"

void Ultrasonic_init(void);
void Init_Pipak (void);
void Init_interrupt1(void);
void Init_interrupt2(void);
void Init_interrupt3(void);

#endif /* INICIA_H_ */
