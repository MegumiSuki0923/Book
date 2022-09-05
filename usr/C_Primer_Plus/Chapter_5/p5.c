#include <stdio.h>

int main(void)
{
	int i, days, income, sum;
	i = days = income = sum = 0;

	printf("Which day do you want to know?\n");
	scanf("%d", &days);

	while(i++ < days)
	{
		income++;
		printf("day %d: $%d	", i, income);
		sum = sum + income;
	}
	printf("\n");
	printf("Total sum is %d\n", sum);

	return 0;
}
