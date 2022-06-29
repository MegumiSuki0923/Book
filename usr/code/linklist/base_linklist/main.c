#include "linklist.h"
#include <stdio.h>

int main(void)
{
	create_list('A');
	create_list('B');
	create_list('C');
	create_list('D');
	print_linklist();

	delete_node(0);
	print_linklist();

	insert_node(0, 'F');
	insert_node(2, 'X');
	print_linklist();

	if(is_searched('A'))
		printf("The element is found in the linklist\n");
	else
		printf("The element is not found in the linklist\n");

	return 0;
}
