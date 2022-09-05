#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	int ch1, ch2;

	if(argc != 3)
	{
		fprintf(stderr, "Usage: %s filename1 filename2.\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if((fp1 = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if((fp2 = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	ch1 = getc(fp1);
	ch2 = getc(fp2);

	while(ch1 != EOF || ch2 != EOF)
	{
		while(ch1 != '\n' && ch1 != EOF)
		{
			putchar(ch1);
			ch1 = getc(fp1);
		}
		if(ch1 != EOF)
		{
			if(ch2 == EOF)
				putchar('\n');
			else
				putchar(' ');

			ch1 = getc(fp1);
		}
		while(ch2 != '\n' && ch2 != EOF)
		{
			putchar(ch2);
			ch2 = getc(fp2);
		}
		if(ch2 != EOF)
		{
			putchar('\n');
			ch2 = getc(fp2);
		}
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
