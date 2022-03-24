#ifndef __STRINGBAD_H__
#define __STRINGBAD_H__

#include <iostream>

using namespace std;

class StringBad
{
	private:
		char *str;
		int len;
		static int num_strings;
	public:
		StringBad(const char *s);
		StringBad();
		//复制构造函数
		StringBad(const StringBad &st);
		~StringBad();

		StringBad &operator=(const StringBad &st);
		friend ostream &operator<<(ostream &os, const StringBad &st);
};

#endif
