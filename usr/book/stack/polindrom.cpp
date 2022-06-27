#include <iostream>

using namespace std;

#define SIZE    100

bool is_polindrom(char str[]);

int main(void)
{
        char str[SIZE];
        gets(str);

        if(is_polindrom(str))
                cout << "what you enter is a polindrom" << endl;
        else
                cout << "what you enter is not a polindrom" << endl;

        return 0;
}
