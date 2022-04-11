#include <stdio.h>

void saySomething_1(void);
void saySomething_2(void);

int main(void)
{
        saySomething_1();
        saySomething_1();
        saySomething_1();
        saySomething_2();

        return 0;
}

void saySomething_1(void)
{
        printf("For he's jolly good fellow!\n");
}

void saySomething_2(void)
{
        printf("Which nobody can deny!\n");
}