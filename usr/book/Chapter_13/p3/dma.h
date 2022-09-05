#ifndef __DMA_H__
#define __DMA_H__

#include <iostream>

using namespace std;

class ABC
{
	private:
		char *label;
        	int rating;
	public:
		ABC(const char *l = "null", int r = 0);
        	ABC(const ABC &rs);
        	virtual ~ABC();
        	ABC &operator=(const ABC &abc);
        	friend ostream &operator<<(ostream &os, const ABC &abc);
		virtual void View() const;
};

class baseDMA : public ABC
{
    public:
	baseDMA(const char *l = "null", int r = 0);
 	baseDMA(const baseDMA &rs);
        virtual void View() const;
};

class lacksDMA : public ABC
{
    private:
        enum{COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char *l = "null", int r = 0, const char *c = "blank");
        lacksDMA(const ABC &abc, const char *c = "blank");
	friend ostream &operator<<(ostream &os, const lacksDMA &rs);
	virtual void View() const;
};

class hasDMA : public ABC
{
	private:
		char *style;
	public:
		hasDMA(const char *l = "null", int r = 0, const char *s = "none");
		hasDMA(const ABC &abc, const char *s = "none");

		//默认构造函数不会使用new，就会变成指针拷贝给指针，这样就成了浅拷贝，而不是深拷贝
		hasDMA(const hasDMA &hs);
		//先去调用派生类的析构函数，再去调用基类的析构函数
		~hasDMA();
		hasDMA &operator=(const hasDMA &hs);
		friend ostream &operator<<(ostream &os, const hasDMA &hs);
		virtual void View() const;
};

#endif
