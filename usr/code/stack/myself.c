#include <stdio.h>
#include <string.h>

int reverse_polish[512];
int top = 0;

void push(int n);
int pop(void);
int is_empty(void);

int main(void)
{
	char a[100];
	int len;
	int i;
	int n1, n2;

	puts("please enter a reverse polish expression:");
	gets(a);
	len = strlen(a);

	for(i = 0; i < len; i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
			push(a[i] - '0');
		else
		{
			n2 = pop();
			n1 = pop();
			switch(a[i])
			{
				case '+':
					push(n1 + n2);
					break;
				case '-':
					push(n1 - n2);
					break;
				case '*':
					push(n1 * n2);
					break;
			}
		}
	}
	printf("result = %d\n", pop());

	return 0;
}

void push(int n)
{
	reverse_polish[top++] = n;
}

int pop(void)
{
	return reverse_polish[--top];
}

int is_empty(void)
{
	return top == 0;
}
