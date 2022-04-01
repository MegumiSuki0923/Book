#include "winec.h"

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : label(l), year(y), info(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

Wine::Wine(const char *l, int y) : label(l), year(y), info(ArrayInt(0, 0), ArrayInt(0, 0))
{
}

void Wine::GetBottles()
{
	cout << "Enter " << label << " data for " << year << " year(s): " << endl;
	for(int i = 0; i < year; i++)
	{
		cout << "Enter year: ";
		cin >> info.first()[i];
		cout << "Enter bottles for that years: ";
		cin >> info.second()[i];
	}
}

int Wine::sum() const
{
	return info.second().sum();
}

void Wine::Show() const
{
	cout << "Wine: " << label << endl;
		cout << "	 Year	Bottles" << endl;
	for(int i = 0; i < year; i++)
		cout << "	" << info.first()[i] << "	" << info.second()[i] << endl;
}
