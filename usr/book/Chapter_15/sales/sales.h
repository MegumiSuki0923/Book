#ifndef __SALES_H__
#define __SALES_H__

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Sales
{
	public:
		enum{MONTHS = 12};
		explicit Sales(int yy = 0);
		Sales(int yy, double *gr, int n);
		virtual ~Sales(){}
		int Year() const{return year;}
		virtual double operator[](int i) const;
		virtual double &operator[](int i);

		class bad_index : public logic_error
		{
			private:
				int bi;
			public:
				explicit bad_index(int ix, const string &s = "Index error in Sales object") : bi(ix), logic_error(s){}
				int bi_val() const{return bi;}
				virtual ~bad_index() throw(){}	//means throw nothing
		};

	private:
		int year;
		double gross[MONTHS];
};

class LabeledSales : public Sales
{
	private:
		string label;
	public:
		explicit LabeledSales(const string &s, int yy) : Sales(yy), label(s){}
		LabeledSales(const string &s, int yy, double *gr, int n) : label(s), Sales(yy, gr, n){}
		const string &Label() const{return label;}
		virtual ~LabeledSales(){}
		virtual double operator[](int i) const;
		virtual double &operator[](int i);

		class nbad_index : Sales::bad_index
		{
			private:
				string lbl;
			public:
				nbad_index(const string &lb, int ix, const string &s = "Index error in LabeledSales object") : Sales::bad_index(ix, s), lbl(lb){}
				const string &label_val() const{return lbl;}
				virtual ~nbad_index() throw(){}
		};
};

#endif
