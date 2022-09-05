#include <stdio.h>

int main(void)
{
	int uplim, downlim;
	printf("Please enter the up limit: ");
	scanf("%d", &uplim);
	printf("Please enter the down limit: ");
	scanf("%d", &downlim);

	for(int i = downlim; i <= uplim; i++)
		printf("%2d: %3d  %3d\n", i, i*i, i*i*i);

	return 0;
}
