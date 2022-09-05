#include <stdio.h>

#define COWS	3
#define COLS	5

void show(int ar[][COLS], int n);
void doubled(int src[][COLS], int tar[][COLS], int n);

int main(void)
{
	int source[COWS][COLS] = {{1, 2, 3, 4, 5}, {2, 3, 4 ,5, 6}, {3, 4, 5, 6, 7}};
	int target[COWS][COLS];

	printf("The original one:\n");
	show(source, COWS);

	doubled(source, target, COWS);
	printf("The doubled one:\n");
	show(target, COWS);

	return 0;
}

void doubled(int src[][COLS], int tar[][COLS], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < COLS; j++)
			tar[i][j] = 2 * src[i][j];
	}
}

void show(int ar[][COLS], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < COLS; j++)
			printf("%d ", ar[i][j]);
		printf("\n");
	}
}
