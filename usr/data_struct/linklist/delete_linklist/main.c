#include "linklist.h"
#include <stdio.h>

int main(void)
{
	create_list(1);
	create_list(2);
	create_list(1);
	create_list(4);
	create_list(5);
	create_list(4);
	print_linklist(head);

	delete_repeat(head);
	print_linklist(head);

	return 0;
}
