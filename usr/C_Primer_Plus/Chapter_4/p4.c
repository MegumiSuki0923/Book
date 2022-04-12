#include <stdio.h>

int main(void)
{
	char name[20];
	float height;

	printf("Please enter your name:\n");
	scanf("%s", name);
	printf("Please enter your height(in inch): ");
	scanf("%f", &height);

	printf("%s, you are %0.3f feet tall\n", name, height);

	return 0;
}
