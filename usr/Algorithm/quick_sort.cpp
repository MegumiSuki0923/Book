#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int l, int r)
{
	int i, j;
	int x;

	i = l - 1;
	j = r + 1;
	x = q[l];

	if(l < r)
	{
		while(i < j)
		{
			do
				i++;
			while(q[i] < x);

			do
				j++;
			while(q[j] > x);

			if(i < j)
			{
				int temp = q[i];
				q[i] = q[j];
				q[j] = temp;
			}
		}
	}

	quick_sort(q, l, i);
	quick_sort(q, i+1, r);
}

int main(void)
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &q[i]);

	printf("Original:\n");
	for(int i = 0; i < n; i++)
		printf("%3d", q[i]);

//	quick_sort(q, 0, n-1);

	printf("After quick sort:\n");
	for(int i = 0; i < n; i++)
               	printf("%3d", q[i]);

	return 0;
}
