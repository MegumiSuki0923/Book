#include <stdio.h>

int main(void)
{
	int ch, upper_cnt = 0, lower_cnt = 0;

	printf("Please enter a character:\n");

	while((ch = getchar()) != EOF)
	{
		if(ch >= 'a' && ch <= 'z')
			lower_cnt++;
		if(ch >= 'A' && ch <= 'Z')
			upper_cnt++;
	}

	printf("upper_cnt is %d, lower_cnt is %d\n", upper_cnt, lower_cnt);

	return 0;
}
