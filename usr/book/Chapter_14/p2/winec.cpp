#include "winec.h"

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : string(l), year(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

Wine::Wine(const char *l, int y) : string(l), year(y), PairArray(ArrayInt(0, 0), ArrayInt(0, 0))
{
}

void Wine::GetBottles()
{
	cout << "Enter " << (const string &) *this << " data for " << year << " year(s): " << endl;
	for(int i = 0; i < year; i++)
	{
		cout << "Enter year: ";
		cin >> PairArray::first()[i];
		cout << "Enter bottles for that years: ";
		cin >> PairArray::second()[i];
	}
}

int Wine::sum() const
{
	return PairArray::second().sum();
}

const string &Wine::Label() const
{
	return (const string &) *this;
}

void Wine::Show() const
{
	cout << "Wine: " << (const string &) *this << endl;
		cout << "	 Year	Bottles" << endl;
	for(int i = 0; i < year; i++)
		cout << "	" << PairArray::first()[i] << "	" << PairArray::second()[i] << endl;
}
