#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *source;
	FILE *target;
	int ch;

	if(argc != 3)
	{
		fprintf(stderr, "Usage: %s srcfilename tarfilename.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((source = fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr, "Could not open source file %s.\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if((target = fopen(argv[2], "wb")) == NULL)
	{
		fprintf(stderr, "Could not open target file %s.\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while((ch = getc(source)) != EOF)
	{
		putc(ch, target);
	}

	if(fclose(source) != 0)
		fprintf(stderr, "Could not close source file %s.\n", argv[1]);
	if(fclose(target) != 0)
		fprintf(stderr, "Could not close target file %s.\n", argv[2]);

	return 0;
}
