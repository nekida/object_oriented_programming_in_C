#include "encapsulation_antenna.h"
#include <stdio.h>

int main (void)
{
	antenna a1, a2;

	//инициализируем объекты
	antenna_constructor(&a1, 1, 1);
	antenna_constructor(&a2, 2, 2);

	printf("Объект a1 класса antenna стартует с данными: фаза = %d, аттенюация = %d\n", antenna_get_ph(&a1), antenna_get_att(&a1));
	printf("Объект a2 класса antenna стартует с данными: фаза = %d, аттенюация = %d\n", antenna_get_ph(&a2), antenna_get_att(&a2));

	//изменили данные (суммирование с начальными)
	antenna_change(&a1, 11, 11);
	antenna_change(&a2, 22, 22);

	printf("Объект a1 класса antenna работает с данными: фаза = %d, аттенюация = %d\n", antenna_get_ph(&a1), antenna_get_att(&a1));
	printf("Объект a2 класса antenna работает с данными: фаза = %d, аттенюация = %d\n", antenna_get_ph(&a2), antenna_get_att(&a2));

	return 0;
}