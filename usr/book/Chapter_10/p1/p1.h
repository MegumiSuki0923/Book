#ifndef __P1_H__
#define __P1_H__

class Bank
{
private:
    char m_name[50];
    char m_account[50];
    double m_balance;

public:
    //构造函数
    Bank(const char *name, const char *account, double balance = 0.0);
    //显示储户信息
    void show() const;
    //存钱
    void deposit(const double money);
    //取钱
    void draw(const double money);
};

#endif