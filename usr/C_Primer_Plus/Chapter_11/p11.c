#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE	81

int main(void)
{
	char str[SIZE];
	char *pt;
	pt = str;

	int low_cnt = 0;
	int up_cnt = 0;
	int dig_cnt = 0;
	int punc_cnt = 0;
	int word_cnt = 0;
	bool inword = false;

	puts("Enter a string:");
	gets(str);

	while(*pt++ != '\0')
	{
		if(islower(*pt))
			low_cnt++;
		else if(isupper(*pt))
			up_cnt++;
		else if(isdigit(*pt))
			dig_cnt++;
		else if(ispunct(*pt))
			punc_cnt++;

		if(!isspace(*pt) && !inword)
		{
			inword = true;
			word_cnt++;
		}
		if(isspace(*pt) && inword)
			inword = false;
	}
	printf("lower = %d, upper = %d, digit = %d, punct = %d, word = %d.\n", low_cnt, up_cnt, dig_cnt, punc_cnt, word_cnt);

	return 0;
}
