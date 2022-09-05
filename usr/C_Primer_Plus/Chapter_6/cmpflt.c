#include <stdio.h>
#include <math.h>

int main(void)
{
	const double pi = 3.14159;
	const double response;

	printf("What is the value of pi?\n");
	scanf("%lf", &response);

	while(fabs(response - pi) > 0.0001)
	{
		printf("Try again!");
		scanf("%lf", &response);
	}

	printf("Close enough.\n");

	return 0;
}
