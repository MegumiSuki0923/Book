#include <stdio.h>
#include <float.h>

int main(void)
{
	double dval = 1.0 / 3.0;
	float fval = 1.0 / 3.0;

	printf("%.4f %.8f %.12f\n", dval, dval, dval);
	printf("%.4f %.8f %.12f\n", fval, fval, fval);

	printf("DBL_DIG: %d\n", DBL_DIG);
	printf("FLT_DIG: %d\n", FLT_DIG);

	return 0;
}
