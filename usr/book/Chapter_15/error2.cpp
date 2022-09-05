#include <iostream>
#include <cstdlib>

using namespace std;

bool hmean(double a, double b, double *ans);

int main(void)
{
	double x, y, z;

	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{
		if(hmean(x, y, &z))
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
		else
			cout << "One arguments should not be negative to one another." << endl;
		cout << "Enter next set of number: ";
	}

	return 0;
}

bool hmean(double a, double b, double *ans)
{
	if(a == -b)
		return false;
	else
	{
		*ans = 2.0 * a * b / (a + b);
		return true;
	}
}
