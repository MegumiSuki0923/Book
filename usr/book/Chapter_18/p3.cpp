#include <iostream>

using namespace std;

long double sum_value(){return 0;}

template<typename T, typename... Args>
long double sum_value(const T &t, const Args... args)
{
	long double sum = t + sum_value(args...);

	return sum;
}

int main(void)
{
	cout << sum_value(1, 2, 3, 4, 5) << endl;
	cout << sum_value('a', 'b', 13.1, 5, 3) << endl;

	return 0;
}
