#include <stdio.h>
#include <stdlib.h>

struct BinTree_node {
	unsigned char data;
	struct BinTree_node *ltree, *rtree;
};

struct BinTree_node *create_bintree(void);
void eatline(void);

int main(void)
{
	struct BinTree_node *mytree;

	mytree = create_bintree();

	return 0;
}

struct BinTree_node *create_bintree(void)
{
	struct BinTree_node *tree = (struct BinTree_node*)malloc(sizeof(struct BinTree_node));
	unsigned char flag;

	// 你想在Tree中输入什么
	printf("Which element do you want to input?\n");
	tree->data = getchar();
	eatline();

	printf("Do you want to insert l_tree for %c, (Y/N)?\n", tree->data);
	flag = getchar();
	eatline();

	if(flag == 'Y')
		tree->ltree = create_bintree();
	else
		tree->ltree = NULL;

	// 是否要创建右子树
	printf("Do you want to insert r_tree for %c, (Y/N)?\n", tree->data);
	flag = getchar();
	eatline();

	if(flag == 'Y')
		tree->rtree = create_bintree();
	else
		tree->rtree = NULL;

	return tree;
}

void eatline(void)
{
	while(getchar() != '\n')
		continue;
}
