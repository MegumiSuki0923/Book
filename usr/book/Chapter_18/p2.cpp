#include "cpmv.h"

int main(void)
{
	Cpmv cp1("Computer", "Language");
	Cpmv cp2("C", "C++");
	Cpmv cp3(cp2);
	Cpmv cp4(cp1 + cp2);

	cp1 = cp2;

	return 0;
}
