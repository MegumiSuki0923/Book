#include "worker.h"

void Worker::Get()
{
	cout << "Enter worker's fullname: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while(cin.get() != '\n');
}

void Worker::Date() const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

void Waiter::Get()
{
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while(cin.get() != '\n');
}

void Waiter::Date() const
{
	cout << "Panache rating: " << panache << endl;
}

void Waiter::Set()
{
	Worker::Get();
	Get();
}

void Waiter::Show() const
{
	Worker::Date();
	Date();
}

const char* Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Get()
{
	int i;
	for(i = 0; i < Vtypes; i++)
	{
		cout << i << ": " << pv[i] << "  ";
		if(i % 4 == 3)
			cout << endl;
	}
	if(i % 4 != 0)
		cout << endl;

	cout << "Please enter a value between 0 and 7:";
	cin >> voice;

	while(cin.get() != '\n');
}

void Singer::Date() const
{
	cout << "voice range: " << pv[voice] << endl;
}

void Singer::Set()
{
	Worker::Get();
	Get();
}

void Singer::Show() const
{
	Worker::Date();
	Date();
}

void SingingWaiter::Set()
{
	Worker::Get();
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Show() const
{
	Worker::Date();
	Waiter::Date();
	Singer::Date();
}
