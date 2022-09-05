#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdexcept>
#include <string>

using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

class mean : public logic_error
{
	private:
		double v1;
		double v2;
	public:
		mean(double a = 0, double b = 0, const string &what_arg = "mean, error") : v1(a), v2(b), logic_error(what_arg){}
		virtual void show() const;
};

class bad_hmean : public mean
{
	public:
		bad_hmean(double a = 0, double b = 0, const string &what_arg = "bad_hmean, invaild arguments") : mean(a, b, what_arg){}
		void show() const;
};

class bad_gmean : public mean
{
	public:
		bad_gmean(double a = 0, double b = 0, const string &what_arg = "bad_gmean, invaild argument") : mean(a, b, what_arg){}
		void show() const;
};

void mean::show() const
{
	cout << "v1 = " << v1 << ", v2 = " << v2 << endl;
}

void bad_hmean::show() const
{
	mean::show();
	cout << what() << endl;
}

void bad_gmean::show() const
{
	mean::show();
	cout << what() << endl;
}

int main(void)
{
	double x, y, z;

	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
			z = gmean(x, y);
			cout << "gmean of " << x << " and " << y << " is " << z << endl;
		}
		catch(mean &m)
		{
			if(typeid(bad_hmean) == typeid(m))
			{
				m.show();
				break;
			}
			if(typeid(bad_gmean) == typeid(m))
			{
				m.show();
				break;
			}
		}

		cout << "Enter next set of number: ";
	}

	return 0;
}

double hmean(double a, double b)
{
	if(a == -b)
		//引发的异常类型为字符串
		throw bad_hmean(a, b);

	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if(a < 0 || b < 0)
		throw bad_gmean(a, b);

	return sqrt(a*b);
}
