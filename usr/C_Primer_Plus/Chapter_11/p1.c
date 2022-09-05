#include <stdio.h>

#define SIZE	81

void get_str(char *ar, int n);

int main(void)
{
	char ar[SIZE];
	int len;

	puts("How many characters do you want to save?");
	scanf("%d", &len);
	getchar();
	puts("Please enter a string:");
	gets(ar);
	puts(ar);
	get_str(ar, len);
	puts(ar);

	return 0;
}

void get_str(char *ar, int n)
{
	for(; n < SIZE; n++)
		*(ar + n) = '\0';
}
