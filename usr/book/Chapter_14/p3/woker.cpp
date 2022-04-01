#include "queue.h"

using namespace std;

void Worker::Set()
{
	cout << "Enter worker's fullname: ";
	getline(cin, fullname);
	cout << "Enter worker's ID:";
	cin >> id;
	while(cin.get() != '\n');
}

void Worker::Show() const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}
