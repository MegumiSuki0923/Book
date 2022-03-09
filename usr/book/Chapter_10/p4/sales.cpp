#include "sales.h"

namespace SALES
{
	Sales::Sales()
	{
		double total = 0.0;

		cout << "Please enter four sales: " << endl;
		for(int i = 0; i < QUARTERS; i++)
		{
			cin >> sales[i];
			total += sales[i];

			if(i == 0)
			{
				max = sales[i];
				min = sales[i];
			}
			else
			{
				max = (sales[i] > max) ? sales[i] : max;
				min = (sales[i] < min) ? sales[i] : min;
			}
		}

		average = total / QUARTERS;
	}

	Sales::Sales(const double ar[], int n)
	{
		double total = 0.0;
		int i;
		for(int i = 0; i < n && i < QUARTERS; i++)
		{
			sales[i] = ar[i];
			total += sales[i];
		}

		average = total / i;
		max = sales[0];
		min = sales[0];
		for(i = 1; i < n && i < QUARTERS; i++)
		{
			max = (max > sales[i]) ? max : sales[i];
			min = (min < sales[i]) ? min : sales[i];
		}

		if(n < 4)
		{
			for(i = n; i < 4; i++)
				sales[i] = 0;
		}
	}

	void Sales::show() const
	{
		cout << "Sales of 4 quarters: " << endl;
		for(int i = 0; i < QUARTERS; i++)
			cout << sales[i] << " ";
		cout << endl;

		cout << "The min is " << min << endl;
		cout << "The max is " << max << endl;
		cout << "The average is " << average << endl;
	}
}

