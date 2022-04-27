#include <stdio.h>

int main(void)
{
	int num;

	printf("Please enter a string to count:\n");
	while(getchar() != EOF)
		num++;

	printf("There are totally %d characters.\n", num);

	return 0;
}
