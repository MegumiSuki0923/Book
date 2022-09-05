#include <stdio.h>

void trystat(void);

int main(void)
{
        int count;

        for(count = 1; count <= 3; count++)
        {
                printf("Here comes iteration %d.\n", count);
                trystat();
        }

        return 0;
}

void trystat(void)
{
        int fade = 1;
        static int stay;
        printf("Fade = %d\n", fade++);
        printf("stay = %d\n", stay++);
}
