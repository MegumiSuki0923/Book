#include <stdio.h>
#include <string.h>

char stack[512];
int top = 0;

void push(char c);
char pop(void);
int is_empty(void);
int is_polindrom(char *pt);

int main(void)
{
	char str[100];

	puts("Please enter a string:");
	gets(str);

	if(is_polindrom(str))
		printf("str is a polindrom.\n");
	else
		printf("str is not a polindrom.\n");

	return 0;
}

void push(char c)
{
	stack[top++] = c;
}

char pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}

int is_polindrom(char *pt)
{
	int len, i;

	len = strlen(pt);

	for(i = 0; i < len / 2; i++)
		push(pt[i]);

	if(len % 2 == 1)
		i++;

	while(!is_empty())
	{
		if(pop() == pt[i])
			i++;
		else
			return 0;
	}
	return 1;
}
