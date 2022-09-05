#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void)
{
	ifstream fin;
	fin.open("abc.txt");

	if(fin.is_open() == false)
	{
		cerr << "Can't open the file!" << endl;
		exit(EXIT_FAILURE);
	}

	string item;
	int counts;
	getline(fin, item, ':');
	while(fin)
	{
		cout << ++counts << ": " << item << endl;
		getline(fin, item, ':');
	}

	return 0;
}
