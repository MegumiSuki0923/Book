#include <stdio.h>
#include <stdlib.h>

struct BinTree_node {
	unsigned char data;
	struct BinTree_node *ltree, *rtree;
};

struct BinTree_node *create_bintree(void);
void eatline(void);
void pre_order(const struct BinTree_node *tree);
void in_order(const struct BinTree_node *tree);
void pos_order(const struct BinTree_node *tree);
struct BinTree_node *pre_in_createBinTree(unsigned char *pre, unsigned char *in, int len);

int main(void)
{
	struct BinTree_node *mytree;

	mytree = create_bintree();

	pos_order(mytree);
	putchar('\n');

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

void pos_order(const struct BinTree_node *tree)
{
	if(tree)
	{
		pos_order(tree->ltree);
		pos_order(tree->rtree);
		printf("%c", tree->data);
	}
}

struct BinTree_node *pre_in_createBinTree(unsigned char *pre, unsigned char *in, int len)
{
	struct BinTree_node *tree;
	unsigned char ch;
	int index = 0;

	if(len == 0)
		return NULL;

	ch = pre[0];
	tree = (struct BinTree_node *)malloc(sizeof(struct BinTree_node));

	while(ch != in[index])
		index++;

	tree->data = ch;
	tree->ltree = pre_in_createBinTree(pre+1, in ,index);
	tree->rtree = pre_in_createBinTree(pre+index+1, in+index+1, len-index-1);

	return tree;
}

struct BinTree_node *in_pos_createBinTree(unsigned char *in, unsigned char *pos, int len)
{
	struct BinTree_node *tree;
	unsigned char ch;
	int index = 0;


	if(len == 0)
		return NULL;

	ch = pos[len - 1];
	tree = (struct BinTree_node *)malloc(sizeof(struct BinTree_node));

	while(ch != pos[index])
		index++;
	
	return tree;
}
