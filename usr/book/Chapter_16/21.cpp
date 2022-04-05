#include <iostream>
#include <valarray>
#include <cstdlib>

using namespace std;

typedef valarray<int> vint;

const int SIZE = 12;

void show(const vint &v, int cols);

int main(void)
{
	srand(time(0));

	vint valint(SIZE);
	for(int i = 0; i < SIZE; i++)
		valint[i] = rand() % 10;

	cout << "Original array:" << endl;
	show(valint, 3);

	vint vcols = valint[slice(1, 4, 3)];
	cout << "After slice() method:" << endl;
	show(vcols, 1);

	return 0;
}

void show(const vint &v, int cols)
{
	int lim = v.size();
	for(int i = 0; i < lim; i++)
	{
		cout << v[i];
		if(i % cols == cols - 1)
			cout << endl;
		else
			cout << " ";
	}
	if(lim % cols != 0)
		cout << endl;
}
