#include <stdio.h>




int main(void)
{
	long double RADIUS, VOLUME;

	VOLUME = 0, RADIUS = 10;

	long double PI = 22.0f / 7.0f;
	

	VOLUME = 4.0f / 3.0f * PI * (RADIUS * RADIUS);

printf("%Lf\n", VOLUME);

	return 0;
}