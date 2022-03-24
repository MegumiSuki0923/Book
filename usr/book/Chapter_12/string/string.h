#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

using namespace std;

class String
{
private:
	char *str;
	int len;
	static int num_strings;
	static const int CINLIMIT = 80;

public:
	String(const char *s);
	String();
	//复制构造函数
	String(const String &st);
	~String();
	int length() const { return len; }

	String &operator=(const String &st);
	String &operator=(const char *s);
	char &operator[](int i);

	friend bool operator<(const String &str1, const String &str2);
	friend bool operator>(const String &str1, const String &str2);
	friend bool operator==(const String &str1, const String &str2);

	friend ostream &operator<<(ostream &os, const String &st);
	friend istream &operator>>(istream &is, String &st);

	static int HowMany();
};

#endif
