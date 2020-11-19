#include "antenna.h"

//конструктор
void antenna_constructor(antenna * const me, uint16_t init_phase, uint16_t init_att)
{
	me->phase = init_phase;
	me->att = init_att;
}

void antenna_change (antenna * const me, uint16_t new_phase, uint16_t new_att)
{
	me->phase += new_phase;
	me->att += new_att;
}

uint16_t antenna_get_ph (antenna * const me)
{
	return me->phase;
}

uint16_t antenna_get_att (antenna * const me)
{
	return me->att;
}

