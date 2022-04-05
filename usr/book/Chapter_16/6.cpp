#include <iostream>
#include <memory>
#include <string>

using std::shared_ptr;
using std::string;
using std::endl;
using std::cout;

int main(void)
{
    shared_ptr<string> fime[5] =
        {
            shared_ptr<string>(new string("Fowl Balls")),
            shared_ptr<string>(new string("Duck walks")),
            shared_ptr<string>(new string("Chicken Runs")),
            shared_ptr<string>(new string("Turkey Errors")),
            shared_ptr<string>(new string("Goose Eggs")),
        };

    shared_ptr<string> pwin;
    pwin = fime[2];

    for(int i = 0; i < 5; i++)
        cout << *fime[i] << endl;
    cout << "The winner is " << *pwin << endl;

    return 0;
}
