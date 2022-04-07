#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
	char filename[20];

	cout << "Enter the file name: ";
	cin.get(filename, 20);

	ifstream fin;
	fin.open(filename);
	char ch;
	while(fin.get(ch))
		cout << ch;
	fin.close();

	return 0;
}
