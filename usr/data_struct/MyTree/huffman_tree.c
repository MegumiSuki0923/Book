#include <stdio.h>

struct HuffmanTree
{
	int weight;
	int parent, lchild, rchild;
};

void print_huffman_tree(const struct HuffmanTree H[], int n);
int find_first(const struct HuffmanTree H[], int n);
int find_second(const struct HuffmanTree H[], int n);

int main(void)
{
	int n;
	int i, j;

	printf("How many nodes do the Huffman Tree have?\n");
	scanf("%d", &n);

	struct HuffmanTree H[2 * n];
	for(i = 1; i < n * 2; i++)
		H[i].parent = H[i].lchild = H[i].rchild = 0;
	for(i = 1; i < n + 1; i++)
	{
		printf("%d weight:  ", i);
		scanf("%d", &H[i].weight);
	}

	i = find_first(H, n);
	printf("i = %d\n", i);
	i = find_second(H, n-1);

	return 0;
}


void print_huffman_tree(const struct HuffmanTree H[], int n)
{
	int i;

	for(i = 1; i < n; i++)
		printf("%d: %d %d %d %d\n", i, H[i].weight, H[i].parent, H[i].lchild, H[i].rchild);
}

int find_first(const struct HuffmanTree H[], int n)
{
	int i;

	int min = H[1].weight;
	int ans = 1;
	for(i = 1; i < 2*n; i++)
	{
		if(H[i].weight < min)
		{
			ans = i;
			min = H[i].weight;
		}
	}
	return ans;
}

int find_second(const struct HuffmanTree H[], int n)
{}
