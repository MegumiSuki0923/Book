#include <iostream>

using namespace std;

int main(void)
{
	int a = 10;
	cout << "a = " << a << endl;

	int *p1 = &a;
	int *p2 = const_cast<int *>(p1);
	*p2 = 20;
	cout << "a = " << a << endl;

	return 0;
}

