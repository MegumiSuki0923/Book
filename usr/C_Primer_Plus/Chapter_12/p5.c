#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE	100

int main(void)
{
	srand(time(0));
	int numbers[SIZE];

	for(int i = 0; i < SIZE; i++)
		numbers[i] = rand() % 10 + 1;

	printf("The original list is\n");
	for(int i = 1; i <= SIZE; i++)
	{
		printf("%d ", numbers[i - 1]);
		if(i % 10 == 0)
			putchar('\n');
	}

	for(int i = 0; i < SIZE - 1; i++)
	{
		int temp;
		for(int j = i + 1; j < SIZE; j++)
		{
			if(numbers[j] < numbers[i])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	printf("After sort\n");
       	for(int i = 1; i <= SIZE; i++)
       	{
               	printf("%d ", numbers[i - 1]);
               	if(i % 10 == 0)
                       	putchar('\n');
       	}


	return 0;
}

