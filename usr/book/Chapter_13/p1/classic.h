#ifndef __CLASSIC_H__
#define __CLASSIC_H__

#include <iostream>

using namespace std;

class Cd
{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;

public:
	Cd(char *s1, char *s2, int n, double x);
	Cd(const Cd &d);
	Cd();
	virtual ~Cd(){};
	virtual void Report() const;
	Cd &operator=(const Cd &d);
};

class Classic : public Cd
{
private:
	char name[40];

public:
	Classic(char *s1, char *s2, char *s3, int n, double x);
	Classic(const Classic &c);
	Classic();
	~Classic(){};
	virtual void Report() const;
	Classic &operator=(const Classic &c);
};

#endif
