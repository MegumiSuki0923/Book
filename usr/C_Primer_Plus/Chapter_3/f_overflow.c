#include <stdio.h>

int main(void)
{
        float overflow = 3.14e39 * 100.0f;
        printf("overflow is %f", overflow);

        return 0;
}