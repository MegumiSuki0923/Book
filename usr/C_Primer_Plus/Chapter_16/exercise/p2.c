#include <stdio.h>

#define HARMONIC_AVERAGE(X, Y)	((2*(X)*(Y))/((X)+(Y)))

int main(void)
{
	double x = 6.0;
	double y = 8.0;

	printf("The harmonization average of 6 and 8 is %.2lf\n", HARMONIC_AVERAGE(x, y));

	return 0;
}
