#include <stdio.h>

int main(void)
{
	int n_spaces, n_lines, n_other;
	n_spaces = n_lines = n_other = 0;
	char ch;

	printf("Please enter a string (enter # to quit):\n");
	while((ch = getchar()) != '#')
	{
		if(ch == ' ')
			n_spaces++;
		else if(ch == '\n')
			n_lines++;
		else
			n_other++;
	}

	printf("n_spaces = %d, n_lines = %d, n_other = %d\n", n_spaces, n_lines, n_other);

	return 0;
}
