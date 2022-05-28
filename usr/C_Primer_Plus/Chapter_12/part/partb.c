#include <stdio.h>

extern int count;

static int total = 0;

void accumlate(int k)
{
	// static默认是0
	static int subtotal = 0;

	if(k > 0)
	{
		subtotal += k;
		total += k;
	}
	else
	{
		printf("Loop cycle: %d.\n", count);
		printf("subtotal = %d, total = %d\n", subtotal, total);
		subtotal = 0;
	}
}
