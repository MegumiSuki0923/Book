#include <stdio.h>

void insertSort(int array[], int n)
{
	int i;
	for(i = 1; i < n; i++)
	{
		// current location
		int cur = array[i];
		int insertionIndex = i-1;
		while(insertionIndex >= 0 && array[insertionIndex] > cur)
		{
			array[insertionIndex+1] = array[insertionIndex];
			insertionIndex--;
		}
		array[insertionIndex+1] = cur;
	}
}

int main(void)
{
	int i;

	int data[5] = {2, 1, 4, 5, 3};
	printf("Before:\n");
	for(i = 0; i < 5; i++)
		printf("%3d", data[i]);
	printf("\n");

	insertSort(data, 5);
	printf("After:\n");
	for(i = 0; i < 5; i++)
                printf("%3d", data[i]);
        printf("\n");

	return 0;
}
