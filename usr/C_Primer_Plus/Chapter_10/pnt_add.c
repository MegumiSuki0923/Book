#include <stdio.h>

#define SIZE	4

int main(void)
{
	short dates[SIZE];
	short * pti;
	short index;
	double bills[SIZE];
	double *ptf;

	ptf = bills;

	for(index = 0; index < SIZE; index++)
		printf("pointer + %d = %p\n", index, ptf+index);


	return 0;
}
