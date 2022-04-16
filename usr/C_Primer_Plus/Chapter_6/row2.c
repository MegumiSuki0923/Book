// ABCDEFGHIJ
// BCDEFGHIJ
// CDEFGHIJ
// ......

#include <stdio.h>

int main(void)
{
	const int chars = 10;
	const int rows = 10;

	for(int i = 0; i < rows; i++)
	{
		for(char ch = 'A'+i; ch < 'A'+chars; ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}
