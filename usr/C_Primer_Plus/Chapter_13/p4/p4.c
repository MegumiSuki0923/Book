#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, ch;
	FILE *fp;

	if(argc < 2)
	{
		fprintf(stderr, "Please enter more arguments.\n");
		exit(EXIT_FAILURE);
	}

	for(i = 1; i < argc; i++)
	{
		if((fp = fopen(argv[i], "r")) == NULL)
		{
			fprintf(stderr, "Could not open file %s.\n", argv[i]);
			exit(EXIT_FAILURE);
		}

		puts("***********************************");
		while((ch = getc(fp)) != EOF)
		{
			putc(ch, stdout);
		}
		puts("***********************************");

		fclose(fp);
	}
	puts("Done!");

	return 0;
}
