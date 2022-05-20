#include <stdio.h>
#include <string.h>

#define SIZE	81

int mainn(void)
{
	char input[SIZE];

	puts("Please enter a string:");
	while(gets(input) && input[0] != '\0')
	{
		reverse(input);
		puts(input);
		puts("Enter the next string:");
	}

	return 0;
}

void reverse(char *str)
{
	int len = strlen(str);
	char temp;

	for(int i = 0; i < len/2; i++)
}
