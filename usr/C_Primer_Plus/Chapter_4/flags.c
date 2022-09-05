#include <stdio.h>

int main(void)
{
	printf("%#x\n", 13);
	printf("*%d*, *% d*, *% d*\n", 13, 13, -13);
	printf("*%5d*, *%5.3d*\n", 6, 6);

	return 0;
}
