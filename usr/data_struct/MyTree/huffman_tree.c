#include <stdio.h>

struct HuffmanTree
{
	int weight;
	int parent, lchild, rchild;
};

void print_huffman_tree(const struct HuffmanTree H[], int n);
void select(const struct HuffmanTree H[], int n, int *first, int *second);

int main(void)
{
	int n;
	int i, j;
	int first, second;

	printf("How many leaves nodes do the Huffman Tree have?\n");
	scanf("%d", &n);

	// 初始化哈夫曼树
	struct HuffmanTree H[2*n-1];
	for(i = 0; i < n*2-1; i++)
		H[i].parent = H[i].lchild = H[i].rchild = 0;
	for(i = 0; i < n; i++)
	{
		printf("%d weight:  ", i+1);
		scanf("%d", &H[i].weight);
	}

	for(i = n; i < 2*n-1; i++)
	{
		select(H, i, &first, &second);

		// 在找到最小和第二小的下标后，开始操作
		H[i].weight = H[first].weight + H[second].weight;
		H[i].lchild = first;
		H[i].rchild = second;

		H[first].parent = i;
		H[second].parent = i;
	}

	print_huffman_tree(H, n);

	return 0;
}


void print_huffman_tree(const struct HuffmanTree H[], int n)
{
	int i;

	for(i = 0; i < 2*n-1; i++)
		printf("%2d: %3d %3d %3d %3d\n", i, H[i].weight, H[i].parent, H[i].lchild, H[i].rchild);
}

// 这里的n是当前parent==0的叶子数
void select(const struct HuffmanTree H[], int n, int *first, int *second)
{
	int i;
	int min;

	min = H[0].weight;
	for(i = 1; i < n; i++)
	{
		if(H[i].parent == 0 && H[i].weight < min)
		{
			min = H[i].weight;
			*first = i;
		}
	}

	min = H[0].weight;
	for(i = 1; i < n; i++)
	{
		if(H[i].parent == 0 && H[i].weight < min && i != *first)
		{
			min = H[i].weight;
			*second = i;
		}
	}
}
