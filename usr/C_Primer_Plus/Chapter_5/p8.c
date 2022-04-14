#include <stdio.h>

void Temperatures(double te);

int main(void)
{
	double temp;

	printf("Please enter a temperature in fahrenheit: ");

	while(scanf("%lf", &temp))
	{
		Temperatures(temp);
		printf("Please enter the next temperature in fahrenheit (enter q to quit): ");
	}
	printf("bye\n");

	return 0;
}

void Temperatures(double te)
{
	const double KELVIN = 273.16;
	const double CEL_1 = 1.8;
	const double CEL_2 = 32.0;

	double cel = CEL_1 * te + CEL_2;
	double kel = cel + KELVIN;

	printf("Fahrenheit is %.2lf\n", te);
	printf("Celsius is %.2lf\n", cel);
	printf("Kelvin is %.2lf\n", kel);
}

