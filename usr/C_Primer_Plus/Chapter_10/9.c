#include <stdio.h>

#define SIZE	4

void add(int ar1[], int ar2[], int tar[], int n);
void show(int ar[], int n);

int main(void)
{
	int src1[SIZE] = {2, 4 ,5, 8};
	int src2[SIZE] = {1, 0, 4, 6};
	int target[SIZE];

	add(src1, src2, target, SIZE);

	show(target, SIZE);

	return 0;
}

void add(int ar1[], int ar2[], int tar[], int n)
{
	for(int i = 0; i < n; i++)
		tar[i] = ar1[i] + ar2[i];
}

void show(int ar[], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", ar[i]);
	printf("\n");
}
