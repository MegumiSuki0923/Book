#ifndef __DMA_H__
#define __DMA_H__

#include <iostream>

using namespace std;

class baseDMA
{
    private:
        char *label;
        int rating;
    public:
        baseDMA(const char *l = "null", int r = 0);
        baseDMA(const baseDMA &rs);
        virtual ~baseDMA();
        baseDMA &operator=(const baseDMA &rs);
        friend ostream &operator<<(ostream &os, const baseDMA &rs);
};

class lacksDMA : public baseDMA
{
    private:
        enum{COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char *l = "null", int r = 0, const char *c = "blank");
        lacksDMA(const baseDMA &rs, const char *c = "blank");

	friend ostream &operator<<(ostream &os, const lacksDMA &rs);
};

class hasDMA : public baseDMA
{
	private:
		char *style;
	public:
		hasDMA(const char *l = "null", int r = 0, const char *s = "none");
		hasDMA(const baseDMA &rs, const char *s = "none");

		//默认构造函数不会使用new，就会变成指针拷贝给指针，这样就成了浅拷贝，而不是深拷贝
		hasDMA(const hasDMA &hs);
		//先去调用派生类的析构函数，再去调用基类的析构函数
		~hasDMA();
		hasDMA &operator=(const hasDMA &hs);

		friend ostream &operator<<(ostream &os, const hasDMA &hs);
};

#endif
