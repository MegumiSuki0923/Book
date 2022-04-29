#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
	int num;
	printf("Please enter a number to factor, < 0 is not supported.\n");

	while(scanf("%d", &num) == 1)
	{
		if(num < 0)
			printf("< 0 is not supported.\n");
		else if(num > 12)
			printf("> 12 is not supported.\n");
		else
		{
			printf("%d : %ld\n", num, rfact(num));
//			rfact(num);
		}
	}

	return 0;
}

long fact(int n)
{
	long ans;

	for(ans = 1; n >= 1; n--)
		ans *= n;

	return ans;
}

long rfact(int n)
{
	long ans;

	if(n > 1)
		ans = n * rfact(n - 1);
	else
		ans = 1;

	return ans;
}
