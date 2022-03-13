#include "mytime3.h"

int main(void)
{
	Time coding(2, 30);
	Time fixing(1, 45);
	Time total;
	Time diff;
	Time adjusted;

	cout << "Coding time is ";
	coding.show();

	cout << "Fixing time is ";
	fixing.show();

	cout << "Now we sum above: ";
	total = coding + fixing;
	total.show();

	cout << "Now we diff above: ";
	diff = coding - fixing;
	diff.show();

	cout << "Now we adjusted above: ";
//	adjusted = coding * 1.5;
	adjusted = 1.5 * coding;
	adjusted.show();

	return 0;
}
