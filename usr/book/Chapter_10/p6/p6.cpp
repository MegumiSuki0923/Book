#include "p6.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	cout << "The x is " << x << endl;
	cout << "The y is " << y << endl;
}

Move Move::add(const Move &m)
{
	Move newOne;

	newOne.x = x + m.x;
	newOne.y = y + m.y;

	return newOne;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
