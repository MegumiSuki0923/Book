#include <stdio.h>

int main(void)
{
	int num, status;
	int sum = 0;

	printf("Please enter a num to sum (q to quit): ");
//	status = scanf("%d", &num);

	while(scanf("%d", &num))
	{
		sum = sum + num;
		printf("Enter the next number: ");
//		status = scanf("%d", &num);
	}
	printf("The sum is %d\n", sum);

	return 0;
}
