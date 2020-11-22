#ifndef ANTENNA_H
#define ANTENNA_H

#include <stdint.h>

struct antenna_vtbl;	//предварительное объявление

typedef struct {
	struct antenna_vtbl const *vptr;	//виртуальный указатель
	uint16_t freq;
} antenna;

struct antenna_vtbl {
	uint32_t (*square)(antenna const * const me);	//получить площадь
};

void antenna_constructor (antenna * const me, uint16_t init_freq);


//реализцация виртуальной функции
static inline uint32_t antenna_get_square (antenna const * const me) 
{
    return (*me->vptr->square)(me);
}
 
/* общие операции с коллекциями antenna */
antenna const *get_antenna_with_max_square (antenna const *antennas[], uint32_t n_antennas);

#endif