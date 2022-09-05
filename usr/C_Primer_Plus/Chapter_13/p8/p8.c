#include <stdio.h>
#include <stdlib.h>

#define SIZE		41

int main(int argc, char *argv[])
{
	char ch1, ch2;
	char filename[SIZE];
	FILE *fp;
	int count = 0;
	int i;

	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s character [filename1] [filename2] ...\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	ch1 = argv[1][0];

	if(argc == 2)
	{
		puts("Please enter the file name:");
		gets(filename);
		if((fp = fopen(filename, "r")) == NULL)
		{
			fprintf(stderr, "Could not open file %s.\n", filename);
			exit(EXIT_FAILURE);
		}

		while((ch2 = getc(fp)) != EOF)
		{
			if(ch1 == ch2)
				count++;
		}

		fclose(fp);
		printf("There are %d characters in file %s.\n", count, filename);
	}
	else
	{
		for(i = 2; i < argc; i ++)
		{
			if((fp = fopen(argv[i], "r")) == NULL)
			{
				fprintf(stderr, "Could not open file %s.\n", argv[i]);
				continue;
			}

			count = 0;
			while((ch2 = getc(fp)) != EOF)
			{
				if(ch1 == ch2)
					count++;
			}
			fclose(fp);
			printf("There are %d characters in file %s.\n", count, argv[i]);
		}
	}


	return 0;
}
