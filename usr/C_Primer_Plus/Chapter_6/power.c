#include <stdio.h>

double power(double n, int p);

int main(void)
{
	double x, xpow;	// xpow = x ^ exp
	int exp;

	printf("Enter a num and the integer power:\n");
	while(scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3f to the power %d is %.5f\n", x, exp, xpow);
		printf("Please enter the next number:\n");
	}

	printf("Bye!\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;

	for(int i = 1; i <= p; i++)
		pow *= n;	//1*n 1*n*n 1*n*n*n

	return pow;
}
