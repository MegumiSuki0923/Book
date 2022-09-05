#include <stdio.h>

int main(void)
{
	int age;

	printf("Please enter your age: ");
	scanf("%d", &age);
	double seconds = age * 3.156e7f;
	printf("%d have %e seconds.\n", age, seconds);

	return 0;
}
