#include <stdio.h>
#include "hotel.h"

int menu(void)
{
	int status, choice;

	printf("%s\n", STARTS);
	printf("Enter the number of desired hotel:\n");
	printf("1) Fairfield Arms	2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza	4) The Stockton\n");
	printf("5) Quit\n");
	printf("%s\n", STARTS);

	while((status = scanf("%d", &choice)) != 1 || choice < 0 || choice > 5)
	{
		if(status != 1)
			scanf("%*s");
		printf("Please enter the right number.\n");
	}

	return choice;
}

int getnights(void)
{
	int nights, status;

	printf("How many nights do you need?\n");
	while((status = scanf("%d", &nights)) != 1 || nights <= 0)
	{
		if(status != 1)
			scanf("%*s");
		printf("PLease enter the right number.\n");
	}

	return nights;
}

void showprice(double d, int n)
{
	double total = 0.0;
	double factor = 1.0;

	for(int i = 1; i <= n; i++, factor *= DISCOUNT)
	{
		total += d * factor;
	}

	printf("The total cost is %.2f\n", total);
}
