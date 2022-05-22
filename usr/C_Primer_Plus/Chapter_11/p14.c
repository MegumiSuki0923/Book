#include <stdio.h>

#define SIZE	81

int main(int argc, char *argv[])
{
	char str[SIZE];
	while(gets(str) && str[0] != '\0')
	{
		my_atoi(str);
	}

	return 0;
}
