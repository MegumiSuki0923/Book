#include <stdio.h>

#define ElemType int

typedef struct
{
	ElemType *data;
	int size;
	int length;
}SqList;

int Sq_search(int *a, int n, int key)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		if(a[i] == key)
		{
			return i;
		}
	}
	return 0;
}

int main(void)
{
	int d, i;
	int data[5] = {1, 9, 5, 4, 3};

	printf("Which number do you want to search?\n");
	scanf("%d", &d);
	i = Sq_search(data, 5, d);

	if(i != 0)
		printf("Number %d is on the %d\n", d, i+1);
	else
		printf("There is no number %d\n", d);

	return 0;
}
