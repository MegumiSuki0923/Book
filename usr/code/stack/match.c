#include <stdio.h>
#include <string.h>

int stack[512];
int top = 0;

void push(int c);
int pop(void);
int is_empty(void);

int main(void)
{
	char str[100];
	int len, i;

	puts("Please enter a normal expression:");
	gets(str);
	len = strlen(str);

	for(i = 0; i < len; i++)
	{
		if(str[i] == '(')
			push(i);
		else if(str[i] == ')')
		{
			printf("%d %d\n", pop(), i);
		}
	}

	return 0;
}

void push(int c)
{
	stack[top++] = c;
}

int pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}
