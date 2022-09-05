#include "linklist.h"
#include <stdlib.h>

struct node *head = NULL;
struct node *tail = NULL;

void create_list(unsigned int elem)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	p->elem = elem;
	p->next = NULL;

	if(head == NULL)
		head = p;
	else
		tail->next = p;
	tail = p;
}

void insert_node(int pos, unsigned int elem)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	struct node *pre = head;
	int i = 0;

	if(pos == 0)
	{
		p->elem = elem;
		p->next = head;
		head = p;
	}
	else
	{
		// 确定前驱点
		while(i < pos-1)
		{
			pre = pre->next;
			i++;
		}

		// 开始插入节点
		p->elem = elem;
		p->next = pre->next;
		pre->next = p;

		if(p->next == NULL)
			tail = p;
	}
}

void delete_node(int pos)
{
	struct node *pre = head, *p;
	int i = 0;

	if(pos == 0)
	{
		head = head->next;
		free(pre);
	}
	else
	{
		while(i < pos-1)
		{
			pre = pre->next;
			i++;
		}

		p = pre->next;
		pre->next = p->next;

		if(p->next == NULL)
			tail = pre->next;

		free(p);
	}
}

void print_linklist(struct node *linklist_head)
{
	struct node *p;

	for(p = linklist_head; p; p = p->next)
		printf("%5d", p->elem);
	putchar('\n');
}

int is_searched(unsigned int elem)
{
	struct node *p;

	for(p = head; p; p = p->next)
	{
		if(p->elem == elem)
			return 1;
	}
	return 0;
}

int find_mid(struct node *head)
{
	struct node *q, *p;
	p = q = head;

	while(p && p->next)
	{
		q = q->next;
		p = p->next->next;
	}

	return q->elem;
}

int find_last_n(struct node *head, int n)
{
	int i;
	struct node *p, *q;
	p = q = head;

	for(i = 0; i < n-1; i++)
		p = p->next;

	while(p->next)
	{
		p = p->next;
		q = q->next;
	}

	return q->elem;
}