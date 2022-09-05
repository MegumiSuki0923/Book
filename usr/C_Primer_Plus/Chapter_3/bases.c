#include <stdio.h>

int main(void)
{
        int x = 100;
        printf("Dec is %d, octal is %o, hex is %x\n", x, x, x);
        printf("Dec is %d, octal is %#o, hex is %#x\n", x, x, x);

        return 0;
}