#include "support.h"

using namespace std;

void update(double dt)
{
	warming += dt;
	cout << "Updating global warming to " << warming << " degrees." << endl;
}

void local(void)
{
	double warming = 0.8;

	cout << "Local warming is " << warming << " degrees." << endl;
	//注意到这里使用的::warming可以表示变量的全局版本
	cout << "But global warming is "<< ::warming << " degrees." << endl;
}
