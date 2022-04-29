#include <stdio.h>

void mikdo(int bah);

int main(void)
{
	int pooh = 2, bah = 5;

	printf("In main(), pooh = %d and &pooh = %p.\n", pooh, &pooh);
	printf("In main(), bah = %d and &bah = %p.\n", bah, &bah);

	mikdo(pooh);

	return 0;
}

void mikdo(int bah)
{
	int pooh = 10;

	printf("In mikdo(), pooh = %d and &pooh = %p.\n", pooh, &pooh);
	printf("In main(), bah = %d and &bah = %p.\n", bah, &bah);
}
