#include "pe12-3a.h"
#include <stdio.h>

void set_mode(int *mode)
{
	if(*mode != ME && *mode != US)
	{
		puts("Invaild mode spcified. Mode 1(US) mode.");
		*mode = US;
	}
}

void get_info(int mode, double *distance, double *fuel)
{
	if(mode == ME)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf", distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf", fuel);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
                scanf("%lf", distance);
                printf("Enter fuel consumed in gallons: ");
                scanf("%lf", fuel);
	}
}

void show_info(int mode, double distance, double fuel)
{
	if(mode == ME)
		printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel*100/distance);
	else
		printf("Fuel consumption is %.1lf miles per gallon.\n", distance/fuel);
}
