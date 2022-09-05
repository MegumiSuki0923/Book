#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE	40

int main(int argc, char *argv[])
{
	char name[SIZE];
	int ch;

	FILE *in, *out;

	int count = 0;

	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s filaname.\n", argv[0]);
		exit(1);
	}
	if((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", argv[1]);
		exit(2);
	}
	strcpy(name, argv[1]);
	strcat(name, ".red");

	if((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "Could not create file.\n");
		exit(3);
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
