#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	double n;
	double sum = 0.0;
	int ct = 0;

	if(argc == 1)
		fp = stdin;
	else if(argc == 2)
	{
		fp = fopen(argv[1], "r");

		if(fp == NULL)
		{
			fprintf(stderr, "Could not open file %s.\n", argv[1]);
			exit(1);
		}
	}
	else
	{
		fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
		exit(1);
	}

	while(fscanf(fp, "%lf", &n) == 1)
	{
		sum += n;
		++ct;
	}
	if(ct > 0)
		printf("The average of %d values = %.2lf.\n", ct, sum/ct);
	else
		fprintf(stderr, "No vaild data.\n");

	if(argc == 2)
		fclose(fp);

	return 0;
}
