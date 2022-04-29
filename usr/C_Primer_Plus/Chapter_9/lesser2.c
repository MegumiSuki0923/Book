#include <stdio.h>

int imin(int m, int n);

int main(void)
{
	int evil1, evil2;

	printf("Enter a pair of integers (q to quit):\n");
	while(scanf("%d %d", &evil1, &evil2) == 2)
	{
		printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
		printf("Enter the next pair of integers (q to quit):\n");
	}

	return 0;
}

int imin(int m, int n)
{
	return (m > n) ? n : m;
}
