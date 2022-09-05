#include "classic.h"
#include <cstring>

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(label) + 1];
	strcpy(label, d.label);
       	selections = d.selections;
       	playtime = d.playtime;
}

Cd::Cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete []performers;
	delete []label;
}

void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections:" << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Cd &Cd::operator=(const Cd &d)
{
	if(this == &d)
		return *this;
	delete []performers;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	delete []label;
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic() : Cd()
{
	name = nullptr;
}

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x) : Cd(s1, s2, n, x)
{
	name = new char[strlen(s3) + 1];
	strcpy(name ,s3);
}

Classic::Classic(const Classic &c) : Cd(c)
{
	name = new char[strlen(c.name) + 1];
	strcpy(name, c.name);
}

Classic::~Classic()
{
	delete []name;
}

void Classic::Report() const
{
	Cd::Report();
	cout << "name: " << name << endl;
}

Classic &Classic::operator=(const Classic &c)
{
	if(this == &c)
		return *this;
	Cd::operator=(c);
	delete []name;
	name = new char[strlen(c.name) + 1];
	strcpy(name, c.name);
	return *this;
}
