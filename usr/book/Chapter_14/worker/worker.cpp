#include "worker.h"

void Worker::Set()
{
	cout << "Enter worker's fullname: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while(cin.get() != '\n');
}

void Worker::Show() const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

void Waiter::Set()
{
	Worker::Set();
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while(cin.get() != '\n');
}

void Waiter::Show() const
{
	Worker::Show();
	cout << "Panache rating: " << panache << endl;
}

const char* Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
	int i;
	for(i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "  ";
		if(i % 4 == 3)
			cout << endl;
	}
	cout << "Now i is " << i << endl;
	if(i % 4 != 0)
		cout << endl;

	cout << "Please enter a value between 0 and 6: " ;
	while(cin >> voice)
	{
		if(voice <=0 && voice < Vtypes)
			break;
	}
	while(cin.get() != '\n');
}

void Singer::Show() const
{
	Worker::Show();
	cout << "voice range: " << pv[voice] << endl;
}
