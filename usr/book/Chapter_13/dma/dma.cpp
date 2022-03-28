#include "dma.h"
#include <cstring>

baseDMA::baseDMA(const char *l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

baseDMA::baseDMA(const baseDMA &rs)
{
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

baseDMA::~baseDMA()
{
    delete []label;
}

baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    if(this == &rs)
        return *this;
    delete []label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

ostream &operator<<(ostream &os, const baseDMA &rs)
{
    os << "label: " << rs.label << endl;
    os << "rating: " << rs.rating << endl;
    return os;
}

lacksDMA::lacksDMA(const char *l, int r, const char *c) : baseDMA(l, r)
{
	strncpy(color, c, COL_LEN - 1);
	color[COL_LEN] = '\0';
}

lacksDMA::lacksDMA(const baseDMA &rs, const char *c) : baseDMA(rs)
{
	strncpy(color, c, COL_LEN - 1);
       	color[COL_LEN] = '\0';
}

ostream &operator<<(ostream &os, const lacksDMA &rs)
{
	//把派生类的对象(rs)通过强制类型转换，转换为基类的对象。多了(派生类)往少了(基类)转换是可以的，但反过来却不行
	//通过调用基类的<<运算符，来把基类的信息打印出来
	os << (const baseDMA &)rs;
	os << "color: " << rs.color << endl;
	return os;
}

hasDMA::hasDMA(const char *l, int r, const char *s) : baseDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const baseDMA &rs, const char *s) : baseDMA(rs)
{
	style = new char[strlen(s) + 1];
       	strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs) : baseDMA(hs)
{
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete []style;
}

hasDMA &hasDMA::operator=(const hasDMA &hs)
{
	if(this == &hs)
		return *this;

	baseDMA::operator=(hs);

	delete []style;
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
	return *this;
}

ostream &operator<<(ostream &os, const hasDMA &hs)
{
	os << (const baseDMA &)hs;
	os << "style: " << hs.style << endl;
	return os;
}
