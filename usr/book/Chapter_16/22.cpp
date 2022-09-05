#include <iostream>
#include <initializer_list>

using namespace std;

double sum(initializer_list<double> il);

int main(void)
{
	initializer_list<double> a({1.1, 2.2, 3.3, 4.4});
	cout << "Sum is " << sum(a) << endl;

	initializer_list<double> b{1.1, 2.2, 3.3, 4.4, 5.5};
	cout << "Sum is " << sum(b) << endl;

	return 0;
}

double sum(initializer_list<double> il)
{
	double total;

	for(auto p = il.begin(); p != il.end(); p++)
		total += *p;

	return total;
}
