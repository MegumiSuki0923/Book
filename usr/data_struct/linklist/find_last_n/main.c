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

	printf("Please enter the last one you want to find?\n");
	scanf("%d", &n);

	printf("The last one you find is %d.\n", find_last_n(head, n));

	return 0;
}
