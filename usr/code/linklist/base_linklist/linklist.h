#ifndef LINKLIST_H__
#define LINKLIST_H__

#include <stdio.h>

struct node {
	char elem;
	struct node *next;
};

void create_list(char elem);
void insert_node(int pos, char elem);
void delete_node(int pos);
void print_linklist(void);
int is_searched(char elem);

#endif
