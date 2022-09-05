#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP	'|'

int main(void)
{
	char ch, pre;
	unsigned int n_chars = 0, n_lines = 0, n_words = 0, p_lines = 0;
	bool inword = false;

	while((ch = getchar()) != STOP)
	{
		n_chars++;
		if(ch == '\n')
			n_lines++;

		if(!isspace(ch) && !inword)
		{
			n_words++;
			inword = true;
		}

		if(isspace(ch) && inword)
			inword = false;

		pre = ch;
	}

	if(pre != '\n')
		p_lines++;

	printf("Charaters = %u, and lines = %u, and words = %u\n", n_chars, n_lines, n_words);
	printf("Particial lines = %u\n", p_lines);

	return 0;
}
