#include <stdio.h>

int main(void)
{
	float f1, f2;
	printf("Please enter two float number:\n");
	while(scanf("%f %f", &f1, &f2) == 2)
	{
		float temp = (f1 - f2)/(f1*f2);
		printf("The result is %2f\n", temp);
	}
	printf("Done\n");

	return 0;
}
