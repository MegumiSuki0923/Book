#include "p1.h"

Bank::Bank(const char *name, const char *account, double balance)
{
    strcpy(m_name, name);
    strcpy(m_account, account);
    m_balance = balance;
}

void Bank::show() const
{
    std::cout << "name: " << m_name
              << "account: " << m_account
              << "balance: " << m_balance
              << "\n";
}

void Bank::deposit(const double money)
{
    m_balance += money;
}

void Bank::draw(const double money)
{
    m_balance -= money;
}
