#include <stdio.h>

int main(void)
{
	int input, count = 0;

	printf("Please enter the characters:\n");
	while((input = getchar()) != EOF)
	{
		if(input == '\n')
			printf("\\n|%d ", input);
		else if(input == '\t')
			printf("\\t|%d ", input);
		else if(input >= 0 && input < ' ')
			printf("^%c|%d ", input+64, input);
		else
			printf("%c|%d ", input, input);

		count++;
		if(count % 10 == 0)
			printf("\n");
	}
	printf("\n");


	return 0;
}
