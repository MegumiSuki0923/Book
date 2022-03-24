#include "cow.h"
#include <iostream>

using namespace std;

int main(void)
{
	Cow cow1;
	Cow cow2("cow2", "badminton", 100);
	Cow cow3(cow2);

	cow1 = cow2;

	cow1.ShowCow();
	cow2.ShowCow();
	cow3.ShowCow();

	return 0;
}
