#include <stdio.h>

void to_binary(unsigned long u);

int main(void)
{
	unsigned int number;

	printf("Please enter a number to convert (q to quit):\n");
	while(scanf("%uld", &number) == 1)
	{
		printf("Binary equivalen: ");
		to_binary(number);
		putchar('\n');
		printf("Please enter a number to convert (q to quit):\n");
	}
	printf("Bye!\n");

	return 0;
}

void to_binary(unsigned long u)
{
	int r;
	r = u % 2;

	if(u >= 2)
		to_binary(u / 2);

	putchar('0' + r);
}
