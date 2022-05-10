#include <stdio.h>

#define SIZE	10

// int sum(int ar[], int n);
int sum(int *ar, int n);

int main(void)
{
	int marbles[SIZE] = {10, 25, 5, 39, 4, 16, 19, 26, 31, 20};
	int answer;
	answer = sum(marbles, SIZE);
	printf("The total number of marbles is %d.\n", answer);
	// sizeof 用 %zd
	printf("The size of marbles is %zd bytes.\n", sizeof(marbles));

	return 0;
}

// int sum(int ar[], int n)
int sum(int *ar, int n)
{
	int total = 0;

	for(int i = 0; i < n; i++)
		total += ar[i];
	printf("The size of ar is %zd bytes.\n", sizeof(ar));

	return total;
}
