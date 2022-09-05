#ifndef __WINEC_H__
#define __WINEC_H__

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

template<class T1, class T2> class Pair;
typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

template <class T1, class T2>
class Pair
{
       	private:
                T1 a;
                T2 b;
       	public:
               	Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval) {}
                T1 &first();
                T2 &second();
                T1 first() const {return a;}
                T2 second() const {return b;}
};

template<class T1, class T2>
T1 &Pair<T1, T2>::first()
{
	return a;
}

template<class T1, class T2>
T2 &Pair<T1, T2>::second()
{
	return b;
}

class Wine : private string, private PairArray
{
	private:
		int year;
	public:
		Wine(const char *l, int y, const int yr[], const int bot[]);
		Wine(const char *l, int y);
		void GetBottles();
		void Show() const;
		const string &Label() const;
		int sum() const;
};

#endif
