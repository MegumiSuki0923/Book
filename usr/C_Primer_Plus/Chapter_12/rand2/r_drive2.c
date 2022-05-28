#include <stdio.h>
#include <time.h>

extern unsigned int rand1(void);
extern void srand1(unsigned int seed);

int main(void)
{
	int count;
	unsigned int seed;

	srand1(time(0));      // srand1(seed);
	for(count = 0; count < 5; count++)
		printf("%d ", rand1());
	putchar('\n');

	return 0;
}
