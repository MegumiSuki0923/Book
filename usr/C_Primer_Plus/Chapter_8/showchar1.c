#include <stdio.h>

void display(char cr, int lines, int width);

int main(void)
{
	int ch, rows, cols;

	printf("Enter a character and two integers:\n");
	while((ch = getchar()) != '\n')
	{
		if(scanf("%d %d", &rows, &cols) != 2)
		{
			printf("Wrong input, try again!\n");
			continue;
		}
		display(ch, rows, cols);
		printf("Enter another character and two integers:\n");
		printf("Enter a newline to quit.\n");
		while(getchar() != '\n')
			continue;
	}
	printf("Bye\n");

	return 0;
}

void display(char cr, int lines, int width)
{
	for(int i = 1; i <= lines; i++)
	{
		for(int j = 1; j <= width; j++)
			printf("%c", cr);
		printf("\n");
	}
}
