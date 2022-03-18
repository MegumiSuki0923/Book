//以下为产生随机数种子必要的头文件
#include "vector.h"
#include <cstdlib>
#include <ctime>
#include <fstream>

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

	ofstream fout;
	fout.open("randwalk.txt");

	//改变随机数的种子 没有这行的话，你编译一次以后，值一直不会变
	srand(time(NULL));

	cout << "Enter target distance ";
	cin >> darget;
	cout << "Enter the length: ";
	cin >> dstep;

	fout << "Target distance: " << target << ", step size: " << dstep << endl;

		while (result.magval() < target)
		{
						       //这里发生了重载 左侧是oftream 右侧是类
			fout << steps << ": (x, y) = " << result << endl;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}

		cout << "After " << steps << " steps, the sujects has following location.\n";
		cout << result;

		fout << "After " << steps << " steps, the sujects has following location.\n";
		fout << result;

		result.polar_mode();
		cout << result << endl;

		fout << result;
		fout << "Average outward distance per step = " << result.magval() /steps << endl;

		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance(q to quit): ";
	}

	cout << "Bye!" << endl;

	return 0;
}
