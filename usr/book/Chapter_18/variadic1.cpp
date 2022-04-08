#include <iostream>
#include <string>

using namespace std;

void show_list(){}

template<typename T, typename... Args>
void show_list(T value, Args... args)
{
	cout << value << ", ";
	show_list(args...);
}

int main(void)
{
	int n = 14;
	double x = 2.7214;
	string mr = "Mr. Lain";

	show_list(n, x);
	show_list(x*x, '!', 7, mr);

	return 0;
}
