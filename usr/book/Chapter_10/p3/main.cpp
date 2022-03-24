#include "golf.h"

int main()
{
	cout << "The 1st set: " << endl;
	Golf golf1;
	golf1.show();

	cout << "The 2nd set: " << endl;
	Golf golf2("Rick", 20);
	golf2.show();
	cout << endl;

	golf2.sethandicap(19);
	golf2.show();

	return 0;
}
