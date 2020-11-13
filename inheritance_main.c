#include "inheritance_radar.h"
#include <stdio.h>

int main (void)
{
	radar r1, r2;

	//инициализируем объекты
	radar_constructor(&r1, 1, 1, 24, 1000);
	radar_constructor(&r2, 2, 2, 27, 10000);

	printf("Объект r1 класса radar стартует с данными: фаза = %d, аттенюация = %d, напряжение питания = %d, рабочая частота = %d\n", antenna_get_ph(&r1.super), antenna_get_att(&r1.super), r1.voltage, r1.frequency);
	printf("Объект r2 класса radar стартует с данными: фаза = %d, аттенюация = %d, напряжение питания = %d, рабочая частота = %d\n", antenna_get_ph(&r2.super), antenna_get_att(&r2.super), r2.voltage, r2.frequency);

	//изменили данные супер класса(суммирование с начальными)
	antenna_change((antenna *)&r1, 11, 11);
	antenna_change(&r2.super, 22, 22);

	printf("Объект r1 класса radar работает с данными: фаза = %d, аттенюация = %d\n", antenna_get_ph(&r1.super), antenna_get_att(&r1.super));
	printf("Объект r2 класса radar работает с данными: фаза = %d, аттенюация = %d\n", antenna_get_ph(&r2.super), antenna_get_att(&r2.super));

	return 0;
}