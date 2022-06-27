#include <iostream>

#define SIZE    100

int stack[SIZE];
int top = 0;

void push(int n);
int pop(void);
bool is_empty(void);

int main(void)
{
        push(1);
        push(2);
        push(3);

        std::cout << pop() << pop() << pop() << std::endl;

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

bool is_empty(void)
{
        return top == 0;
}
