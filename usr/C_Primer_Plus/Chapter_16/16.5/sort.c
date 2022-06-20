#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mycomp(const void *p1, const void *p2);
void show_array(const int array[], int n);

int main(void)
{
	int i;
	int arr[20];
	srand(time(0));

	for(i = 0; i < 20; i++)
		arr[i] = rand() % 100;
	show_array(arr, 20);

	qsort(arr, 20, sizeof(int), mycomp);
	show_array(arr, 20);
	return 0;
}

int mycomp(const void *p1, const void *p2)
{
	const int *a1 = p1;
	const int *a2 = p2;

	if(*a1 > *a2)
		return 1;
	else if(*a1 == *a2)
		return 0;
	else
		return -1;
}

void show_array(const int array[], int n)
{
	int i;

	for(i = 0; i < n; i++)
		printf("%5d", array[i]);
	putchar('\n');
}
