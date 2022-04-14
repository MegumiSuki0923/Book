#include <stdio.h>

void show_sq(float fl);

int main(void)
{
	float num;

	printf("Please enter a number to show it's square: ");
	scanf("%f", &num);

	show_sq(num);

	return 0;
}

void show_sq(float fl)
{
	printf("number %.2f: %.2f\n", fl, fl*fl*fl);
}
