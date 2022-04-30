#include <stdio.h>

long Fibonacci(int n);

int main(void)
{
	int n;

	printf("Enter an integer (q to quit):\n");
	while(scanf("%d", &n) == 1)
	{
		printf("The term of %d, it's Fibonaci value is %ld\n", n, Fibonacci(n));
		printf("Enter an integer (q to quit):\n");
	}

	return 0;
}

long Fibonacci(int n)
{
	int n1, n2, sum;
	int i;

	if(n > 2)
	{
		for(n1 = n2 = 1, i = 3; i <= n; i++)
		{
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
		}
	}
	else
		return 1;

	return sum;
}
