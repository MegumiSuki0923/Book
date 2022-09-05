#include <stdio.h>
#include <ctype.h>

#define SIZE 81

void get_str(char *ar, int n);

int main(void)
{
        char ar[SIZE];
        int len;

        puts("How many characters do you want to save?");
        scanf("%d", &len);
        getchar();
        puts("Please enter a string:");
        gets(ar);
        puts(ar);
        get_str(ar, len);
        puts(ar);

        return 0;
}

void get_str(char *ar, int n)
{
        int i, j;

        for(i = 0; i < n; i++)
        {
                if(isspace(ar[i]))
                {
                        for(j = i; j < SIZE; j++)
                                *(ar + j) = '\0';
                }
        }
        if(n == i)
                for(; i < SIZE; i++)
                        *(ar + i) = '\0';
}
