#ifndef __EXC_MEAN_H
#define __EXC_MEAN_H

#include <iostream>

using namespace std;

class bad_hmean
{
	private:
		double v1;
		double v2;
	public:
		bad_hmean(double a = 0.0, double b = 0.0) : v1(a), v2(b) {}
		void mesg();
};

//在头文件中定义函数，说明这是一个内联函数
inline void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "): invalid arguments: a == -b" << endl;
}

class bad_gmean
{
	public:
		double v1;
		double v2;
	public:
		bad_gmean(double a = 0.0, double b = 0.0) : v1(a), v2(b) {}
		const char *mesg();
};

const char *bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0";
}

#endif
