#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
	int input;

	printf("Please enter a string:\n");
	input = get_first();
	putchar(input);
	printf("\n");

	return 0;
}

char get_first(void)
{
	int first;

	while(isspace(first = getchar()));

	return first;
}
