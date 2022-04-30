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
	double ans = 1;

	for(int i = 1; i <= pow; i++)
	{
		ans *= num;
	}

	return ans;
}
