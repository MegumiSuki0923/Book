#include <stdio.h>

int main(void)
{
	int i, days, sum;
	i = days = sum = 0;

	printf("Which day do you want to know?\n");
	scanf("%d", &days);

	while(i++ < days)
		sum = sum + i*i;

	printf("Total sum is %d\n", sum);

	return 0;
}
