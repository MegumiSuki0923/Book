#include <stdio.h>

int main(void)
{
        int ten = 10;
        int two = 2;

        printf("Doing it right:\n");
        printf("%d - %d = %d\n", ten, two, ten-two);

        printf("Doing it wrong:\n");
        printf("%d - %d = %d", ten);

        return 0;
}