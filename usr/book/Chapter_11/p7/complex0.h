#ifndef __COMPLEX0_H__
#define __COMPLEX0_H__

#include <iostream>

using namespace std;

class complex
{
private:
    double real;
    double imaginary;

public:
    complex();
    complex(double r, double i);

    //重载运算符
    complex operator+(const complex &c) const;
    complex operator-(const complex &c) const;
    complex operator*(const complex &c) const;
    complex operator~() const;

    //友元函数
    friend complex operator*(double mult, const complex &c);
    friend ostream &operator<<(ostream &os, const complex &c);
    friend istream &operator>>(istream &is, complex &c);
};

#endif