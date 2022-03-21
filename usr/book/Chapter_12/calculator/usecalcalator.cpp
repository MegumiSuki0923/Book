//
// Created by hy214 on 2022/3/21.
//

#include "calculator.h"
#include <iostream>

using namespace std;

int main()
{
    int choice;
    double num1, num2;

    while(true)
    {
        cout << "which algorithm do you want to use: \n";
        cout << "1 add  2 sub  3 div  4 multi (q to quit)";
        cin >> choice;

        cout << "Your choice is " << choice << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice)
        {
            case 1:
                add(num1, num2);
                break;
            case 2:
                sub(num1, num2);
                break;
            case 3:
                division(num1, num2);
                break;
            case 4:
                multi(num1, num2);
            default:
                cout << "Invalid number! " << endl;
                break;
        }

        break;
    }

    return 0;
}