#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool charloc(char ch);

int main(void)
{
	char ch;
	bool is_alpha;

	printf("Please enter a string:\n");
	while((ch = getchar()) != EOF)
	{
		is_alpha = isalpha(ch);
		if(is_alpha)
			printf("%c is a alpha.\n", ch);
		charloc(ch);
	}

	return 0;
}

bool charloc(char ch)
{
	if(isalpha(ch))
	{
		ch = tolower(ch);
		printf("%c in %d\n", ch, ch - 96);
	}
	else
		return -1;

}
