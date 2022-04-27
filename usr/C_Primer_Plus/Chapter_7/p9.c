#include <stdio.h>

int isprime(int n);

int main(void)
{
        int num;

        printf("Please enter a number:\n");
        scanf("%d", &num);
        for (int i = 2; i <= num; i++)
        {
<<<<<<< HEAD
                if(isprime(i))
                        printf("%d ", i);
		if(i % 4 == 0)
			printf("\n");
=======
                if (isprime(i))
                        printf("%d ", i);
>>>>>>> d929def6d96b7a306cf54fec659622bd607e484e
        }
        printf("\n");

        return 0;
}

int isprime(int n)
{
<<<<<<< HEAD
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
=======
        for (int i = 2; i < n; i++)
        {
                if (n % i == 0)
                        return 0;
        }
        return 1;
>>>>>>> d929def6d96b7a306cf54fec659622bd607e484e
}
