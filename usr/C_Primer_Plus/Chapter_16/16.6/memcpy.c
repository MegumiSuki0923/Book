#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int num[10];

	memcpy(num, arr, 10*sizeof(int));

	for(i = 0; i < 10; i++)
		printf("%5d", num[i]);
	putchar('\n');

	return 0;
}
