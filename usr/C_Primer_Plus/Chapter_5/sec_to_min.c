#include <stdio.h>

int main(void)
{
        int sec, min, left;
        printf("Please enter the numbers(<=0 to quit): ");
        scanf("%d", &sec);

        min = sec / 60;
        left = sec % 60;

        while(sec > 0)
        {
                printf("%d seconds is %d minutes and %d seconds.\n", sec, min, left);

                printf("Please enter the next numbers(<=0 to quit): ");
                scanf("%d", &sec);
                min = sec / 60;
                left = sec % 60;
        }
        return 0;
}