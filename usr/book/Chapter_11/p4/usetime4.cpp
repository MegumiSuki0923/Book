#include "mytime4.h"

int main(void)
{
	Time coding(2, 30);
	Time fixing(1, 45);
	Time total;
	Time diff;
	Time adjusted;

	cout << "Coding time is ";
//	coding.show();
	cout << coding;

	cout << "Fixing time is ";
//	fixing.show();
	cout << fixing;

	cout << "Now we sum above: ";
	total = coding + fixing;
//	total.show();
	cout << total;

	cout << "Now we diff above: ";
	diff = coding - fixing;
//	diff.show();
	cout << diff;

	cout << "Now we adjusted above: ";
//	adjusted = coding * 1.5;
	adjusted = 1.5 * coding;
//	adjusted.show();
	cout << adjusted;

	cout << "***********************************" << endl;
	cout << coding << fixing;

	return 0;
}
