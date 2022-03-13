#ifndef __MYTIME3_H__
#define __MYTIME3_H__

#include <iostream>

using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time();
		Time(int h, int m = 0);
		void AddMin(int m);
		void AddHour(int h);
		void reset(int h = 0, int m = 0);
		Time operator+(const Time &t) const;
		Time operator-(const Time &t) const;
		Time operator*(double multi) const;
		friend Time operator*(double m, const Time &t);
		void show() const; 
};

#endif
