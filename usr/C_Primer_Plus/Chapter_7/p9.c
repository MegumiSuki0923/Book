#include <stdio.h>

int main(void)
{
        int num;

        printf("Please enter a number:\n");
        scanf("%d", &num);
        for(int i = 2; i <= num; i++)
        {
                if(isprime(i))
                        printf("%d is prime\t", i);
        }
        printf("\n");

        return 0;
}

int isprime(int n)
{
        if(n % 2)
}