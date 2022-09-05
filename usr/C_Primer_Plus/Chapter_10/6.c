#include <stdio.h>

void copy_arr(double src[][3], double tar[][3], int n);
void show_arr(double ar[][3], int n);

int main(void)
{
	double source[2][3] = {
		{2, 4, 6},
		{6, 8, 10}
	};

	double target[2][3];

	copy_arr(source, target, 2);
	show_arr(target, 2);


	return 0;
}

void copy_arr(double src[][3], double tar[][3], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 3; j++)
			tar[i][j] = src[i][j];
	}
}

void show_arr(double ar[][3], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 3; j++)
			printf("%.2lf ", ar[i][j]);
		printf("\n");
	}
}
