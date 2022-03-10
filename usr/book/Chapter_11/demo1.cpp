#include <iostream>

using namespace std;

class Num
{
	public:
		int n;
	public:
		Num();
		Num(int m);
		void show() const;
};

Num::Num()
{
	n = 0;
}

Num::Num(int m)
{
	n = m;
}

void Num::show() const
{
	cout << "n = " << n << endl;
}

Num operator+(const Num &a, const Num &b)
{
	Num temp;

	temp.n = a.n + b.n;

	return temp;
}

int main(void)
{
	Num a(10);
	a.show();

	Num b(20);
	b.show();

	Num c;
	c = a + b;
	c.show();

	return 0;
}
