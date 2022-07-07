#include "queue.h"

struct BinTree_node queue[SIZE];

int head = 0, tail = 0;

void enqueue(struct BinTree_node c)
{
	queue[tail] = c;
	tail = (tail + 1) % 100;
}

struct BinTree_node dequeue(void)
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
