#include <stdio.h>

int main(void)
{
	int count = 0;
	char ch;

	printf("Please enter a string (enter # to quit):\n");
	while((ch = getchar()) != '#' && ch != '\n')
	{
		printf("%c %d\t", ch, ch);
		count++;
		if(count % 8 == 0)
			printf("\n");
	}
	printf("\nDone\n");

	return 0;
}
