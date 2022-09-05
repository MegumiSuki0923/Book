#include <stdio.h>

int main(void)
{
	unsigned int width, precision;
	int num = 258;
	float fnum = 123.4;

	printf("Please enter the width: ");
	scanf("%d", &width);
	printf("The num is %*d.\n", width, num);

	printf("Now enter the width and precision: ");
	scanf("%d %d", &width, &precision);
	printf("The float number is *%*.*f*.\n", width, precision, fnum);

	return 0;
}
