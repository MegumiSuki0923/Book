#ifndef __WORKER_H__
#define __WORKER_H__

#include <iostream>
#include <string>

using namespace std;

class Worker
{
	private:
		string fullname;
		long id;
	public:
		Worker() : fullname("No people"), id(0) {}
		Worker(const string &s, long n) : fullname(s), id(n) {}
		virtual ~Worker() {}
		virtual void Set();
		virtual void Show() const;
};

class Waiter : virtual public Worker
{
	private:
		int panache;
	public:
		Waiter() : Worker(), panache(0) {}
		Waiter(const string &s, long n, int p = 0) : Worker(s, n), panache(p) {}
		Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}
		virtual void Set();
		virtual void Show() const;
};

class Singer : public virtual Worker
{
	protected:
		enum{other, alto, contralto, soprano, bass, baritone, tenor};
		enum{Vtypes = 7};
	private:
		static const char *pv[Vtypes];
		int voice;
	public:
		Singer() : Worker(), voice(other) {}
		Singer(const string &s, long n, int v = other) : Worker(s, n), voice(v) {}
		Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}
		virtual void Set();
		virtual void Show() const;
};

class SingingWaiter : public Waiter, public Singer
{
	public:
		SingingWaiter(const string &s, long n, int p = 0, int v = Singer::other) : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
		SingingWaiter(const Worker &wk, long p = 0, int v = Singer::other) : Worker(wk), Waiter(wk, p), Singer(wk, v) {}
		virtual void Set();
		virtual void Show() const; 
};

#endif
