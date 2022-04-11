#include <stdio.h>

int main(void)
{
        unsigned int un = 3000000000;
        printf("un = %u and not %d\n", un, un);

        //%hd short int
        short end = 200;
        printf("end = %hd and %d\n", end, end);

        long big = 65537;
        printf("big = %ld and not %hd\n", big, big);

        long long verybig = 12345678908642;
        printf("verybig = %lld and not %ld\n", verybig, verybig);

        return 0;
}