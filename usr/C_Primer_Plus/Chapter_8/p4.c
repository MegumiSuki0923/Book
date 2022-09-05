#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	int input;
	int word_cnt = 0;
	int characters_cnt = 0;
	bool word_flag = false;

	printf("Please enter the string:\n");
	while((input = getchar()) != EOF)
	{
		if(!isspace(input) && !ispunct(input))
		{
			characters_cnt++;
			if(!word_flag)
			{
				word_cnt++;
				word_flag = true;
			}
		}

		if(isspace(input) || ispunct(input))
		{
			word_flag = false;
		}
	}

	printf("%d characters are read.\n", characters_cnt);
	printf("%d words are read.\n", word_cnt);
	printf("The average number of each words are %.2f\n", (float)characters_cnt/(float)word_cnt);

	return 0;
}
