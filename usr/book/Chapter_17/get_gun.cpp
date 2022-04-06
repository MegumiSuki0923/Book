#include <iostream>

using namespace std;

const int limit = 255;

int main(void)
{
	char str[limit];
	cout << "Enter a string:";
	cin.getline(str, limit, '#');
	cout << "Here is your input: " << str << endl;
	char ch;
	cin.get(ch);
	cout << "The next char is " << ch << endl;

	cin.ignore(limit, '\n');

	cout << "----------------------" << endl;
	cin.get(str, limit, '#');
	cout << "Here is your input: " << str << endl;
	cin.get(ch);
	cout << "The next char is " << ch << endl;

	return 0;
}
