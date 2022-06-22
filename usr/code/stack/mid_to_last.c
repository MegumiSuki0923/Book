#include <stdio.h>
#include <string.h>

char stack[512];
int top = 0;

void push(char c);
char pop(void);
int is_empty(void);

int main(void)
{
	char str[100];
	int len;
	int  i;

	puts("Please enter a normal expression:");
	gets(str);
	len = strlen(str);

	for(i = 0; i < len; i++)
	{
		if(str[i] == '(')
			continue;
		else if((str[i] >= '0') && (str[i] <= '9'))
			putchar(str[i]);
		else if(str[i] == '+' || str[i] == '-' || str[i] == '*')
			push(str[i]);
		else if(str[i] == ')')
			putchar(pop());
	}
	printf("\n");

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
