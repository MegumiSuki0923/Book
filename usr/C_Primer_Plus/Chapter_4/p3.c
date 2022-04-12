#include <stdio.h>

int main(void)
{
	float input;

	printf("Please enter a number:\n");
	scanf("%f", &input);
	printf("The input is %0.1f or %0.1e.\n", input, input);
	printf("The input is %+0.3f or %0.3E.\n", input, input);

	return 0;
}
