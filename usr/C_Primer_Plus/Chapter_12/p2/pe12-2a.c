#include "pe12-2a.h"
#include <stdio.h>

void set_mode(int num)
{
	if(num != 1 && num != 0)
	{
		puts("Invaild mode spcified. Mode 1(US) mode.");
		mode = 1;
	}
	else
		mode = num;
}

void get_info(void)
{
	if(mode == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%d", &distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf", &fuel);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
                scanf("%d", &distance);
                printf("Enter fuel consumed in gallons: ");
                scanf("%lf", &fuel);
	}
}

void show_info(void)
{
	if(mode == 0)
		printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel*100/distance);
	else
		printf("Fuel consumption is %.1lf miles per gallon.\n", distance/fuel);
}
