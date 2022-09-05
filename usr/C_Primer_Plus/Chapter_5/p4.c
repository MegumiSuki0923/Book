#include <stdio.h>
#define CM_PER_INCH	2.54
#define INCH_PER_FEET	12

int main(void)
{
	double cm, inches, left;
	int feet;

	printf("Enter a height in centimeters: ");
	scanf("%lf", &cm);

	while(cm > 0)
	{
		inches = cm / CM_PER_INCH;
		feet = inches / INCH_PER_FEET;
		left = inches - feet * INCH_PER_FEET;
		printf("%.1lf cm = %d feet, %.1lf inches\n", cm, feet, left);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%lf", &cm);
	}
	printf("bye\n");

	return 0;
}
