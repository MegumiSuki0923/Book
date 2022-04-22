#include <stdio.h>

int isprime(int n);

int main(void)
{
        int num;

        printf("Please enter a number:\n");
        scanf("%d", &num);
        for(int i = 2; i <= num; i++)
        {
                if(isprime(i))
                        printf("%d ", i);
		if(i % 4 == 0)
			printf("\n");
        }
        printf("\n");

        return 0;
}

int isprime(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}
