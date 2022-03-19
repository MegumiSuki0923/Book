
#include "stonewt.h"

int main(void)
{
	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	incognito.Set_Type(Stonewt::POUNDS);
	cout << incognito;
	wolfe.Set_Type(Stonewt::FLOATPOUNDS);
	cout << wolfe;
	taft.Set_Type(Stonewt::STONE);
	cout << taft;

	taft = incognito + wolfe;
	taft.Set_Type(Stonewt::STONE);
	cout << "taft = " << taft << endl;

	taft = wolfe - incognito;
	taft.Set_Type(Stonewt::FLOATPOUNDS);
	cout << "taft = " << taft << endl;

	incognito = incognito * 2;
	incognito.Set_Type(Stonewt::POUNDS);
	cout << "icognito = " << incognito << endl;

	return 0;
}
