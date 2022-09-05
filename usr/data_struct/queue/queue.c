#include <stdio.h>

#define SIZE	100

char queue[SIZE];

int head = 0, tail = 0;

void enqueue(char c);
char dequeue(void);
int is_empty(void);
int is_full(void);

int main(void)
{
	char ch = 'A';
	int i;

	for(i = 0; i < 3; i++)
	{
		if(!is_full())
			enqueue(ch);
		ch++;
	}

	while(!is_empty())
	{
		putchar(dequeue());
	}
	putchar('\n');

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
