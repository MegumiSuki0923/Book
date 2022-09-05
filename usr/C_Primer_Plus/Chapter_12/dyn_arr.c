#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int max, num, i = 0;
	double *ptd;

	puts("What is the maximum number of type double entries?");
	scanf("%d", &max);
	ptd = (double *)malloc(max * sizeof(double));

	if(ptd == NULL)
	{
		puts("Memory allocation failed, good bye.");
		exit(EXIT_FAILURE);
	}

	puts("Enter the values (q to quit)");
	while(i < max && scanf("%lf", ptd + i) == 1)
		i++;

	printf("Here are your %d entries.\n", num = i);
	for(i = 0; i < num; i++)
	{
		printf("%7.2lf ", *(ptd + i));
		if(i % 7 == 6)
			putchar('\n');
	}
	if(i % 7 != 0)
		putchar('\n');

	puts("Done!");

	free(ptd);

	return 0;
}
