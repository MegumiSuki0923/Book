#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct planet
{
	char name[20];
	double g;
	long population;
};

int main(void)
{
	planet pl;
	const char *file = "planet.dat";

	ifstream fin;
	fin.open(file, ios_base::in | ios_base::binary);
	if(fin.is_open())
	{
		cout << "Here are the current contents of file " << file << endl;
		while(fin.read((char *)&pl, sizeof pl))
			cout << "Name: " << pl.name << "  population: " << setprecision(2) << pl.population << "  g: " << pl.g << endl;
		fin.close();
	}

	ofstream fout;
	fout.open(file, ios_base::out | ios_base::binary | ios_base::app);
	if(!fout.is_open())
	{
		cout << "Can't open file " << file << endl;
		exit(0);
	}

	cout << "Enter the planet's name (Enter blank line to quit): ";
	cin.get(pl.name, 20);
	while(pl.name[0] != '\0')
	{
		while(cin.get() != '\n');
		cout << "Enter the plannet's population: ";
		cin >> pl.population;
		cout << "Enter the planet's g: ";
		cin >> pl.g;
		while(cin.get() != '\n');
		fout.write((char *)&pl, sizeof pl);
		cout << "Enter the planet's name (Enter blank line to quit): ";
	        cin.get(pl.name, 20);
	}
	fout.close();

	fin.clear();
	fin.open(file, ios_base::in | ios_base::binary);
        if(fin.is_open())
        {
                cout << "Here are the contents of file " << file << endl;
                while(fin.read((char *)&pl, sizeof pl))
	                cout << "Name: " << pl.name << "  population: " << setprecision(0) << pl.population << "  g: " << pl.g << endl;
                fin.close();
        }

	return 0;
}
