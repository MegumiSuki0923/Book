#include <stdio.h>
#include "binary_tree.h"

int main(void)
{
	struct BinTree_node *mytree;

	mytree = create_bintree();

	level_traverse(mytree);
	putchar('\n');

	return 0;
}
