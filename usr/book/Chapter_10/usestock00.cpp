#include "stock00.h"
#include <iostream>

int main(void)
{
	Stock fluffy_the_cat;
	fluffy_the_cat.acquire("NanoSmart", 20, 12.5);
	fluffy_the_cat.show();

	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();

	fluffy_the_cat.sell(400, 20.00);
	fluffy_the_cat.show();

	fluffy_the_cat.buy(30000, 41.125);
	fluffy_the_cat.show();

	fluffy_the_cat.sell(30000, 0.125);
	fluffy_the_cat.show();

	return 0;
}
