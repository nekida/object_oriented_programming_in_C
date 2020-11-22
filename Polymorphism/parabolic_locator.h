#ifndef PARABOLIC_LOCATOR_H
#define PARABOLIC_LOCATOR_H

#include "antenna.h"

typedef struct {
	antenna super; 		//наследование от класса antenna

	uint32_t radius;
} parabolic_locator;

//конструктор
void parabolic_locator_constructor (parabolic_locator * const me, uint16_t init_freq, uint32_t init_radius);

#endif
