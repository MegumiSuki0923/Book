// 编译的时候，gcc p12.c -lm 链接一个数学库

#include <stdio.h>
#include <math.h>

#define SIZE	8

int main(void)
{
	int array[SIZE];
	int sum = 1;

	for(int i = 0; i < SIZE; i++)
		array[i] = pow(2, i);	// include <math.h> 求2的i次幂

/*
	{
		sum *= 2;
		array[i] = sum;
	}
*/

	printf("The arrar are below:\n");
	int i = 0;
	do
	{
		printf("%d ", array[i]);
		i++;
	}while(i < SIZE);
	printf("\n");

	return 0;
}
