#include <stdio.h>

#define NUM 	1.0

int main(void)
{
	int times;
	int sign = 1;
	double sum1, sum2;

	printf("Please enter the times: ");
	scanf("%d", &times);

	for(float i = 1.0; i <= times;i++, sign *= (-1))
	{
		sum1 += NUM/i;
		sum2 += sign*NUM/i;
	}

	printf("Sum1 is %lf\n", sum1);
	printf("Sum2 is %lf\n", sum2);

	return 0;
}
