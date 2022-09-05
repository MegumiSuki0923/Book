#include "linklist.h"
#include <stdio.h>

int main(void)
{
	int n;

	create_list(1);
	create_list(2);
	create_list(3);
	create_list(4);
	create_list(5);
	create_list(6);
	create_list(8);
	create_list(9);
	print_linklist(head);

	reverse_linklist(head);

	return 0;
}
