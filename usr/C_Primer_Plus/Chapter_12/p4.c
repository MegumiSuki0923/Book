#include <stdio.h>

int Demo(void);

int main(void)
{
	for(int i = 0; i < 10; i++)
		printf("The Demo function is called %d times.\n", Demo());

	return 0;
}

int Demo(void)
{
	static int times;
	times++;

	return times;
}
