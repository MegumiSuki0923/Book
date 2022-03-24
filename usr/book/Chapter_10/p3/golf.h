#ifndef __GOLF_H__
#define __GOLF_H__

#include <iostream>
#include <cstring>

using namespace std;

class Golf
{
	private:
		static const int Len = 40;
		int handicap;
		char fullname[Len];
	public:
		Golf(const char* name, int hc);
		Golf();
		void sethandicap(const int hc);
		void show() const;
};

#endif
