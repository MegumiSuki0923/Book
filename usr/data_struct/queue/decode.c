#include <stdio.h>
#include <string.h>

#define SIZE	100

char queue[SIZE];

int head = 0, tail = 0;

void enqueue(char c);
char dequeue(void);
int is_empty(void);
int is_full(void);

int main(void)
{
	char code[10];
	int i;
	char num;

	puts("Please enter the code:");
	gets(code);

	// 先把所有元素入队列
	for(i = 0; i < strlen(code); i++)
	{
		if(!is_full())
			enqueue(code[i]);
	}

	// 开始解码
	i = 0;
	while(!is_empty())
	{
		code[i++] = dequeue();
		if(!is_empty())
		{
			num = dequeue();
			if(!is_full())
				enqueue(num);
		}
	}

	printf("**********************************\n");
	printf("After decode:\n");
	for(i = 0; i < strlen(code); i++)
		printf("%c", code[i]);
	printf("\n");

	return 0;
}

void enqueue(char c)
{
	queue[tail] = c;
	tail = (tail + 1) % 100;
}

char dequeue(void)
{
	char ch;

	ch = queue[head];
	head = (head + 1) % 100;

	return ch;
}

int is_empty(void)
{
	return head == tail;
}

int is_full(void)
{
	return ((tail+1) % SIZE) == head;
}
