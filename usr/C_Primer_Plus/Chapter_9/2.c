#include <stdio.h>

void chline(char ch, int x, int y);

int main(void)
{
        int i, j;

        printf("Enter the i and y:\n");
        scanf("%d %d", &i, &j);

        chline('c', i, j);

        return 0;
}

void chline(char ch, int x, int y)
{
        for(int i = 0; i < x; i++)
        {
                for(int j = 0; j < y; j++)
                        printf("%c", ch);
                printf("\n");
        }
}