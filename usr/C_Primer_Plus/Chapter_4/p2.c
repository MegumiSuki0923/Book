#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[20], lname[20];
	printf("Please enter your name:\n");
	scanf("%s %s", fname, lname);
//	printf("Hi!%*s %*s.\n", (int)strlen(fname), fname, (int)strlen(lname), lname);
	printf("%*s", strlen(fname)+3, fname);

	return 0;
}
