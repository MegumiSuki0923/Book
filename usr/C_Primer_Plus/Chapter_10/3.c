#include <stdio.h>

int max(int n, const int ar[]);

int main(void)
{
	int m_max;
	int ar[5] = {100, 2, 5, 3, 10};

	m_max = max(5, ar);

	printf("The max is %d\n", m_max);

	return 0;
}

//int max(int ar[], 5)
int max(int n, const int ar[])
{
	int ans = ar[0];

	for(int i = 1; i < n; i++)
		ans = (ar[i] > ans) ? ar[i] : ans;

	return ans;
}
