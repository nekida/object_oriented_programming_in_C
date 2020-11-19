#ifndef RADAR_H
#define RADAR_H

#include "antenna.h"

typedef struct {
	antenna super; 		//наследование от класса antenna

	uint16_t voltage;
	uint16_t frequency;
} radar;

//конструктор
void radar_constructor (radar * const me, uint16_t init_phase, uint16_t init_att, uint16_t init_volt, uint16_t init_freq);

#endif
