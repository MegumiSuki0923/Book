#include "p7.h"

int main(void)
{
	char name[19];
	int CI;

	Plorg p1;
	p1.show();

	cout << endl;
	Plorg p2("hello", 17);
	p2.show();

	cout << endl;
	cout << "Please enter the name: ";
	cin.getline(name, 19);
	cout << "Please enter the CI: ";
	cin >> CI;
	Plorg p3(name ,CI);
	p3.show();

	return 0;
}
