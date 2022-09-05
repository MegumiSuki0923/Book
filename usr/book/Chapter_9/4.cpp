#include <iostream>

using namespace std;

void oil(int x);

int main(void)
{
	//自动变量
	int texas = 31;
	int year = 2011;

	cout << "In main(), texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;
	cout << "In main(), year = " << year << ", ";
	cout << "&year = " << &year << endl;

	oil(texas);

	return 0;
}

void oil(int x)
{
	int texas = 31;
	cout << "In oil(), texas = " << texas << ", ";

	{
		int texas = 113;
		cout << "In block, texas = " << texas << endl;
	}

	cout << "Post-block, texas = " << texas << ", ";
	cout << "&texas = " << &texas << endl;
}
