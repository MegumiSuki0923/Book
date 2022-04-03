#include <iostream>

using std::cout;
using std::endl;

class A
{
};

class B : public A
{
};

int main(void)
{
	A a;
	B b;

	A *pa = static_cast<A *>(&b);
	B *pb = static_cast<B *>(&a);

	return 0;
}
