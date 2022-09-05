#include "queue.h"

int queue[SIZE];

int head = 0, tail = 0;

void enqueue(int c)
{
	queue[tail] = c;
	tail = (tail + 1) % 100;
}

int dequeue(void)
{
	int ch;

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
