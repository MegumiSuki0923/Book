#include <stdio.h>
#include <stdlib.h>

struct BinTree_node {
	unsigned char data;
	struct BinTree_node *ltree, *rtree;
};

struct BinTree_node *create_bintree(void);
void eatline(void);
struct BinTree_node *Create_BinTree(void);
void pre_order(const struct BinTree_node *tree);

int main(void)
{
	struct BinTree_node *mytree;

	printf("Please enter a tree (take place of blank with #):\n");
	mytree = Create_BinTree();

	pre_order(mytree);
	putchar('\n');

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

struct BinTree_node *Create_BinTree(void)
{
	unsigned char ch;
	struct BinTree_node *tree;

	ch = getchar();

	if(ch == '#')
		tree = NULL;
	else
	{
		tree = (struct BinTree_node *)malloc(sizeof(struct BinTree_node));
		tree->data = ch;
		tree->ltree = Create_BinTree();
		tree->rtree = Create_BinTree();
	}

	return tree;
}

void pre_order(const struct BinTree_node *tree)
{
	if(tree)
	{
		printf("%c", tree->data);
		pre_order(tree->ltree);
		pre_order(tree->rtree);
	}
}

