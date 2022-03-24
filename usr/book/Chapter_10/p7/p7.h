#ifndef __P7_H__
#define __P7_H__

#include <iostream>
#include <cstring>

using namespace std;

class Plorg
{
	private:
		char m_name[19];
		int m_CI;
	public:
		Plorg(const char *name = "Plorga", int CI = 50);
		void show() const;
};

#endif
