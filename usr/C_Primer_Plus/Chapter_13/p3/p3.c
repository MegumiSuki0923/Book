#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE	81

int main(void)
{
	FILE *source;
	FILE *target;
	int ch;

	char src[SIZE];
	char tar[SIZE];

	puts("Please enter the source file:");
	gets(src);
	puts("Please enter the target file:");
	gets(tar);

	if((source = fopen(src, "r")) == NULL)
	{
		fprintf(stderr, "Could not open source file %s.\n", src);
		exit(EXIT_FAILURE);
	}
	if((target = fopen(tar, "w")) == NULL)
	{
		fprintf(stderr, "Could not open target file %s.\n", tar);
		exit(EXIT_FAILURE);
	}

	while((ch = getc(source)) != EOF)
	{
		ch = toupper(ch);
		putc(ch, target);
	}

	if(fclose(source) != 0)
		fprintf(stderr, "Could not close source file %s.\n", src);
	if(fclose(target) != 0)
		fprintf(stderr, "Could not close target file %s.\n", tar);

	return 0;
}
