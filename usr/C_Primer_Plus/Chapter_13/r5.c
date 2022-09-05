#include <stdio.h>
#include <stdlib.h>

#define SIZE    256

int has_ch(char ch, const char *line);

int main(int argc, char *argv[])
{
        FILE *fp;
        char ch;
        char line[SIZE];

        if(argc != 3)
        {
                fprintf(stderr, "Usage: %s character filename\n", argv[0]);
                exit(1);
        }

        ch = argv[1][0];
        if((fp = fopen(argv[2], "r")) == NULL)
        {
                fprintf(stderr, "Could not open file %s.\n", argv[2]);
                exit(1);
        }

        while(fgets(line, SIZE, fp) != NULL)
        {
                if(has_ch(ch, line))
                        fputs(line, stdout);
        }
        fclose(fp);

        return 0;
}

int has_ch(char ch, const char *line)
{
        while(*line)
        {
                if(ch == *line++)
                        return 1;
        }
        return 0;
}
