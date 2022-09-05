#include <iostream>
#include "arraytp.h"

using namespace std;

int main(void)
{
	ArrayTP<int, 10> sum;
	ArrayTP<double, 10> aves;

	//模板嵌套
	ArrayTP<ArrayTP<int, 5>, 10> twodee;

	//在嵌套循环中，外层表示行，内层表示列
	int i, j;
	for(i = 0; i < 10; i++)
	{
		sum[i] = 0;
		for(int j = 0; j < 5; j++)
		{
			twodee[i][j] = (i + 1) * (j + 1);
			sum[i] += twodee[i][j];
		}
		aves[i] = (double)sum[i] / 10;
	}

	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cout.width(2);
			cout << twodee[i][j] << " " ;
		}
		cout << ": sum = " << sum[i] << ", average = " << aves[i] << endl;
	}

	return 0;
}
