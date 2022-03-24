#include "stock00.h"
#include <iostream>
using namespace std;

void Stock::acquire(const std::string &co, long n, double pr)
{
	company = co;
	if(n < 0)
	{
		std::cout << "Number of shares can't be negative; " << company << " shares set to be 0." << endl;
		shares = 0;
		}
	else
		shares = n;
	share_val = pr;
	set_total();
}

void Stock::buy(long num, double price)
{
	if(num < 0)
	{
		std::cout << "Number of shares can't be negative, Transcation is aborted." << endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_total();
	}
}

void Stock::sell(long num, double price)
{

	if(num < 0)
        {
                cout << "Number of shares can't be negative, Transcation is aborted." << endl;
        }
	else if(num > shares)
	{
		cout << "You can't sell more than you have! Transaction is aborted." << endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_total();
	}
}

void Stock::update(double price)
{
	share_val  = price;
	set_total();
}

void Stock::show()
{
	cout << "Company: " << company << endl;
	cout << "Shares: " << shares << endl;
	cout << "Share price: " << share_val << endl;
	cout << "Total worth: " << total_val << endl;
 }
