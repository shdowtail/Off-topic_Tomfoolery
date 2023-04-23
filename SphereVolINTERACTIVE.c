#include <stdio.h>

int main(void)
{
	int RADIUS;
	long double VOLUME = 0.0f, PI = 22.0f / 7.0f;
	
	printf("Enter the height of a box: ");
    scanf("%d", &RADIUS);
	

	VOLUME = 4.0f / 3.0f * PI * (RADIUS * RADIUS);

	printf("%Lf\n", VOLUME);

	return 0;
}