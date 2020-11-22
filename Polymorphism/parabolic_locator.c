#include "parabolic_locator.h"

//прототип виртуальной функции класса antenna
static uint32_t parabolic_locator_get_square_ (antenna const * const me);

void parabolic_locator_constructor (parabolic_locator * const me, uint16_t init_freq, uint32_t init_radius)
{
	static struct antenna_vtbl const vtbl = { //виртуальная таблица
		&parabolic_locator_get_square_
	};

	antenna_constructor(&me->super, init_freq);

	me->super.vptr = &vtbl;

	me->radius = init_radius;

}

/* реализация подкласса parabolic_locator его виртуальной функции */
static uint32_t parabolic_locator_get_square_ (antenna const * const me) 
{
    parabolic_locator const * const me_ = (parabolic_locator const *)me; /* явное приведение вниз */
    return (uint32_t)((double)me_->radius * 3.14 * 3.14);
}
