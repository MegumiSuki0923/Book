#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	string str;

	ifstream fin1;
	ifstream fin2;
	fin1.open("p4_1.dat");
	fin2.open("p4_2.dat");

	ofstream fout;
	fout.open("p4_3.dat");

	if(fin1.is_open() && fin2.is_open() && fout.is_open())
	{
		while(!fin1.eof() || !fin2.eof())
		{
			if(getline(fin1, str) && str.size() > 0)
				fout << str;
			fout << " ";
			if(getline(fin2, str) && str.size() > 0)
				fout << str;
			fout << endl;
		}
		fin1.close();
		fin2.close();
		fout.close();
	}
	else
	{
		cout << "Can't open or creat file." << endl;
		exit(0);
	}

}
