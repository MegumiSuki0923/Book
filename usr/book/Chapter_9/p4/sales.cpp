#include "sales.h"

using namespace std;
namespace SALES
{
	void setSales(Sales &s, const double ar[], int n)
	{
		int i;
		double sum = 0.0;
		for (i = 0; i < n && i < 4; i++)
		{
			s.sales[i] = ar[i];
			sum += s.sales[i];
		}

		s.average = sum / i;
		s.max = s.sales[0];
		s.min = s.sales[0];

		for(int k = 1; k < i; k++)
		{
			s.max = (s.max > s.sales[k]) ? s.max : s.sales[k];
			s.min = (s.min < s.sales[k]) ? s.min : s.sales[k];
		}

		if(n < QUARTERS)
		{
			for(int k = n; k < QUARTERS; k++)
				s.sales[k] = 0;
		}

		cout << "SET OK!" << endl;
	}
	void setSales(Sales &s)
	{
		double sum = 0.0;
		cout << "Enter 4 sales quarters: " << endl;
		for(int i = 0; i < QUARTERS; i++)
		{
			cout << "#" << i + 1 << ": ";
			cin >> s.sales[i];
			sum += s.sales[i];
			if(i == 0)
			{
				s.max = s.sales[i];
				s.min = s.sales[i];
			}
			else
			{
				s.max = (s.max > s.sales[i]) ? s.max : s.sales[i];
				s.min = (s.min < s.sales[i]) ? s.min : s.sales[i];
			}
		}
		s.average = sum / QUARTERS;
	}
	void showSales(const Sales &s)
	{
		cout << "There are the sales: ";
		for (int i = 0; i < QUARTERS; i++)
			cout << s.sales[i] << " ";
		cout << endl;

		cout << "The average is " << s.average << endl;
		cout << "The max is " << s.max << endl;
		cout << "The min is " << s.min << endl;
	}
}
