#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sets, sides, dice;
	int j, sum;

	srand((unsigned int)time(0));
	printf("Enter the number of sets, enter q to stop:\n");
	while(scanf("%d", &sets) == 1 && sets > 0)
	{
		printf("How many sides and how many dice?\n");
		scanf("%d %d", &sides, &dice);
		printf("Here are %d sets of %d %d-sides throws.\n", sets, dice, sides);
		for(int i = 0; i < sets; i++)
		{
			for(j = 0, sum = 0; j < dice; j++)
				sum += rand() % sides + 1;
			printf("%5d", sum);
			if(i % 5 == 4)
				putchar('\n');
		}
		putchar('\n');
		printf("Enter the number of sets, enter q to stop:\n");
	}

	return 0;
}
