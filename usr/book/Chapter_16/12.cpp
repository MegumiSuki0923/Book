#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

void outint(const int &i)
{
	cout << i << " ";
}

int main(void)
{
	list<int> one(5, 2);
	cout << "List one: ";
	for_each(one.begin(), one.end(), outint);
	cout << endl;

	int stuff[5] = {1, 2, 3, 4, 5};
	list<int> two;
	two.insert(two.begin(), stuff, stuff + 5);
	cout << "List two: ";
	for_each(two.begin(), two.end(), outint);
        cout << endl;

	int more[6] = {4, 1, 5, 3, 1, 4};
	list<int> three(two);
	three.insert(three.end(), more, more + 6);
	cout << "List three: ";
        for_each(three.begin(), three.end(), outint);
        cout << endl;

	cout << "Remove 4 from List three: ";
	three.remove(4);
	for_each(three.begin(), three.end(), outint);
        cout << endl;

	cout << "List three after splice: ";
	three.splice(three.begin(), one);
	for_each(three.begin(), three.end(), outint);
	cout << endl;

	cout << "List three after unique: ";
	three.unique();
	for_each(three.begin(), three.end(), outint);
        cout << endl;

	cout << "List three after sort and unique: ";
	three.sort();
	three.unique();
	for_each(three.begin(), three.end(), outint);
        cout << endl;

	cout << "Sort two and merge with three: ";
	two.sort();
	three.merge(two);
	for_each(three.begin(), three.end(), outint);
        cout << endl;

	return 0;
}
