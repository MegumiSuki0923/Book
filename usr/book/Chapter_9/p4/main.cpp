#include "sales.h"

using namespace std;

int main(void)
{
	using namespace SALES;

	double ar[4] = {1.1, 2.2, 3.3, 4.4};
	Sales sl;
	setSales(sl, ar, 3);
	showSales(sl);

	cout << "Now calling the setSales(const Sales &s) function: " << endl;
	setSales(sl);
	showSales(sl);
	return 0;
}
