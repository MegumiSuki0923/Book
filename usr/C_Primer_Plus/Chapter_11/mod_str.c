#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define LIM	81

void Toupper(char *str);
int PunctCount(const char *str);

int main(void)
{
	char line[LIM];

	puts("Please enter a line:");
	gets(line);
	Toupper(line);
	puts(line);
	printf("The line has %d punctuation characters.\n", PunctCount(line));

	return 0;
}

void Toupper(char *str)
{
	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
}

int PunctCount(const char *str)
{
	int cnt = 0;

	while(*str)
	{
		if(ispunct(*str))
			cnt++;
		str++;
	}

	return cnt;
}
