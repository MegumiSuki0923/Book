#ifndef __P2_H__
#define __P2_H__

#include <cstring>
#include <iostream>

using namespace std;

class Person
{
	private:
		static const int LIMIT = 25;
		string lname;
		char fname[LIMIT];
	public:
		//两种构造函数
		Person() {lname = ""; fname[0] = '\0'; }
		Person(const string &ln, const char *fn = "Heyyou");

		//firstname lastname format
		void Show() const;
		//lastname firstname format
		void FormalShow() const;
};

#endif
