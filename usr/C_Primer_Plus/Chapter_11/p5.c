#include <stdio.h>
#include <stdbool.h>

#define SIZE	81

bool is_within(char *ar, char ch);

int main(void)
{
	char input[SIZE];
	char target;

	puts("Please enter a string:");
	while(gets(input) && input[0])
	{
		puts("Enter a character:");
		target = getchar();
		while(getchar() != '\n')
			continue;
		if(is_within(input, target))
			printf("%c is in the string %s.\n", target, input);
		else
			printf("%c is not in the string %s.\n", target, input);
		puts("enter the next string (enter to quit):");
	}

	return 0;
}

bool is_within(char *ar, char ch)
{
	for(; *ar != ch; ar++)
	{
		if(*ar++ == ch)
			return true;
	}
	return false;
}
