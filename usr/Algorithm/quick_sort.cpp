#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int l, int r)
{
	if (l >= r)
		return;

	int i, j;
	int x;

	i = l - 1;
	j = r + 1;
	x = q[l];

	while (i < j)
	{
		do
			i++;
		while (q[i] < x);

		do
			j--;
		while (q[j] > x);

		if (i < j)
			swap(q[i], q[j]);
	}

	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}

int main(void)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &q[i]);

	printf("Original:\n");
	for (int i = 0; i < n; i++)
		printf("%3d", q[i]);
	printf("\n");

	quick_sort(q, 0, n - 1);

	printf("After quick sort:\n");
	for (int i = 0; i < n; i++)
		printf("%3d", q[i]);
	printf("\n");

	return 0;
}
