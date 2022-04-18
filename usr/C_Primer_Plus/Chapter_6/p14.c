#include <stdio.h>

#define SIZE 255

int main(void)
{
	char str[SIZE];
	int i = 0;

	printf("Please enter a string:\n");
	for(int i = 0; i < 10; i++)
		scanf("%c", &str[i]);

	for(int i = 10 - 1; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");

	return 0;
}
