#include "stock20.h"
#include <iostream>

int main(void)
{
	const Stock stock1("NanoSmart", 12, 20.0);
	//stock1.show();
	cout << stock1;

	Stock stock2 = Stock("Boffo objects", 2, 2.0);
	//stock2.show();
	cout << stock2;

	const Stock *top = &stock1.topval(stock2);
	//top.show();
	cout << *top;

	return 0;
}
