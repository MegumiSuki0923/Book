#include <iostream>

using namespace std;

const int SLEN = 10;

int main(void)
{
	char name[SLEN];
	char title[SLEN];

	cout << "Please enter your name: ";
	cin.get(name, SLEN);

	if(cin.peek() != '\n')
		cout << "Dear " << name << " Sorry, we don't have enougn room to storage your name." << endl;

	while(cin.get() != '\n');

	cout << "Dear " << name << ", please enter your title: ";
	cin.get(title, SLEN);
	if(cin.peek() != '\n')
		cout << "Sorry, we have to truncate your title." << endl;

	while(cin.get() != '\n');

	cout << "Name: " << name << endl;
	cout << "Title: " << title << endl;

	return 0;
}
