#include <stdio.h>
#include <stdarg.h>

double sum(int lim, ...);

int main(void)
{
	double s, t;

	s = sum(3, 1.9, 2.4, 3.5);
	t = sum(6, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6);

	printf("s = %.2f\n", s);
	printf("t = %.2f\n", t);

	return 0;
}

double sum(int lim, ...)	// ---1
{
	double total = 0.0;
	int i;

	va_list ap;		// ---2
	va_start(ap, lim);	// ---3
	for(i = 0;i < lim; i++)
		total += va_arg(ap, double);
	va_end(ap);

	return total;
}
