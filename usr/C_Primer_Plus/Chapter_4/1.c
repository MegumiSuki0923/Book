#include <stdio.h>

int main(void)
{
	char name[40];

	printf("Please enter your name: ");
	scanf("%s", name);
	printf("hello, %s\n", name);

	return 0;
}
