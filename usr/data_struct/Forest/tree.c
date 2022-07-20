#include <stdlib.h>
#include <stdio.h>

typedef char ElemType;

#define MAX_TREE	100

struct Tree
{
	ElemType data;
	int parent;
};

struct Forest
{
	int tree_num;
	struct Tree tree[MAX_TREE];
};

struct Forest *create_tree(void);
int find_parent(struct Forest *forest, char ch);
void Show_Tree(const struct Forest *forest);

int main(void)
{
	struct Forest *forest;
	char ch;
	int i;

	forest = create_tree();

	printf("Please enter the character you want to find:\n");
	ch = getchar();
	while(getchar() != '\n');

//	Show_Tree(forest);

	i = find_parent(forest, ch);
	if(i != -1)
		printf("%c's parent node is %c, and it's index is %d.\n", ch, forest->tree[i].data, i);

	return 0;
}

struct Forest *create_tree(void)
{
	int i;
	char ch;

	struct Forest *forest= (struct Forest *)malloc(sizeof(struct Forest));

	printf("Please enter the number of node:\n");
	scanf("%d", &forest->tree_num);
	while(getchar() != '\n');
	printf("Please enter the data and it's index:\n");
	for(i = 0; i < forest->tree_num; i++)
	{
		scanf("%c %d", &ch, &forest->tree[i].parent);
		forest->tree[i].data = ch;
		while(getchar() != '\n');
	}

	return forest;
}

int find_parent(struct Forest *forest, char ch)
{
	int i;

	for(i = 0; i < forest->tree_num; i++)
	{
		if(forest->tree[i].data == ch) 
			return forest->tree[i].parent;
	}
	return -1;
}

void Show_Tree(const struct Forest *forest)
{
	int i;

	for(i = 0; i < forest->tree_num; i++) 
		printf("%c ", forest->tree[i].data);
	printf("\n");
}
