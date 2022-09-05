#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch;
	long count = 0;

	if(argc != 2)
	{
		printf("Usage: %s filename.\n", argv[0]);
		exit(1); // or exit(EXIT_FAILURE)
	}

	// "r", read only
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s.\n", argv[1]);
		exit(1);
	}

	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %ld characters.\n", argv[1], count);

	return 0;
}
