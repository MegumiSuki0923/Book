#include <stdio.h>

#define MAXFUND	40
#define N	2

struct funds {
	char bankname[MAXFUND];
	double bankfund;
	char fundname[MAXFUND];
	double savefund;

};

double sum(const struct funds money[], int n);

int main(void)
{
	struct funds jones[2] = {
		{
			"Garlic-Melon Band",
			3024.72,
			"Lucky's Saving and Loan",
			9237.11
		},
		{
			"Honest Jack's Bank",
			3534.28,
			"Party Time Savings",
			3203.89
		}
	};

	printf("The jones has a total of $%.2lf.\n", sum(jones, N));

	return 0;
}

double sum(const struct funds money[], int n)
{
	double total;
	int i;
	for(i = 0; i < n; i++)
		total += money[i].bankfund + money[i].savefund;
	return total;
}
