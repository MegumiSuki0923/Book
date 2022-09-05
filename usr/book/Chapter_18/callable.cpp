#include "somedefs.h"

double dub(const double &d) {return 2.0 * d;}
double square(const double &d) {return d * d;}

int main(void)
{
	double y = 1.21;

	//method 1  F -> double (*)(double)
	cout << use_f(y, dub) << endl;
	cout << use_f(y, square) << endl;

	//method 2
	cout << use_f(y, Fq(5.0)) << endl;
	cout << use_f(y, Fp(5.0)) << endl;

	return 0;
}
