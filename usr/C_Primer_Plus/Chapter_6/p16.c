#include <stdio.h>

int main(void)
{
	double cl_money = 1000000;
	int year;

	while(cl_money > 0)
	{
		year++;
		printf("%d year\n", year);
		cl_money += (1 + 0.08)*cl_money;
		cl_money -= 100000;
	}

	printf("After %d years, he take all of his money\n", year);

	return 0;
}
