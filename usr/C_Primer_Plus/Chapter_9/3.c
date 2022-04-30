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
        for (int i = 0; i < y; i++)
	{
		if(i >= x)
                	printf("%c", ch);
		else
			printf("*");
        }
	printf("\n");
}
