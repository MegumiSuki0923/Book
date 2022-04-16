#include <stdio.h>

int main(void)
{
	char ch;
	int num, i, j, k;

	printf("Please enter a char:\n");
	scanf("%c", &ch);

	num = ch - 'A';
	for(i = 0; i < num; i++)
	{
		for(j = i; j < num; j--)
			printf(" ");
		for(k = 0; k < i + 1; i++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}
