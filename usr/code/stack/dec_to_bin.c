#include <stdio.h>
#include <string.h>

int stack[512];
int top = 0;

void push(int c);
int pop(void);
int is_empty(void);

int main(void)
{
	int num;

	printf("Please enter a decimal number: ");
	if(scanf("%d", &num) == 1)
	{
		while(num)
		{
			push(num % 2);
			num /= 2;
		}

		while(!is_empty())
			printf("%d", pop());
	}
	putchar('\n');

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
