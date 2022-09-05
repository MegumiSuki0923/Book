#include <stdio.h>

#define SIZE	10

int sum(int *start, int *end);

int main(void)
{
	int marbles[SIZE] = {10, 25, 5, 39, 4, 16, 19, 26, 31, 20};
	int answer;
	answer = sum(marbles, marbles + SIZE);
	printf("The total number of marbles is %d.\n", answer);

	return 0;
}

int sum(int *start, int *end)
{
	int total = 0;

	while(start < end)
	{
		// total += *start;
		// start++;
		total += *start++;
	}

	return total;
}
