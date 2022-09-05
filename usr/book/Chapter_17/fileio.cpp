#include <iostream>
#include <fstream>
//#include <string>

using namespace std;

int main(void)
{
	char filename[20];

	cout << "Enter the file name: ";
	cin.get(filename, 20);

	ofstream fout;
	fout.open(filename);

	fout << "Keep your eyes open." << endl;
	float num;
	cout << "Please enter your secret number: ";
	cin >> num;
	fout << "The secret number is " << num << endl;

	fout.close();

	ifstream fin;
	fin.open(filename);
	char ch;
	while(fin.get(ch))
		cout << ch;
	fin.close();

	return 0;
}
