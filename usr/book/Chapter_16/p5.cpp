#include <iostream>
#include <list>

using namespace std;

template<class T>
int reduce(T ar[], int n);

int main(void)
{
	long arr[5] = {100, 200, 500, 200, 100};

	int size = reduce(arr, 5);

	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	string str[5] = {"hello", "world", "good", "morning", "good"};
	size = reduce(str, 5);
	for(int i = 0; i < size; i++)
		cout << str[i] << " ";
	cout << endl;

	return 0;
}

template<class T>
int reduce(T ar[], int n)
{
	list<T> li;

	for(int i = 0; i < n; i++)
		li.push_back(ar[i]);

	li.sort();
	li.unique();

	auto pt = li.begin();
	for(int i = 0; i < li.size(); i++, pt++)
		ar[i] = *pt;

	return li.size();
}
