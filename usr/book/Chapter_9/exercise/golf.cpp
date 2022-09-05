#include <cstring>
#include <iostream>
#include "golf.h"

using namespace std;

void setgolf(golf &g, const char *name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf &g)
{
	int temp = 1;
	cout << "Please enter the name: ";
	cin.getline(g.fullname, 40);
	if(strcmp(g.fullname, "") == 0)
	{
		return 0;
	}
	else
	{
		cout << "Please enter the handicap:";
		cin >> g.handicap;
		cin.get();
		return 1;
	}
}

void handicap(golf &g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf &g)
{
	cout << "name: " << g.fullname << endl;
	cout << "handicap: " << g.handicap << endl;
	cout << "---------Already done---------" << endl;
}
