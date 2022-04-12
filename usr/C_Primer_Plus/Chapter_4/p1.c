#include <stdio.h>

int main(void)
{
	char fname[20], lname[20];
	printf("Please enter your name:\n");
	scanf("%s %s", fname, lname);
	printf("Hi!%s %s.\n", fname, lname);

	return 0;
}
