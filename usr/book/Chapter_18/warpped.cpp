#include "somedefs.h"
#include <functional>

double dub(const double &d) {return 2.0 * d;}
double square(const double &d) {return d * d;}

int main(void)
{
	double y = 1.21;

	function<double(double)> ef1 = dub;
	function<double(double)> ef2 = square;

	function<double(double)> ef3 = Fq(10);
	function<double(double)> ef4 = Fp(10);

	function<double(double)> ef5 = [](double u){return u * u;};
	function<double(double)> ef6 = [](double u){return u * u/2.0;};

	cout << use_f(y, ef1) << endl;
	cout << use_f(y, ef2) << endl;
	cout << use_f(y, ef3) << endl;
	cout << use_f(y, ef4) << endl;
	cout << use_f(y, ef5) << endl;
	cout << use_f(y, ef6) << endl;


	return 0;
}
