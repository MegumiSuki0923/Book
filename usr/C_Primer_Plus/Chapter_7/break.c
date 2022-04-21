#include <stdio.h>

int main(void)
{
	float width, length;

	printf("Please enter the length of rectangle:\n");
	while(scanf("%f", &length) == 1)
	{
		printf("Length is %.2f.\n", length);
		if(scanf("%f", &width) != 1)
			break;
		printf("Width is %.2f.\n", width);
		printf("Area is %.2f.\n", length*width);
		printf("Please enter the length of rectangle:\n");
	}

	printf("Invalid enter, done!\n");

	return 0;
}
