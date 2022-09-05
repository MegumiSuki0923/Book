#include "brass.h"

Brass::Brass(const string &s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if(amt < 0)
       cout << "Negative deposit is not allowed!" << endl;
    else
        balance += amt; 
}

void Brass::Withdraw(double amt)
{
    if(amt < 0)
        cout << "Withdraw amount must be positive." << endl;
    else if(amt <= balance)
        balance -= amt;
    else
        cout << "Withdraw amount exceeded your balance!" << endl;
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    cout << "Client: " << fullName << endl;
    cout << "Account number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
}

BrassPlus::BrassPlus(const string &s, long an, double bal, double ml, double r) : Brass(s, an, bal)
{
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) : Brass(ba)
{
    maxLoan = ml;
    rate = r;
    owesBank = 0.0;
}

void BrassPlus::ViewAcct() const
{
    Brass::ViewAcct();
    cout << "Maxium load: $" << maxLoan << endl;
    cout << "Loan rate: " << rate << endl;
    cout << "Owed to bank: "<< owesBank << endl;
}

void BrassPlus::Withdraw(double amt)
{
    double bal = Balance();
    if(amt <= bal)
        Brass::Withdraw(amt);
    else if(amt > bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank = advance * (1.0 + rate);
        cout << "Bank advanc: $" << advance << endl;
        cout << "Finance charger: " << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded!" << endl;
}