#include <stdio.h>

int main(void)
{
	double da_money, de_money, da_rate, de_rate;
	int year = 0;

	da_money = de_money = 100;
	da_rate = 0.1;
	de_rate = 0.05;
	while(da_money >= de_money)
	{
		year++;
		da_money += 100*da_rate;
		de_money *= (1 + de_rate);
	}
	printf("After %d years, da_money < de_money\n", year);
	printf("Daphne: %.2lf	Deirdre: %.2lf\n", da_money, de_money);

	return 0;
}
