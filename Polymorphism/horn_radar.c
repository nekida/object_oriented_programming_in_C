#include "horn_radar.h"

//прототип виртуальной функции класса antenna
static uint32_t horn_radar_get_square_ (antenna const * const me);

void horn_radar_constructor (horn_radar * const me, uint16_t init_freq, uint32_t init_width, uint32_t init_height)
{
	static struct antenna_vtbl const vtbl = { //виртуальная таблица
		&horn_radar_get_square_
	};

	antenna_constructor(&me->super, init_freq);

	me->super.vptr = &vtbl;

	me->width = init_width;
	me->height = init_height;
}

/* реализация подкласса horn_radar его виртуальной функции */
static uint32_t horn_radar_get_square_ (antenna const * const me) 
{
    horn_radar const * const me_ = (horn_radar const *)me; /* явное приведение вниз */
    return (me_->width * me_->height);
}
 