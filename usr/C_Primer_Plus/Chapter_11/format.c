#include <stdio.h>

#define MAX	20

int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;

	puts("Enter your fist name:");
	gets(first);
	puts("Enter your last name:");
	gets(last);
	puts("Enter your price money:");
	scanf("%lf", &prize);
	sprintf(formal, "%s %s: $%6.2lf", first, last, prize);
	puts(formal);

	return 0;
}
