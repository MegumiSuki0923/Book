#include <stdio.h>

int main(void)
{
	int feet, fathoms;
	fathoms = 2;
	feet = fathoms * 6;

	printf("There is %d feet in %d fathoms.\n", feet, fathoms);
	printf("Yes, I said %d feet.\n", fathoms*6);

	return 0;
}
