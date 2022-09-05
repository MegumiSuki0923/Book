#include "p2.h"

Person::Person(const string &ln, const char *fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	if (lname == "" && fname[0] == '\0')
		cout << "NO NAME!" << endl;
	else
	{
		cout << "firstname lastname format:" << endl;
		cout << fname << " " << lname << endl;
	}
}

void Person::FormalShow() const
{
	if (lname == "" && fname[0] == '\0')
		cout << "NO NAME!" << endl;
	else
	{
		cout << "lastname firstname format:" << endl;
		cout << lname << " " << fname << endl;
	}
}
