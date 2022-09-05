#include <stdio.h>
#define M_PER_H 60

int main(void)
{
	int time, hours, min;

	printf("Please enter the time in minutes(<= 0 to quit):\n");
	scanf("%d", &time);

	while(time > 0)
	{
		hours = time / M_PER_H;
		min = time % M_PER_H;
		printf("%d hours %d minutes\n", hours, min);
		printf("Enter the next time(<= 0 to quit):\n");
		scanf("%d", &time);
	}

	return 0;
}
