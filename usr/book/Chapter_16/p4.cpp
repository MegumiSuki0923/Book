#include <iostream>
#include <algorithm>

using namespace std;

int reduce(long ar[], int n);

int main(void)
{
	long arr[5] = {100, 200, 500, 200, 100};

	int size = reduce(arr, 5);

	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}

int reduce(long ar[], int n)
{
	sort(ar, ar + n);
	long *pt = unique(ar, ar + n);

	return pt - ar;
}
