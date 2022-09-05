#include <iostream>
#include <initializer_list>

using namespace std;

template<typename T>
T average_list(initializer_list<T> i)
{
	T sum;
	int count = 0;

	for(auto p = i.begin(); p <= i.end(); p++)
	{
		count++;
		sum += *p;
	}

	return sum / count;
}

int main(void)
{
	auto p = average_list({15.4, 10.7, 9.0});
	cout << p << endl;

	cout << average_list({20, 30, 19, 17, 45, 38}) << endl;

	auto ad = average_list<double>({'A', 70, 65.33});
	cout << ad << endl;

	return 0;
}
