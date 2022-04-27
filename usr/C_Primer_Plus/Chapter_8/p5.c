#include <stdio.h>

int main(void)
{
	int guess = 50;
	char response;
	int high = 100, low = 0;

	printf("Pick an integer from 1 to 100. I will try to guess.\n");
	printf("Response with 'y' if my guess is right and with 'n' if my guess is wrong.\n");
	printf("Is your number %d?\n", guess);

	while((response = getchar()) != 'y')
	{
		if(response == 'h')
			high = guess - 1;
		else if(response = 'l')
			low = guess + 1;
		else
			printf("Sorry, please just enter 'y' or 'n'\n");

		guess = (high + low) / 2;
		printf("Is your number %d?\n", guess);

		while(getchar() != '\n')
			continue;
	}

	printf("I know I could do it!\n");

	return 0;
}
