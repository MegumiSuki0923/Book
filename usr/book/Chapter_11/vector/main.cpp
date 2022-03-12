//以上为产生随机数种子必要的头文件
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

	//改变随机数的种子 没有这行的话，你编译一次以后，值一直不会变
	srand(time(NULL));

	cout << "Enter target distance(q to quit): ";
	while (cin >> target)
	{
		cout << "Enter the step length: ";
		if (!(cin >> dstep))
			break;
		else if (dstep <= 0)
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		cout << "After " << steps << " steps, the sujects has following location.\n";
		cout << result << endl;

		cout << "Enter target distance(q to quit): ";
	}

	return 0;
}
