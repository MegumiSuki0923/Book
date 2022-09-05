#include <stdio.h>
#include <stdlib.h>

#define SIZE    40

int main(void)
{
        char filename[SIZE];
        FILE *fp;
        char ch;
        long loc, end;

        puts("Please enter file name:");
        gets(filename);
        if((fp = fopen(filename, "r")) == NULL)
        {
                fprintf(stderr, "Could not open file %s.\n", filename);
                exit(EXIT_FAILURE);
        }
        fseek(fp, 0L, SEEK_END);
        end = ftell(fp);

        printf("Please enter the file location:");
        while(scanf("%ld", &loc) == 1)
        {
                if(loc < end && loc > 0)
                {
                        fseek(fp, loc, SEEK_SET);
                        while((ch = getc(fp)) != '\n' && ch != EOF)
                                putc(ch, stdout);
                        putchar('\n');
                }
                else
                {
                        fprintf(stderr, "Out of range.\n");
                }

                printf("Enter the next location (q to quit):");
        }

        return 0;
}
