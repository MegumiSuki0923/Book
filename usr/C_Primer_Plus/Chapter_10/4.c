#include <stdio.h>

int find_index(double ar[], int n);

int main(void)
{
	double target[5] = {1.1, 9.9, 100.0, 4.4, 5.5};

	int index;
	index = find_index(target, 5);

	printf("The index is %d.\n", index);

	return 0;
}

int find_index(double ar[], int n)
{
	int i;
	double max;
	int ind = 0;

	for(i = 1, max = ar[0]; i < n; i++)
	{
		if(ar[i] > max)
		{
			ind = i;
			max = ar[i];
		}
	}

	return ind;
}
