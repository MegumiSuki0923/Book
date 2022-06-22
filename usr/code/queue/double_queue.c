#include <stdio.h>
#include <string.h>

#define SIZE	100

char queue[SIZE];

int head = 0, tail = 0;

void head_enqueue(char c);
char head_dequeue(void);
void tail_enqueue(char c);
char tail_dequeue(void);
int is_empty(void);
int is_full(void);
int is_palindrom(char *pt);

int main(void)
{
	char str[SIZE];

	puts("Please enter a string:");
	gets(str);

	if(is_palindrom(str))
		printf("str is a palindrom\n");
	else
		printf("str is not a palindrom\n");

	return 0;
}

void head_enqueue(char c)
{
	head = (head - 1 + SIZE) % SIZE;
	queue[head] = c;
}

char head_dequeue(void)
{
	char ch;

	ch = queue[head];
	head = (head + 1) % SIZE;

	return ch;
}

void tail_enqueue(char c)
{
	queue[tail] = c;
	tail = (tail + 1) % SIZE;
}

char tail_dequeue(void)
{
	char ch;

	tail = (tail - 1 + SIZE) % SIZE;
	ch = queue[tail];

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

int is_palindrom(char *pt)
{
	int len;
	int i;
	char c1, c2;

	// 把所有元素入队列
	len = strlen(pt);
	for(i = 0; i < len; i++)
	{
		if(!is_full())
			tail_enqueue(pt[i]);
	}

	// 开始判断是否为回文
	while(is_empty())
	{
		c1 = head_dequeue();
		if(!is_empty())
			c2 = tail_dequeue();
		else
			break;

		if(c1 == c2)
			continue;
		else
			return 0;
	}
	return 1;
}
