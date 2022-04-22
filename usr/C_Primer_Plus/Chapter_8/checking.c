#include <stdio.h>
#include <stdbool.h>

int get_int(void);
bool bad_limit(int begin, int end, int low, int high);
int sum_squares(int a, int b);

int main(void)
{
	const int MIN = -1000;
	const int MAX = 1000;

	int start, stop, sum = 0;

	printf("This program computes the sum of the squares of integers in a range.\n");
	printf("The lower bound should not be less than -1000.\n");
	printf("The upper bound should not be more than 1000.\n");

	printf("Enter the limits:\n");
	printf("lower limit: ");
	start = get_int();
	printf("upper limit: ");
	stop = get_int();

	while(start != 0 || stop != 0)
	{
		if(bad_limit(start, stop, MIN, MAX))
			printf("Please try again.\n");
		else
		{
			sum = sum_squares(start, stop);
		}
	}

	return 0;
}

int get_int(void)
{
	int input;
	char ch;

	while(scanf("%d", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\n");
		printf("Please enter a integer value: ");
	}
	return input;
}

bool bad_limit(int begin, int end, int low, int high)
{
	bool not_good = false;

	if(begin > end)
	{
		printf("%d is smaller than %d.\n", begin, end);
		not_good = true;
	}
	else if(begin < low || end < low)
	{
		printf("Values must be lager.\n");
		not_good = true;
	}
	else if(begin > high || end > high)
	{
		printf("Values must be lower.\n");
		not_good = true;
	}

	return not_good;
}

int sum_squares(int a, int b)
{
	int total = 0;

	for(int i = a; i <= b; i++)
		total += i*i;

	return total;
}
