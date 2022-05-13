#include <stdio.h>

void put1(const char * string)
{
	int i = 0;
	while(*string) // while(string[i] != '\0') // while(*string != '\0')
		// ++的运算级别较高，所以结合的是string++，而不是(*string)++
		putchar(string[i++]);
	putchar('\n');
}
