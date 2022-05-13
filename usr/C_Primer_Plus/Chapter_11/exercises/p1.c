#include <stdio.h>

#define SIZE	20

int main(void)
{
	char ar[SIZE];

	puts("Enter a string:");
	get_str(ar, SIZE);

	return 0;
}

void get_str(char *ar, int n)
{
	gets(ar)

}
