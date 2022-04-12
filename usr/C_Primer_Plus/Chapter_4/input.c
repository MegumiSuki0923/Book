#include <stdio.h>

int main(void)
{
	int age;
	float assets;
	char pet[40];

	printf("Please enter your age, assets and favorite pet:\n");

	scanf("%d %f %s", &age, &assets, pet);

	printf("%d %.2f %s\n", age, assets, pet);

	return 0;
}
