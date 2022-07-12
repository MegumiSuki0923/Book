#include <stdio.h>
#include <stdlib.h>

struct BinTree_node {
	unsigned char data;
	struct BinTree_node *ltree, *rtree;
	int lflag, rflag;
};

struct BinTree_node *pre = NULL;

struct BinTree_node *create_bintree(void);
struct BinTree_node *Create_BinTree(void);
void pre_order(const struct BinTree_node *tree);
void in_order(const struct BinTree_node *tree);
void In_order_Thread(struct BinTree_node *tree);
void Create_Inorder_Thread(struct BinTree_node *T);
void Traverse_Inorder_Thread(struct BinTree_node *tree);

int main(void)
{
	struct BinTree_node *mytree;

	printf("Please enter a tree (take place of blank with #):\n");
	mytree = Create_BinTree();

	pre_order(mytree);
	putchar('\n');

	Create_Inorder_Thread(mytree);

	printf("--------------------------------\n");
	printf("Now traverse the tree:\n");
	Traverse_Inorder_Thread(mytree);
	printf("\n");

	return 0;
}

struct BinTree_node *create_bintree(void)
{
	struct BinTree_node *tree = (struct BinTree_node*)malloc(sizeof(struct BinTree_node));
	unsigned char flag;

	// 你想在Tree中输入什么
	printf("Which element do you want to input?\n");
	while((tree->data = getchar()) == '\n');

	printf("Do you want to insert l_tree for %c, (Y/N)?\n", tree->data);
	while((flag = getchar()) == '\n');

	if(flag == 'Y')
		tree->ltree = create_bintree();
	else
		tree->ltree = NULL;

	// 是否要创建右子树
	printf("Do you want to insert r_tree for %c, (Y/N)?\n", tree->data);
	while((flag = getchar()) == '\n');

	if(flag == 'Y')
		tree->rtree = create_bintree();
	else
		tree->rtree = NULL;

	return tree;
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

void in_order(const struct BinTree_node *tree)
{
	if(tree)
	{
		in_order(tree->ltree);
		printf("%c", tree->data);
		in_order(tree->rtree);
	}
}

void In_order_Thread(struct BinTree_node *tree)
{
	if(tree)
	{
		In_order_Thread(tree->ltree);

		if(!tree->ltree)
		{
			tree->lflag = 1;
			tree->ltree = pre;
		}
		else
			tree->lflag = 0;

		if(pre)
		{
			if(!pre->rtree)
			{
				pre->rflag = 1;
				pre->rtree = tree;
			}
			else
				pre->rflag = 0;
		}
		pre = tree;

		In_order_Thread(tree->rtree);
	}
}

void Create_Inorder_Thread(struct BinTree_node *T)
{
	if(T)
	{
		In_order_Thread(T);
		pre->rflag = 1;
		pre->rtree = NULL;
	}
}

void Traverse_Inorder_Thread(struct BinTree_node *tree)
{
	while(tree)
	{
		while(tree->lflag == 0)
			tree = tree->ltree;
		printf("%c", tree->data);

		while((tree->rflag == 1) && (tree->rtree))
		{
			tree = tree->rtree;
			printf("%c", tree->data);
		}
		tree = tree->rtree;
	}
}

struct BinTree_node *Search_Inorder_Thread(struct BinTree_node *tree, unsigned char ch)
{
	
}
