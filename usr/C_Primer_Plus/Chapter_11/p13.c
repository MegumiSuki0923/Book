#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int exp;
	double num;

	if(argc != 3)
		printf("Usage %s number exponent.\n", argv[0]);
	else
	{
		num = atof(argv[1]);
		exp = atoi(argv[2]);

		printf("%.2f to the power %d = %.2f.\n", num, exp, pow(num, exp));
	}

	return 0;
}
