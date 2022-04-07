#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void)
{
    string name;
    double hourly;
    double hours;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your hourly wages: ";
    cin >> hourly;
    cout << "Enter number of hours worked: ";
    cin >> hours;

    cout << "First format:" << endl;
    cout << fixed << showpoint;
    cout << setw(30) << name << ": $" << setw(20) << setprecision(2) << hourly << ": " << setw(10) << setprecision(1) << hours << endl;

    cout << "Second format:" << endl;
    cout << left;
    cout << setw(30) << name << ": $" << setw(20) << setprecision(2) << hourly << ": " << setw(10) << setprecision(1) << hours << endl;

    return 0;
}