#ifndef __CLASSIC_H__
#define __CLASSIC_H__

#include <iostream>

using namespace std;

class Cd
{
	private:
		char *performers;
		char *label;
		int selections;
		double playtime;
	public:
		Cd(const char *s1, const char *s2, int n, double x);
		Cd(const Cd &d);
		Cd();
		virtual ~Cd();
		virtual void Report() const;
		Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
	private:
		char *name;
	public:
		Classic(const char *s1, const char *s2, const char *s3, int n, double x);
		Classic(const Classic &c);
		Classic();
		Classic(Classic &c);
		~Classic();
		virtual void Report() const;
		Classic &operator=(const Classic &c);
};

#endif
