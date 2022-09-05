#include <stdio.h>

void print_triangle(int n);

int main(void)
{
	int n;

	printf("Please enter the line you want to create:\n");
	scanf("%d", &n);
	print_triangle(n);

	return 0;
}

void print_triangle(int n)
{
	int i, j, k;

	int triangle[n][n];

	// 先将三角形的元素置1
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n ; j++)
			triangle[i][j] = 1;
	}

	for(i = 0; i < n; i++)
	{
		for(j = 1; j < i; j++)
		{
				triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
		}
	}

	for(i = 0; i < n; i++)
	{
		for(k = 2*(n-i); k > 0; k--)
			printf(" ");
		for(j = 0; j <= i; j++)
			printf("%4d", triangle[i][j]);
		printf("\n");
	}

}
