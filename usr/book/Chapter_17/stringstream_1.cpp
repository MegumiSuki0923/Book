#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(void)
{
	char filename[20];

	cout << "Enter the file name: ";
	cin.get(filename, 20);

	ifstream fin;
	fin.open(filename);

	int sum = 0;
	char ch;
	stringstream str;
	int n;

	while(fin.get(ch))
	{
		str << ch;
	}

	while(str >> n)
	{
		sum += n;
	}

	cout << "Sum = " << sum << endl;

	fin.close();

	return 0;
}
