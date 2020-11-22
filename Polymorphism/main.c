#include "horn_radar.h"
#include "parabolic_locator.h"
#include <stdio.h>

int main (void)
{
	horn_radar r1, r2;
	parabolic_locator l1, l2;

	antenna const *antennas[] = {
		&r1.super,
		&l1.super,
		&r2.super,
		&l2.super
	};

	antenna const *antenna_with_max_square;

	horn_radar_constructor(&r1, 11, 5, 5);
	horn_radar_constructor(&r2, 22, 6, 6);

	parabolic_locator_constructor(&l1, 33, 100);
	parabolic_locator_constructor(&l2, 44, 10);

	antenna_with_max_square = get_antenna_with_max_square(antennas, sizeof(antennas) / sizeof(antennas[0]));
	printf("Самая большая антенна имеет рабочую частоту: %d\n", antenna_with_max_square->freq);

	return 0;
}