#include <stdio.h>
#include <string.h>
#define PRAISE "what a super marvalous name!"

int main(void)
{
	char name[40];

	printf("Please enter your name: ");
	scanf("%s", name);
	printf("hello, %s\n", name);

	printf("Your name of %d letters occupies %d memory.\n",
		strlen(name), sizeof(name));

	printf("The PRAISE has %d letters.\n", strlen(PRAISE));
	printf("The PRAISE occupies %d memory.\n", sizeof(PRAISE));

	return 0;
}
