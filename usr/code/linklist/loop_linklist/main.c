#include "linklist.h"
#include <stdio.h>

int main(void)
{
	create_list(4);
	create_list(3);
	create_list(2);
	create_list(1);
	print_linklist();

	insert_node(1, 10);
	print_linklist();

	delete_node(1);
	print_linklist();

	return 0;
}
