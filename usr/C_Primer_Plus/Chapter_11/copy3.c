#include <stdio.h>
#include <string.h>

#define LIM	5
#define SIZE	40
#define TARGET	7

int main(void)
{
	int count = 0;
	char qwords[LIM][TARGET];
	char temp[SIZE];

	printf("Please enter %d words beginning with q:\n", LIM);
	while(count < LIM && gets(temp))
	{
		if(strncmp(temp, "q", 1) != 0)// if(temp[0] != 'q')
			printf("%s doesn't begin with q\n", temp);
		else
		{
			strncpy(qwords[count], temp, TARGET - 1);
			qwords[count][TARGET-1] = '\0';
			count++;
		}
	}
	puts("Here are the word accept:");
	for(count = 0; count < LIM; count++)
		puts(qwords[count]);

	return 0;
}
