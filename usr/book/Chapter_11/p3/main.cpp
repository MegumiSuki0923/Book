//以下为产生随机数种子必要的头文件
#include "vector.h"
#include <cstdlib>
#include <ctime>

using namespace VECTOR;

int main()
{
	double target;
	double dstep;
	Vector result(0.0, 0.0);
	Vector step;
	double direction;
	unsigned long steps = 0;
	unsigned int N;
	unsigned int max = 0;
	unsigned int min = 0;
	unsigned int sum = 0;

	srand(time(NULL));

	cout << "How many times do you want to try: " << endl;
	cin >> N;
	cout << "Enter the step length: ";
	cin >> dstep;

	for (int i = 0; i < N; i++)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		max = (max > steps) ? max : steps;
		if (min == 0)
			min = max;
		else
			min = (min < steps) ? min : steps;
		sum += steps;

		steps = 0;
		result.reset(0.0, 0.0);
	}

	cout << "The max is " << max << endl;
	cout << "The min is " << min << endl;
	cout << "The avarage is " << (double)sum / N << endl;
 
	cout << "Bye!" << endl;
	return 0;
}
