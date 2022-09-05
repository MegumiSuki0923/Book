#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{
	char ch;
	const char *filename = "wuha";

	ifstream fin;
	fin.open(filename);
	if(fin.is_open())
	{
		cout << "Here are the contents of " << filename << " : ";
		while(fin.get(ch))
			cout << ch;

		fin.close();
	}

	ofstream fout;
	fout.open(filename, ios_base::app | ios_base::out);

	if(!fout.is_open())
	{
		cout << "Can't open file " << filename << endl;
		exit(0);
	}

	string str;
	cout << "Enter a string to append: " << endl;
	while(getline(cin, str) && str.size() > 0)
		fout << str << endl;
	fout.close();

	fin.clear();
	fin.open(filename);
	if(fin.is_open())
	{
		cout << "Here are the contents of " << filename << " : ";
		while(fin.get(ch))
			cout << ch;

		fin.close();
	}

	return 0;
}
