#include "string2.h"
#include <cstring>
#include <cctype>

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

String operator+(const char *str, const String &st)
{
	String temp;

	temp.len = strlen(str) + st.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, str);
	strcat(temp.str, st.str);

	return temp;
}

String String::operator+(const String &st)
{
	String temp;

	temp.len = len + st.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, str);
	strcat(temp.str, st.str);

	return temp;
}

void String::Stringup()
{
	for(int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
}

void String::Stringlow()
{
	for(int i = 0; i < len; i++)
                str[i] = tolower(str[i]);
}

int String::has(char c) const
{
	int count = 0;

	for(int i = 0; i < len; i++)
	{
		if(str[i] == c)
			count++;
	}

	return count;
}
