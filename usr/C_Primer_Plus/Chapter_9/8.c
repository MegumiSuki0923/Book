#include <stdio.h>

double power(double num, int pow);

int main(void)
{
	double num;
	int pow;

	printf("Enter a number and it's power:\n");
	scanf("%lf %d", &num, &pow);
	printf("The power is %.2lf.\n", power(num, pow));

	return 0;
}

double power(double num, int pow)
{
	double p = 1.0;

	if(pow == 0)
	{
		if(num == 0)
			printf("0 power 0 is undefined.\n");
		p = 1.0;
	}
	else if(num == 0)
		p = 0.0;
	else if(pow > 0)
		p = num*power(num, pow - 1);
	else
		p = 1/power(num, -pow);

	return p;
}
