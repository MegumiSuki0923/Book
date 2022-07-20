#include <stdio.h>
#include "binary_tree.h"

int main(void)
{
	struct BinTree_node *mytree;

	mytree = create_bintree();

	level_traverse(mytree);
	putchar('\n');

	printf("Depth = %d\n", depth(mytree));
	printf("leaf = %d\n", leaf(mytree));
	printf("node = %d\n", node(mytree));

	return 0;
}
