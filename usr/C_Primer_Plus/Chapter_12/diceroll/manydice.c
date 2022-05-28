#include <stdio.h>
#include "diceroll.h"
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sides, dice, roll;

	srand((unsigned int)time(0));

	puts("Enter the number of sides per dice, 0 to stop.");
	while(scanf("%d", &sides) == 1 && sides > 0)
	{
		puts("How many dice?");
		scanf("%d", &dice);
		roll = roll_n_dice(dice, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
		puts("Enter the number of sides per dice, 0 to stop.");
	}

	printf("The rollem() is called %d times.\n", roll_count);

	return 0;
}
