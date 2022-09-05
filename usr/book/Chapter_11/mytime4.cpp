#include "mytime4.h"

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

Time Time::operator-(const Time &t) const
{
	Time diff;

	int total1, total2;
	total1 = hours * 60 + minutes;
	total2 = t.hours * 60 + t.minutes;
	diff.hours = (total1 - total2) / 60;
	diff.minutes = (total1 - total2) % 60;

	return diff;
}

Time Time::operator*(double multi) const
{
	Time result;

	long totalminutes = hours * 60 * multi + minutes * multi;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}

Time operator*(double m, const Time &t)
{
	Time result;

	long totalminutes = t.hours * 60 * m + t.minutes * m;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;

	return result;
}

ostream &operator<<(ostream &os, const Time &t)
{
	os << t.hours << ": " << t.minutes << endl;
	return os;
}

/*
void Time::show() const
{
	cout << "The time is " << hours << ":" << minutes << endl;
}
*/
