#include "string.h"
#include <cstring>

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char *s) // String str("hello world)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[4];
	strcpy(str, "C++");
	num_strings++;
}

//复制构造函数
String::String(const String &st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	num_strings++;
}

String::~String()
{
	--num_strings;
	delete[] str;
}

String &String::operator=(const String &st)
{
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

String &String::operator=(const char *s)
{
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	return *this;
}

char &String::operator[](int i)
{
	return str[i];
}

bool operator<(const String &str1, const String &str2)
{
	return (strcmp(str1.str, str2.str) < 0);
}

bool operator>(const String &str1, const String &str2)
{
       	return str2 < str1;
}

bool operator==(const String &str1, const String &str2)
{
	return (strcmp(str1.str, str2.str) == 0);
}

ostream &operator<<(ostream &os, const String &st)
{
	os << st.str;
	return os;
}

istream &operator>>(istream &is, String &s)
{
	char temp[String::CINLIMIT];
	is.get(temp, String::CINLIMIT);
	if(is)
		s = temp;
	while(is && is.get() != '\n')
	{
		continue;
	}

	return is;
}
