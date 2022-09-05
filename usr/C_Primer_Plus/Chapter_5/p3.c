#include <stdio.h>
#define D_PER_W 7

int main(void)
{
	int days, weeks, left;

	printf("Please enter the days to convert:\n");
	scanf("%d", &days);

	weeks = days / D_PER_W;
	left = days % D_PER_W;

	printf("%d days are %d weeks, %d days.\n", days, weeks, left);

	return 0;
}
