#include "radar.h"

void radar_constructor (radar * const me, uint16_t init_phase, uint16_t init_att, uint16_t init_volt, uint16_t init_freq)
{
	antenna_constructor(&me->super, init_phase, init_att);

	me->voltage = init_volt;
	me->frequency = init_freq;
}