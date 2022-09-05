#include <iostream>
#include "stack.h"
#include <cctype>
#include <string>

using namespace std;

const int Num = 10;

int main(void)
{
	int nextin = 0;
	int processed = 0;

	const char *in[Num] = {
		"1: Hank", "2: Kiki",
		"3: Betty", "4: Ian",
		"5: Wolf", "6:Portia",
		"7: Joy", "8: Xav",
		"9: Juan", "10: Misha"
	};

	Stack<const char *>st;

	while(!st.isFull())
	{
//		在c++中，字符串常量就是地址，所以将地址传入zhan是没有问题的
		st.push(in[nextin++]);
	}

	const char* out[Num];
	while(!st.isEmpty())
	{
		st.pop(out[processed++]);
	}

	for(int i = 0; i < Num; i++)
		cout << out[i] << endl;

	return 0;
}
