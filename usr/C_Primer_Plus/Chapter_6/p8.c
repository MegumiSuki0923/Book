#include <stdio.h>

float func(float f1, float f2);

int main(void)
{
	float f1, f2;
	printf("Please enter two float number:\n");
	while(scanf("%f %f", &f1, &f2) == 2)
		printf("The result is %2f\n", func(f1, f2));
	printf("Done\n");

	return 0;
}

float func(float f1, float f2)
{
	return (f1-f2) / (f1*f2);
}
