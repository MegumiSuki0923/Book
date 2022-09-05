#include <stdio.h>

#define ROWS	3
#define COLS	5

void copy(int m, int n, double src[m][n], double tar[m][n]);
void show(int m, int n, double ar[m][n]);

int main(void)
{
	double source[ROWS][COLS] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}};
	double target[ROWS][COLS];

	copy(ROWS, COLS, source, target);

	printf("The original array:\n");
	show(ROWS, COLS, source);
	printf("The target array:\n");
	show(ROWS, COLS, target);

	return 0;
}

void copy(int m, int n, double src[m][n], double tar[m][n])
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			tar[i][j] = src[i][j];
	}
}

void show(int m, int n, double ar[m][n])
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%.2lf ", ar[i][j]);
		printf("\n");
	}
}
