#include <stdio.h>
#include <stdlib.h>

#define SIZE    50

int main(void)
{
        char file[SIZE];
        FILE *fp;
        long len, count;
        char ch;

        puts("Please enter a file name:");
        gets(file);

        if((fp = fopen(file, "r")) == NULL)
        {
                printf("Reverse can't open %s.\n", file);
                exit(1);
        }
        fseek(fp, 0L, SEEK_END);
        len = ftell(fp);

        for(count = 1; count <= len; count++)
        {
                fseek(fp, -count, SEEK_END);
                ch = getc(fp);
                putchar(ch);
        }

        return 0;
}
