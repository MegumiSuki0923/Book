#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;

	printf("Please enter a character to show animal (enter # to quit):\n");
	while(ch = getchar() != '#')
	{
		if(ch == '\n')
			continue;
		ch = tolower(ch);
		switch(ch)
		{
			case 'a':
				printf("ant\n");
				break;
			case 'b':
				printf("bee\n");
				break;
			default:
				printf("I love all animals\n");
				break;
		}
	}

	return 0;
}
