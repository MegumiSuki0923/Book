#include <stdio.h>

#define ROW	5	// 行

int main(void)
{
	int i, j;

	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j <= i; j++)
			printf("$");
		printf("\n");
	}

	return 0;
}
