// print ABCDEFGHIJ
//	 ABCDEFGHIJ
//	 ......

#include <stdio.h>

#define CHARS	10
#define ROWS	10

int main(void)
{

	for(int i = 0; i < ROWS; i++)
	{
		for(char ch = 'A'; ch < ('A'+CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}
