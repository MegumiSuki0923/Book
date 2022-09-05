#include "golf.h"

Golf::Golf()
{
	cout << "Please enter your name: " << endl;
	cin.getline(fullname, Len);
	cout << "Please enter your handicap: " << endl;
	cin >> handicap;
}

Golf::Golf(const char* name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

void Golf::show() const
{
	cout << "name: " << fullname << endl;
	cout << "handicap: " << handicap << endl;
}

void Golf::sethandicap(const int hc)
{
	handicap = hc;
}
