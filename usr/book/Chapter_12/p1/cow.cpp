#include "cow.h"
#include <cstring>

Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0.0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
	strncpy(name, nm, 20);
	if(strlen(nm) >= 20)
		name[19] = '\0';
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow &c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete []hobby;
	cout << name << " destroyed!" << endl;
}

Cow &Cow::operator=(const Cow &c)
{
	if(this == &c)
		return *this;
	delete []hobby;

	hobby = new char[strlen(c.hobby) + 1];
	strcpy(name, c.name);
	strcpy(hobby, c.hobby);
	weight = c.weight;

	return *this;
}

void Cow::ShowCow() const
{
	cout << "Name: " << name << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "Weight: " << weight << endl;
}
