#include <stdio.h>
#include <string.h>

#define LIM	20
#define SIZE	81

void stsrt(char *string[], int num);

int main(void)
{
	char input[LIM][SIZE];
	char *ptstr[LIM];
	int cnt = 0;

	printf("Input up to %d lines, and I will sort them.\n", LIM);
	printf("To stop, press the Enter key at a line's start.\n");
	while(cnt < LIM && gets(input[cnt]) && input[cnt][0] != '\0')
	{
		ptstr[cnt] = input[cnt];
		cnt++;
	}
	stsrt(ptstr, cnt);
	puts("Here is the sorted list:");
	for(int i = 0; i < cnt; i++)
		puts(ptstr[i]);

	return 0;
}

void stsrt(char *string[], int num)
{
	char *temp;

	for(int i = 0; i < num-1; i++)
	{
		for(int j = i+1; j < num; j++)
		{
			if(strcmp(string[i], string[j]) > 0)
			{
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
}
