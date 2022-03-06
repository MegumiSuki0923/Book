#include "p1.h"

int main(void)
{
    std::cout << "Initial the Bank class.\n";
    Bank bank1("ICBC", "lain", 10000);
    bank1.show();

    std::cout << "Now use deposit():\n";
    bank1.deposit(2000);
    bank1.show();

    std::cout << "Now use draw():\n";
    bank1.draw(1000);
    bank1.show();

    return 0;
}