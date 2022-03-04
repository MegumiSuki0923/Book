#include "sales.h"
#include <iostream>

using namespace std;
using namespace SALES;

void setSales(Sales &s, const double ar[], int n)
{
	int len = sizeof(ar) / sizeof(double);
	for(int i = 0; i < len; i++)
		s.sales[i] = ar[i];
	if(len < 4)
	{
		for(int i = len + 1; i < QUARTERS; i++)
			s.sales[i] = 0; 
	}

	double sum;
	for(int i = 0; i < len; i++)
		sum += s.sales[i];
	s.average = sum / QUARTERS;

	s.max = s.sales[0];
	for(int i = 1; i < len; i++)
	{
		if(s.sales[i] > s.max;
			s.max = s.sales[i];
	}

	s.min = s.sales[0];
	for(int i = 1; i < len; i++)
	{
		if(s.sales[i] < s.min)
			s.min = s.sales[i];
	}

	cout << "SET OK!" << endl;
}
void setSales(Sales &s)
{
	
}
void showSales(const Sales &s)
{
	cout << "There are the sales: ";
	for(int i = 0; i < QUARTERS; i++)
		cout << s.sales[i] << " ";
	cout << endl;

	cout << "The average is " << s.average << endl;
	cout << "The max is " << s.max << endl;
	cout << "The min is " << s.min << endl;
}
