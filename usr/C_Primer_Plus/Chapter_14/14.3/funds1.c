#include <stdio.h>

#define MAXFUND	40

struct funds {
	char bankname[MAXFUND];
	double bandfund;
	char fundname[MAXFUND];
	double savefund;

};

double sum(double x, double y);

int main(void)
{
	struct funds stan = {
		"Garlic-Melon Band",
		3024.72,
		"Lucky's Saving and Loan",
		9237.11
	};

	printf("Stan has a total of $%.2lf.\n", sum(stan.bandfund, stan.savefund));

	return 0;
}

double sum(double x, double y)
{
	return (x+y);
}
