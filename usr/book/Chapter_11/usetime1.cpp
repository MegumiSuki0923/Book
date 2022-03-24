#include "mytime1.h"

int main(void)
{
	Time coding(2, 30);
	Time fixing(1, 45);
	Time total;

	cout << "Coding time is ";
	coding.show();

	cout << "Fixing time is ";
	fixing.show();

	cout << "Now we sum above: ";
//	total = coding.Sum(fixing);
	total = coding + fixing;
	total.show();

	return 0;
}
