#include "sales.h"

int main(void)
{
	using namespace SALES;

	Sales person1;
	person1.show();

	double ar[4] = {1, 2, 3, 4};
	Sales person2(ar, 3);
	person2.show();

	return 0;
}
