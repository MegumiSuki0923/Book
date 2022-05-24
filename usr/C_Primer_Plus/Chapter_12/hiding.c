#include <stdio.h>

int main(void)
{
	int x = 30;
	printf("The outer is %d.\n", x);

	{
		int x = 77;
		printf("The inter is %d.\n", x);
	}

	printf("The outer is %d.\n", x);

	while(x++ < 33)
	{
		int x = 100;
		x++;
		printf("x in while loop is %d.\n", x);
	}

	return 0;
}
