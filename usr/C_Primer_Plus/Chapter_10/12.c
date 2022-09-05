#include <stdio.h>

#define COWS	3
#define COLS	5

void get_input(int m, int n, double ar[m][n]);
void get_mean(int m, int n, double ar[m][n]);
void show(int m, int n, const double ar[m][n]);
void get_max(int m, int n, double ar[m][n]);

int main(void)
{
	double input[COWS][COLS];

	printf("Please enter 5 double value in 3 loops:\n");
	get_input(COWS, COLS, input);

	get_mean(COWS, COLS, input);

	get_max(COWS, COLS, input);

	show(COWS, COLS, input);

	return 0;
}

void get_input(int m, int n, double ar[m][n])
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			scanf("%lf", &ar[i][j]); // *(ar + i) + j
	}
}

void get_mean(int m, int n, double ar[m][n])
{
	double col_sum;

	for(int i = 0; i < m; i++)
	{
		col_sum = 0.0;
		for(int j = 0; j < n; j++)
		{
			col_sum += ar[i][j];
		}
		printf("line %d: %.2lf\n", i+1, col_sum/n);
	}

}

void get_max(int m, int n, double ar[m][n])
{
	double max;
	max = ar[0][0];

	for(int i = 0; i < m; i++)
        {
                for(int j = 0; j < n; j++)
		{
			if(ar[i][j] > max)
				max = ar[i][j];
		}
	}

	printf("The max is %.2lf\n", max);
}

void show(int m, int n, const double ar[m][n])
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%.2lf ", ar[i][j]);
		printf("\n");
	}

}
