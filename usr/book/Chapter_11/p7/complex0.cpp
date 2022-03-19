#include "complex0.h"

complex::complex()
{
    real = imaginary = 0.0;
}

complex::complex(double r, double i)
{
    real = r;
    imaginary = i;
}

complex complex::operator+(const complex &c) const
{
    return complex(real + c.real, imaginary + c.imaginary);
}

complex complex::operator-(const complex &c) const
{
    return complex(real - c.real, imaginary - c.imaginary);
}

complex complex::operator*(const complex &c) const
{
    return complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

complex complex::operator~() const
{
    return complex(real, -imaginary);
}

ostream &operator<<(ostream &os, const complex &c)
{
    os << "real is " << c.real << " and imaginary is " << c.imaginary << endl;
    return os;
}

istream &operator>>(istream &is, complex &c)
{
    is >> c.real >> c.imaginary;
    return is;
}

complex operator*(double mult, const complex &c)
{
    return complex(mult * c.real, mult * c.imaginary);
}