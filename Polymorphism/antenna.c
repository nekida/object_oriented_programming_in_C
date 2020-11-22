#include "antenna.h"
#include <assert.h>

//прототип виртуальной функций класса antenna
static uint32_t antenna_get_square_ (antenna const * const me);

//конструктор
void antenna_constructor (antenna * const me, uint16_t init_freq)
{
	static struct antenna_vtbl const vtbl = { //виртуальная таблица
		&antenna_get_square_
	};

	me->vptr = &vtbl;	//указатель на таблицу

	me->freq = init_freq;
}

/* реализации класса antenna его виртуальной функции */
static uint32_t antenna_get_square_ (antenna const * const me) 
{
    assert(0); /* чисто виртуальная функция никогда не должна вызываться */
    return 0U; /* чтобы избежать предупреждений компилятора */
}


/* находим антенну с наибольшей площадью */
antenna const *get_antenna_with_max_square (antenna const *antennas[], uint32_t n_antennas) 
{
    antenna const *s = (antenna *)0;
    uint32_t max = 0U;
    uint32_t temp = 0U;
     
    for (uint32_t i = 0; i < n_antennas; i++) {
        temp = antenna_get_square(antennas[i]); /* виртуальный вызов */
        if (temp > max) {
            max = temp;
            s = antennas[i];
        }
    }
 
    return s; /* антенна с самой большой площадью в массиве antennas[] */
}
