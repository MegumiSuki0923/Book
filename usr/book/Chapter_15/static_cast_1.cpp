#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	double x = 10 / 3;
	cout << "x = " << x << endl;

	double y = static_cast<double>(10) / 3;
	cout << "y = " << y << endl;

	return 0;
}
