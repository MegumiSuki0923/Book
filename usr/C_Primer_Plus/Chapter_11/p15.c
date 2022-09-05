#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		puts("Not enough arguments.");
		return 0;
	}

	if(strcmp(argv[1], "-p") != 0 && strcmp(argv[1], "-u") != 0 && strcmp(argv[1], "-l") != 0)
	{
		puts("Please enter -p, -u, or -l.");
		return 0;
	}

	if(strcmp(argv[1], "-p") == 0)
		puts(argv[2]);
	else if(strcmp(argv[1], "-u") == 0)
	{
		for(int i = 0; i < strlen(argv[2]); i++)
			putchar(toupper(argv[2][i]));
		putchar('\n');
	}
	else if(strcmp(argv[1], "-l") == 0)
	{
		for(int i = 0; i < strlen(argv[2]); i++)
			putchar(tolower(argv[2][i]));
		putchar('\n');
	}

	return 0;
}
