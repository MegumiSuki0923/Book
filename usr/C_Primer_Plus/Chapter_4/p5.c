#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[20];
	char lname[20];

	printf("Please enter your fname: ");
	scanf("%s", fname);
	printf("Please enter your lname: ");
	scanf("%s", lname);

	printf("%15s %15s\n", fname, lname);
	printf("%15d %15d\n", strlen(fname), strlen(lname));

	printf("%-15s %-15s\n", fname, lname);
	printf("%-15d %-15d\n", strlen(fname), strlen(lname));

	return 0;
}
