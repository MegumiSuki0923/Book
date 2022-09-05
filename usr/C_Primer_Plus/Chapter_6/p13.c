#include <stdio.h>

#define SIZE	8

int main(void)
{
	double num1[SIZE], num2[SIZE];
	double sum;

	printf("Please enter the numbers:\n");
	for(int i = 0; i < SIZE; i++)
		scanf("%lf", &num1[i]);

	for(int i = 0; i < SIZE; i++)
	{
		sum += num1[i];
		num2[i] = sum;
	}

	for(int i = 0; i < SIZE; i++)
		printf("%.2lf\t", num1[i]);
	printf("\n");

	for(int i = 0; i < SIZE; i++)
		printf("%.2lf\t", num2[i]);
	printf("\n");

	return 0;
}
