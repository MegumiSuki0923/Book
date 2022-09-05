#include <stdio.h>

int main(void)
{
	int num, limit;

	printf("Please enter a number:\n");
	scanf("%d", &num);

	limit = num + 10;

	printf("Here are the output:\n");
	while(num <= limit)
	{
		printf("%d\t", num);
		num++;
	}

	printf("\n");

	return 0;
}
