#include <stdio.h>

#define SIZE	81

char *get_pos(char *str, char ch);

int main(void)
{
	char input[SIZE];
	char ch;
	char *pt;

	puts("Please enter a string:");
	while(gets(input) && input[0] != '\0')
	{
		puts("Which character do you want to find?");
		ch = getchar();
		while(getchar() != '\n');
		pt = get_pos(input, ch);
		if(pt == NULL)
			printf("Could not find character %c.\n", ch);
		else
			printf("The character %c in %p.\n", ch, pt);
		puts("Enter the next string:");
	}

	return 0;
}

char *get_pos(char *str, char ch)
{
	while(*str != '\0')
	{
		if(*str++ == ch)
			return str;
	}
	return NULL;
}
