#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE	10

void show_the_chosen(int array[], int max, int times);

int main(void)
{
	int array[SIZE] = {1, 2, 3 ,4 ,5 ,6, 7, 8, 9, 10};
	int times;

	printf("Please enter a number to show the numbers: \n");
	while(scanf("%d", &times) == 1 && times > 0 && times < SIZE)
	{
		show_the_chosen(array, SIZE, times);
		printf("Please enter a number to show the numbers: \n");
	}

	return 0;
}

void show_the_chosen(int array[], int max, int times)
{
	int i;
	int temp[max];
	int count = 0;
	srand((unsigned int)time(NULL));

	while(1)
	{
		i = rand() % max;

		if(temp[i] != -1)
		{
			printf("%5d", array[i]);
			temp[i] = -1;
			count++;
		}

		if(count == times)
			break;
	}
	putchar('\n');
}
