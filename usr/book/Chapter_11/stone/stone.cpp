
#include "stonewt.h"

int main(void)
{
	Stonewt incognito = 275;  //same as Stonewt incognito(275); Stonewt incognito = Stonewt(275)
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	incognito.show_stn();
	wolfe.show_stn();
	taft.show_lbs();

	cout << "--------------------------------------" << endl;
	incognito = 276.8; //再调用一次
	taft = 325;
	incognito.show_stn();
	taft.show_lbs();

	return 0;
}
