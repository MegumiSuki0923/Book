//
// Created by hy214 on 2022/3/21.
//

#include "calculator.h"

void add(double num1, double num2)
{
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

void division(double num1, double num2)
{
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
}
void sub(double num1, double num2)
{
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}
void multi(double num1, double num2)
{
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
}

const char * choice(int c)
{
    if(c == 1)
        return "add";
    else if (c == 2)
        return "sub";
    else if (c ==3)
        return "div";
    else if (c == 4)
        return "multi";
    else
        return "Invalid number!";
}