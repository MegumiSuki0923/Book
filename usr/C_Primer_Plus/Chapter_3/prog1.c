#include <stdio.h>
#include <limits.h>	//INT_MAX INT_MIN
#include <float.h>	//FLT_MAX FLT_MIN

int main(void)
{
//	printf("%d, %d\n", INT_MAX, INT_MIN);

	int i = 2147483647;
	printf("%d, %d, %d\n", i, i+1, i+2);

	printf("%e, %e\n", FLT_MAX, FLT_MIN);

	return 0;
}
