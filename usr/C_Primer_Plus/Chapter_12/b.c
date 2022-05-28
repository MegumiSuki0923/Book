#include <stdio.h>

extern int times;

void loop(void)
{
        int i = 0;
        for (int i = 0; i < times; i++)
                puts("Hello world!");
}
 n 