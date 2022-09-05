#include <stdio.h>

int main(void)
{
        char ch;
        int n = 0;

        printf("Please enter a string:\n");
        while((ch = getchar()) != '#')
        {
                if(ch == '.')
                {
                        ch = '!';
                        n++;
                }
                else if(ch == '!')
                {
                        putchar('!');
                        n++;
                }
                else if(ch == '\n')
                        continue;

                printf("%c", ch);
        }

        printf("You has replace %d times\n", n);

        return 0;
}