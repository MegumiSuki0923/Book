#ifndef __STONEWT1_H__
#define __STONEWT1_H__

#include <iostream>

using namespace std;

class Stonewt
{
	private:
		//枚举的方式
		enum{Lbs_per_stn = 14};
		int stone;
		double pds_left;
		double pounds;
	public:
		Stonewt(double lbs);
		Stonewt(int stn, double lbs);
		Stonewt();
		void show_lbs() const;
		void show_stn() const;

		//添加转换函数
		operator double() const;
		operator int() const;
};

#endif
