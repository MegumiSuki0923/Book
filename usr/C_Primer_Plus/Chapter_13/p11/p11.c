#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE	256

int main(int argc, char *argv[])
{
	FILE *fp;
	char string[SIZE];

	if(argc != 3)
	{
		fprintf(stderr, "Usage: %s string filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "Could not open file %s.\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while(fgets(string, SIZE, fp))
	{
		if(strstr(string, argv[1]))
			fputs(string, stdout);
	}
	fclose(fp);

	return 0;
}
