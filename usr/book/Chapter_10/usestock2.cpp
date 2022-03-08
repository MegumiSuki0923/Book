#include "stock10.h"
#include <iostream>

int main(void)
{
	const Stock stock1("NanoSmart", 12, 20.0);
	stock1.show();

	Stock stock2 = Stock("Boffo objects", 2, 2.0);
	stock2.show();

	return 0;
}
