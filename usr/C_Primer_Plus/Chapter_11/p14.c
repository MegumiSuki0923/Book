#include <stdio.h>
#include <ctype.h>

#define SIZE	81

int my_atoi(char *ptr);

int main(int argc, char *argv[])
{
	char str[SIZE];
	puts("Please enter a number string:");
	while(gets(str) && str[0] != '\0')
	{
		printf("%d\n", my_atoi(str));
		puts("Next again");
	}

	return 0;
}

int my_atoi(char *ptr)
{
	int sign = 1, num = 0;

	while(isspace(*ptr))
		ptr++;
	if(*ptr == '-')
	{
		sign = -1;
		ptr++;
	}
	if(*ptr == '+')
	{
		sign = 1;
		ptr++;
	}
	else
	{
		while(isdigit(*ptr))
		{
			num = (num * 10) + (*ptr - '0');
			ptr++;
		}
	}

	return num*sign;
}
