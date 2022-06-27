#include <iostream>

using namespace std;

#define SIZE    100

int stack[SIZE];
int top = 0;

void push(int n);
int pop(void);
int isEmpty(void);

int main(void)
{
        int num;

        printf("Please enter a number you want to change it to binary:\n");
        if(scanf("%d", &num))
        {
                while(num != 0)
                {
                        push(num%2);
                        num = num / 2;
                } 
        }

        while(!isEmpty())
        {
                printf("%d", pop());
        }

        return 0;
}

void push(int n)
{
        stack[top++] = n;
}

int pop(void)
{
        return stack[--top];
}

int isEmpty(void)
{
        return top == 0;
}
