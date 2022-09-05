#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdexcept>
#include <string>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

class bad_hmean : public logic_error
{
	public:
		bad_hmean(const string &what_arg = "bad_hmean, invaild arguments") : logic_error(what_arg){}
};

class bad_gmean : public logic_error
{
	public:
		bad_gmean(const string &what_arg = "bad_gmean, invaild argument") : logic_error(what_arg){}
};

int main(void)
{
	double x, y, z;

	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "\nHarmonic mean of " << x << " and " << y << " is " << z << endl;
			z = gmean(x, y);
			cout << "g mean of " << x << " and " << y << " is " << z << endl;
		}
		catch(bad_hmean &bh)
		{
			cout << bh.what();
			cout << "\nEnter a new pair of arguments: ";
			continue;
		}
		catch(bad_gmean &bg)
		{
			cout << bg.what();
			cout << "Sorry, now quit!" << endl;
			break;
		}

		cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
		cout << "Enter next set of number: ";
	}

	return 0;
}

double hmean(double a, double b)
{
	if(a == -b)
		//引发的异常类型为字符串
		throw bad_hmean();

	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if(a < 0 || b < 0)
		throw bad_gmean();

	return sqrt(a*b);
}
