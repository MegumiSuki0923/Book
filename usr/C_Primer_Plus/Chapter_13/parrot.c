#include <stdio.h>

#define MAX	20

int main(void)
{
	char line[MAX];

	while(fgets(line, MAX, stdin) != NULL && line[0] != '\n')
		fputs(line, stdout);

	return 0;
}
