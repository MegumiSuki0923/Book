#ifndef __STONEWT_H__
#define __STONEWT_H__

#include <iostream>

using namespace std;

class Stonewt
{
	public:
		enum Type{STONE, POUNDS, FLOATPOUNDS};
	private:
		//枚举的方式
		enum{Lbs_per_stn = 14};
		int stone;
		double pds_left;
		double pounds;
		Type type;
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();

		void Set_Type(Type);
		Stonewt operator+(const Stonewt &s) const;
		Stonewt operator-(const Stonewt &s) const;
		Stonewt operator*(double n) const;

		friend ostream &operator<<(ostream &os, const Stonewt &s);
};

#endif
