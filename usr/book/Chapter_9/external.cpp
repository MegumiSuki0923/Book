#include <iostream>
#include "support.h"

using namespace std;

double warming = 0.3;	//全局变量


int main(void)
{
	cout << "Gloabal warming is " << warming << " degress." << endl; 
	update(0.1);

	local();
	
	return 0;	
}

