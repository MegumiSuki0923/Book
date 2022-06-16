#include <stdio.h>

#define MAXFUND	40

struct funds {
	char bankname[MAXFUND];
	double bankfund;
	char fundname[MAXFUND];
	double savefund;

};

double sum(struct funds money);

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Band",
		3024.72,
		"Lucky's Saving and Loan",
		9237.11
	};

	printf("Stan has a total of $%.2lf.\n", sum(stan));

	return 0;
}

double sum(struct funds money)
{
	return (money.bankfund + money.savefund);
}
