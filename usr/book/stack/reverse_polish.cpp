#include <iostream>
#include <string>

using namespace std;

#define SIZE    100

int stack[SIZE];
int top = 0;

void push(int n);
int pop(void);
bool is_empty(void);

int main(void)
{
        string str;
        int len, i;
        int n1, n2;

        cout << "Please enter a reverse polish expression:" << endl;
        getline(cin, str);
        len = sizeof(str) / sizeof(str[0]);


        for(i = 0; i < len; i++)
        {
                if(str[i] >= '0' && str[i] <= '9')
                        push(str[i] - '0');
                else if(str[i] == '*' || str[i] == '-' || str[i] == '+')
                {
                        n2 = pop();
                        n1 = pop();
                        switch(str[i])
                        {
                                case '*':
                                        push(n1 * n2);
                                        break;
                                case '+':
                                        push(n1 + n2);
                                        break;
                                case '-':
                                        push(n1 - n2);
                                        break;
                        }
                }
        }

        cout << "The result is " << pop() << endl;

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
