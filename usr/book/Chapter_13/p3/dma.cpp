#include "dma.h"
#include <cstring>

ABC::ABC(const char *l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

ABC::ABC(const ABC &abc)
{
    label = new char[strlen(abc.label) + 1];
    strcpy(label, abc.label);
    rating = abc.rating;
}

ABC::~ABC()
{
    delete []label;
}

ABC &ABC::operator=(const ABC &abc)
{
    if(this == &abc)
        return *this;
    delete []label;
    label = new char[strlen(abc.label) + 1];
    strcpy(label, abc.label);
    rating = abc.rating;
    return *this;
}

ostream &operator<<(ostream &os, const ABC &abc)
{
    os << "label: " << abc.label << endl;
    os << "rating: " << abc.rating << endl;
    return os;
}

void ABC::View() const
{
	cout << "Label: " << label << endl;
	cout << "Rating: " << rating << endl;
}

baseDMA::baseDMA(const char*l, int r) : ABC(l, r)
{}

baseDMA::baseDMA(const baseDMA &abc) : ABC(abc)
{}

void baseDMA::View() const
{
	ABC::View();
}

lacksDMA::lacksDMA(const char *l, int r, const char *c) : ABC(l, r)
{
	strncpy(color, c, COL_LEN - 1);
	color[COL_LEN] = '\0';
}

lacksDMA::lacksDMA(const ABC &abc, const char *c) : ABC(abc)
{
	strncpy(color, c, COL_LEN - 1);
       	color[COL_LEN] = '\0';
}

ostream &operator<<(ostream &os, const lacksDMA &ld)
{
	//把派生类的对象(rs)通过强制类型转换，转换为基类的对象。多了(派生类)往少了(基类)转换是可以的，但反过来却不行
	//通过调用基类的<<运算符，来把基类的信息打印出来
	os << (const ABC &)ld;
	os << "color: " << ld.color << endl;
	return os;
}

void lacksDMA::View() const
{
	ABC::View();
	cout << "color: " << color << endl;
}

hasDMA::hasDMA(const char *l, int r, const char *s) : ABC(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}

hasDMA::hasDMA(const ABC &abc, const char *s) : ABC(abc)
{
	style = new char[strlen(s) + 1];
       	strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs) : ABC(hs)
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

	ABC::operator=(hs);

	delete []style;
	style = new char[strlen(hs.style) + 1];
	strcpy(style, hs.style);
	return *this;
}

ostream &operator<<(ostream &os, const hasDMA &hs)
{
	os << (const ABC &)hs;
	os << "style: " << hs.style << endl;
	return os;
}

void hasDMA::View() const
{
	ABC::View();
	cout << "style: " << style << endl;
}
