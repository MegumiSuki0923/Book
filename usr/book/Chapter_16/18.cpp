#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void Show(const int &i);

int main(void)
{
	int ar[10] = {1, 4, 5, 4, 6, 7, 4, 9, 8, 4};

	list<int> la(ar, ar + 10);
	list<int> lb(ar, ar + 10);

	cout << "Original list:" << endl;
	cout << "la: ";
	for_each(la.begin(), la.end(), Show);
	cout << endl;
	cout << "lb: ";
	for_each(lb.begin(), lb.end(), Show);
	cout << endl;

	cout << "After la.remove(4) method:" << endl;
	la.remove(4);
	cout << "la: ";
        for_each(la.begin(), la.end(), Show);
        cout << endl;

	cout << "After remove(lb.begin(), lb.end(), 4) function:" << endl;
	list<int>::iterator li;
	li = remove(lb.begin(), lb.end(), 4);
	cout << "lb: ";
	for_each(lb.begin(), lb.end(), Show);
        cout << endl;

	cout << "After use lb.erase(li, lb.end())";
	lb.erase(li, lb.end());
	cout << endl;
	cout << "lb: ";
        for_each(lb.begin(), lb.end(), Show);
        cout << endl;

	return 0;
}

void Show(const int &i)
{
	cout << i << " ";
}
