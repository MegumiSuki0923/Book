#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE	40

int main(void)
{
	char name_in[SIZE];
	char name_out[SIZE];

	int ch;

	FILE *in, *out;

	int count = 0;

	puts("Please enter the file name:");
	gets(name_in);

	if((in = fopen(name_in, "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", name_in);
		exit(EXIT_FAILURE);
	}
	strcpy(name_out, name_in);
	strcat(name_out, ".red");

	if((out = fopen(name_out, "a")) == NULL)
	{
		fprintf(stderr, "Could not create file.\n");
		exit(EXIT_FAILURE);
	}
	while((ch = getc(in)) != EOF)
	{
		if(count++ % 3 == 0)
			putc(ch, out);
	}
	if(fclose(in) || fclose(out))
		fprintf(stderr, "Could not close files.\n");

	return 0;
}
