#ifndef ANTENNA_H
#define ANTENNA_H

#include <stdint.h>
#include <stdio.h>

typedef struct {
	uint16_t phase;
	uint16_t att;
} antenna;

void antenna_constructor (antenna * const me, uint16_t init_phase, uint16_t init_att);
void antenna_change (antenna * const me, uint16_t new_phase, uint16_t new_att);
uint16_t antenna_get_ph (antenna * const me);
uint16_t antenna_get_att (antenna * const me);

#endif