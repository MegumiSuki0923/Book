#include "port.h"
#include <iostream>

using namespace std;

int main(void)
{
	Port port1("ABC", "sweet", 200);
	cout << port1 << endl;
	cout << "--------------------------" << endl;

	VintagePort vp1("EFG", "vintage", 300, "Old Jack", 40);
	cout << vp1 << endl;
	cout << "--------------------------" << endl;

	VintagePort vp2(vp1);
	cout << vp2 << endl;
	cout << "--------------------------" << endl;

	Port *p_port;
	p_port = &port1;
	p_port->Show();
	cout << "--------------------------" << endl;

	p_port = &vp1;
	p_port->Show();
	cout << "--------------------------" << endl;

	return 0;
}
