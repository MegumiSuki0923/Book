#ifndef __STOCK20_H__
#define __STOCK20_H__

#include <string>

using namespace std;

class Stock
{
	private:
		char *company;
		long shares;
		double share_val;
		double total_val;
		void set_total() {total_val = shares * share_val;}
	public:
		Stock();
		Stock(const char *co, long n, double pr);
		~Stock();
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		//void show() const;
		const Stock & topval(const Stock &s) const;

		friend ostream &operator<<(ostream &os, const Stock &st);
};

#endif
