#include "stock20.h"
#include <iostream>
#include <cstring>
using namespace std;

Stock::Stock()
{
	company = nullptr;
	shares = 0;
	share_val = total_val =  0.0;
}

//这是一个构造函数
Stock::Stock(const char *co, long n, double pr)
{
	//company = co;
	company = new char[strlen(co) + 1];
	strcpy(company ,co);

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

Stock::~Stock()
{
	delete []company;
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

ostream &operator<<(ostream &os, const Stock &st)
{
	os << "Company: " << st.company << endl;
	os << "Shares: " << st.shares << endl;
	os << "Share price: " << st.share_val << endl;
	os << "Total worth: " << st.total_val << endl;

	return os;
}

const Stock & Stock::topval(const Stock &s) const
{
	if(s.total_val > total_val) //total_val => this->total_val
		return s;
	else
		return *this;
}
