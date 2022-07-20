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
int find_parent(const struct Forest *forest, char ch);

int main(void)
{
	struct Forest *forest;
	char ch;
	int i;

	forest = create_tree();

	printf("Please enter the character you want to find:\n");
	ch = getchar();
	while(getchar() != '\n');

	i = find_parent(forest, ch);
	printf("%c's parent node is %c, and it's index is %d.\n", ch, forest->tree[i].data, i);

	return 0;
}

struct Forest *create_tree(void)
{
	int i;

	struct Forest *forest= (struct Forest *)malloc(sizeof(struct Forest));

	printf("Please enter the number of node:\n");
	scanf("%d", &forest->tree_num);
	while(getchar() != '\n');
	printf("Please enter the data and it's index:\n");
	for(i = 0; i < forest->tree_num; i++)
	{
		forest->tree[i].data = getchar();
		while(getchar() != '\n');
		scanf("%d", &forest->tree[i].parent);
		while(getchar() != '\n');
	}
}

int find_parent(const struct Forest *forest, char ch)
{
}
