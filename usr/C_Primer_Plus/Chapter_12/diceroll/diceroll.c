#include <stdlib.h>
#include <stdio.h>
#include "diceroll.h"

int roll_count = 0;

static int rollem(int sides)
{
	++roll_count;
	return rand() % sides + 1;
}

int roll_n_dice(int dice, int sides)
{
	int total = 0;
	int d;

	if(sides < 2)
	{
		puts("Need at least 2 sides.");
		return -2;
	}
	if(dice < 1)
	{
		puts("Need at least 1 dice.");
		return -1;
	}
	for(d = 0; d < dice; d++)
		total += rollem(sides);

	return total;
}
