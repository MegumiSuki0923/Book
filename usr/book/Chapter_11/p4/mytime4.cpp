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

Time operator+(const Time &s, const Time &t)
{
	Time sum;

	sum.minutes = s.minutes + t.minutes;
	sum.hours += s.hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;

	return sum;
}

Time operator-(const Time &s, const Time &t)
{
	Time diff;

	int total1, total2;
	total1 = s.hours * 60 + s.minutes;
	total2 = t.hours * 60 + t.minutes;
	diff.hours = (total1 - total2) / 60;
	diff.minutes = (total1 - total2) % 60;

	return diff;
}

Time operator*(const Time &s, double mult)
{
	Time result;

	long totalminutes = s.hours * 60 * mult + s.minutes * mult;
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
