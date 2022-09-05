#include <stdio.h>

#define COVERAGE	200

int main(void)
{
	int sq_feet;
	int cans;

	printf("Please enter the number of square feet to be painted:\n");
	while(scanf("%d", &sq_feet) == 1)
	{
		cans = (sq_feet%COVERAGE == 0)?(sq_feet/COVERAGE):(sq_feet/COVERAGE + 1);
		printf("You need %d %s to print.\n", cans, (cans > 1)?"cans":"can");
		printf("Please enter the number of square feet to be painted:\n");
	}

	return 0;
}
