#include "linklist.h"
#include <stdlib.h>

struct node *head = NULL;
struct node *tail = NULL;

void create_list(unsigned int elem)
{
	struct node *p = (struct node *)malloc(sizeof(struct node));
	p->elem = elem;
	p->pre = NULL;
	p->next = NULL;

	if(head == NULL)
		head = p;
	else
	{
		tail->next = p;
		p->pre = tail;
	}
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
		p->pre = NULL;
		p->next = head;
		head->pre = p;
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
		p->pre = pre;
		pre->next = p;
		if(pre->next != NULL)
			p->next->pre = p;
		else
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
		head->pre = NULL;
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

		if(p->next != NULL)
			pre->next->pre = pre;
		else
			tail = pre->next;

		free(p);
	}
}

void print_linklist(void)
{
	struct node *p;

	for(p = head; p; p = p->next)
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

void reverse_print_linklist(void)
{
	struct node *p;

	for(p = tail; p; p = p->pre)
		printf("%5d", p->elem);
	putchar('\n');
}
