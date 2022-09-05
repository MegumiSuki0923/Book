#include <iostream>
#include <new>
using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main(void)
{
	double *pd1, *pd2;
	int i;

	cout << "Calling new and placement new: " << endl;
	pd1 = new double[N];
	//定位new运算符
	pd2 = new(buffer) double[N];
	for(i = 0; i < N; i++)
		pd1[i] = pd2[i] = 1000 + 0.2 * i;
						    //注意到这里使用的(void *)，是因为buffer是char类型，如果不加的话会使得它按照ascii编码来打印
	cout << "pd1 = " << pd1 << ", buffer = " << (void *)buffer << endl;

	for(i = 0; i < N; i++)
	{
		cout << pd1[i] << " at " << &pd1[i] << ", ";
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

	delete[] pd1;
	//注意到这里并没有delete[] pd2。因为delete只能删除动态内存空间，即使用常规new运算符开辟的空间，没有权限删除buffer（静态内存）
	//如果使用delete[] pd2，编译不会出错，但是执行程序会出错
	return 0;
}
