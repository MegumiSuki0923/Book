#include <iostream>
// #include <string>

using namespace std;

int main(void)
{
    char ch;
    int count = 0;

    // 方法一
    // cin.get(ch);
    // while(ch != '$')
    // {
    //     count++;
    //     cin.get(ch);
    // }
    // cout << "count = " << count << endl;

    cout << "Enter a string: ";
    while(cin.peek() != '$')
    {
        cin.get(ch);
        count++;
    }
    cout << "count = " << count << endl;

    return 0;
}