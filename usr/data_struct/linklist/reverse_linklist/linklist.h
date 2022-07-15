#ifndef LINKLIST_H__
#define LINKLIST_H__

#include <stdio.h>

struct node {
	unsigned int elem;
	struct node *next;
};

extern struct node *head;
extern struct node *tail;

void create_list(unsigned int elem);
void insert_node(int pos, unsigned int elem);
void delete_node(int pos);
void print_linklist(struct node *linklist_head);
int is_searched(unsigned int elem);
int find_mid(struct node *head);
int find_last_n(struct node *head, int n);
void reverse_linklist(struct node *linklist_head);

#endif
