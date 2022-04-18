#include <stdio.h>

int main(void)
{
	int lower, upper, sum;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &lower, &upper);

	while(lower != upper)
	{
		sum = 0;
		for(int i = lower; i <= upper; i++)
			sum += i*i;
		printf("The sum of the squares from %d and %d is %d\n", lower*lower, upper*upper, sum);
		printf("Enter next set of limits: ");
		scanf("%d %d", &lower, &upper);
	}
	printf("Done\n");

	return 0;
}
