#include <stdio.h>

extern unsigned int rand0(void);

int main(void)
{
	int count;

	for(count = 0; count < 5; count++)
		printf("%d ", rand0());
	putchar('\n');

	return 0;
}
