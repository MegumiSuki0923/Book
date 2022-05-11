#include <stdio.h>

#define DEF     "I am a #defined string"

int main(void)
{
        char str1[80] = "An array was initialize to me.";
        const char *str2 = "A pointer was initialize to me.";

        puts("I'm an argument to pute().\n");
        puts(DEF);

        return 0;
}
