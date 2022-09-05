#include <stdio.h>

extern unsigned int rand1(void);
extern void srand1(unsigned int seed);

int main(void)
{
	int count;
	unsigned int seed;

	puts("Please enter your choice for seed:");
	while(scanf("%d", &seed) == 1)
	{
		srand1(seed);
		for(count = 0; count < 5; count++)
			printf("%d ", rand1());
		putchar('\n');
		puts("Please enter the next choice for seed:");
	}
	putchar('\n');

	return 0;
}
