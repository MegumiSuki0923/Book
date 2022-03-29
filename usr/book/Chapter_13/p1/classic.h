#ifndef __CLASSIC_H__
#define __CLASSIC_H__

#include <iostream>

using namespace std;

class Cd
{
<<<<<<< HEAD
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
=======
	private:
		char performers[50];
		char label[20];
		int selections;
		double playtime;
	public:
		Cd(const char *s1, const char *s2, int n, double x);
		Cd(const Cd &d);
		Cd();
		virtual ~Cd() {};
		virtual void Report() const;
		Cd &operator=(const Cd &d);
>>>>>>> 7ed585b0c5492a6b956a58c8f6b7b04b9c048b46
};

class Classic : public Cd
{
<<<<<<< HEAD
private:
	char name[40];

public:
	Classic(char *s1, char *s2, char *s3, int n, double x);
	Classic(const Classic &c);
	Classic();
	~Classic(){};
	virtual void Report() const;
	Classic &operator=(const Classic &c);
=======
	private:
		char name[40];
	public:
		Classic(const char *s1, const char *s2, const char *s3, int n, double x);
		Classic(const Classic &c);
		Classic();
		Classic(Classic &c);
		~Classic() {};
		virtual void Report() const;
		Classic &operator=(const Classic &c);
>>>>>>> 7ed585b0c5492a6b956a58c8f6b7b04b9c048b46
};

#endif
