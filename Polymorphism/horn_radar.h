#ifndef HORN_RADAR_H
#define HORN_RADAR_H

#include "antenna.h"

typedef struct {
	antenna super; 		//наследование от класса antenna

	uint32_t width;
	uint32_t height; 
} horn_radar;

//конструктор
void horn_radar_constructor (horn_radar * const me, uint16_t init_freq, uint32_t init_width, uint32_t init_height);

#endif
