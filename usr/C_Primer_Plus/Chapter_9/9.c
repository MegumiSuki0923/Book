#include <stdio.h>

void to_base_n(int n, int base);

int main(void)
{
	int number, b;

	printf("Please enter a number to convert (q to quit):\n");
	while(scanf("%d", &number) == 1)
	{
		printf("Enter number base (2 ~ 10): ");
		scanf("%d", &b);
		printf("Base equivalent:\n");
		to_base_n(number, b);
		putchar('\n');
		printf("Please enter a number to convert (q to quit):\n");
	}
	printf("Bye!\n");

	return 0;
}

void to_base_n(int n, int base)
{
	int r;
	r = n % base;

	if(n >= base)
		to_base_n(n / base, base);

	putchar('0' + r);
}
