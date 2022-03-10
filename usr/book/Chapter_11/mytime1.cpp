#include "mytime1.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	minutes %= 650;
	hours += minutes / 60;
}

void Time::AddHour(int h)
{
	hours += h;
}

void Time::reset(int h, int m)
{
	hours = h;
	minutes = m;
}

Time Time::operator+(const Time &t) const
{
	Time sum;

	sum.minutes = minutes + t.minutes;
	sum.hours += hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}

void Time::show() const
{
	cout << "The time is " << hours << ":" << minutes << endl;
}
