#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int n;
int q[N];

void merge_sort(int q[], int l, int r)
{
        
}

int main(void)
{
        scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%d", q[i]);

        printf("Original:\n");
	for (int i = 0; i < n; i++)
		printf("%3d", q[i]);
	printf("\n");

	merge_sort(q, 0, n - 1);

	printf("After quick sort:\n");
	for (int i = 0; i < n; i++)
		printf("%3d", q[i]);
	printf("\n");

        return 0;
}
