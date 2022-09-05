#include <stdio.h>
#include <string.h>

#define SIZE 20

int main(void)
{
	char str[SIZE];

	printf("Please enter a string:\n");
	scanf("%c", str);

	for(int i = strlen(str); i > 0, i--)
	{
		printf("%c", str[i]);
	}
	printf("\n")

	return 0;
}
