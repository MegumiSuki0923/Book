#include <iostream>
#include <memory>
#include <string>

using std::auto_ptr;
using std::string;
using std::endl;
using std::cout;

int main(void)
{
    auto_ptr<string> fime[5] =
        {
            auto_ptr<string>(new string("Fowl Balls")),
            auto_ptr<string>(new string("Duck walks")),
            auto_ptr<string>(new string("Chicken Runs")),
            auto_ptr<string>(new string("Turkey Errors")),
            auto_ptr<string>(new string("Goose Eggs")),
        };
    
    auto_ptr<string> pwin;
    pwin = fime[2];

    for(int i = 0; i < 5; i++)
        cout << *fime[i] << endl;
    cout << "The winner is " << *pwin << endl;

    return 0;
}