#include <stdio.h>

#define SIZE    30

int main(void)
{
        char previous = '\0', present;
        int count = 0;

        printf("Please enter a string:\n");
        while((present = getchar()) != '#')
        {
                if(previous == 'e' && present == 'i')
                        count++;
                previous = present;
        }

        printf("You have already enter %d \"ei\"\n", count);

        return 0;
}