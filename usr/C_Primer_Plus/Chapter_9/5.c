#include <stdio.h>

void larger_of(double *d1, double *d2);

int main(void)
{
	double x, y;

	printf("Please enter two double value:\n");
	scanf("%lf %lf", &x, &y);
	printf("Now x is %.2lf and y is %.2lf\n", x, y);
	larger_of(&x, &y);
	printf("After x is %.2lf and y is %.2lf\n", x, y);

	return 0;
}

void larger_of(double *d1, double *d2)
{
	*d1 = *d2 = (*d1 > *d2) ? *d1 : *d2;
}
