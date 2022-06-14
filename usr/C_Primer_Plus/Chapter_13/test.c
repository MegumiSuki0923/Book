#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        FILE *fp;
        int i;
        long length;
        char ch;

        if((fp = fopen(argv[1], "r")) == NULL)
        {
                fprintf(stderr, "Could not open file %s.\n", argv[1]);
                exit(EXIT_FAILURE);
        }

        fseek(fp, 0L, SEEK_END);
        length = ftell(fp);

        for(i = 1; i <= length; i++)
        {
                fseek(fp, -i, SEEK_END);
                ch = getc(fp);
                putchar(ch);
        }

        fclose(fp);

        return 0;
}
