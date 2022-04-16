#include <stdio.h>

#define LETTER	26

int main(void)
{
	char letter[LETTER];
	int index;
//	char ch;

	for(index = 0; index < LETTER; index++)
		letter[index] = 'a' + index;
	for(index = 0; index < LETTER; index++)
		printf("%c", letter[index]);
	printf("\n");

	return 0;
}
