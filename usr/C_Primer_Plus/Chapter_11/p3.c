#include <stdio.h>
#include <ctype.h>

#define SIZE    20

void get_word(char *str);

int main(void)
{
        char input[SIZE];

        puts("Please enter a string:"); 
        gets(input);
        get_word(input);
        puts(input);
}

void get_word(char *str)
{
        while(!isspace(*str++));
        *str = '\0';
}
