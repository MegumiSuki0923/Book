#include "sales.h"

Sales::Sales(int yy)
{
	year = yy;
	for(int i; i < MONTHS; i++)
		gross[i] = 0.0;
}

Sales::Sales(int yy, double *gr, int n)
{
	year = yy;
	int limit = (n > MONTHS) ? MONTHS : n;

	int i;
	for(i = 0; i < limit; i++)
		gross[i] = gr[i];
	for(i; i < MONTHS; i++)
		gross[i] = 0.0;
}

double Sales::operator[](int i) const
{
	if(i < 0 || i >= MONTHS)
		throw bad_index(i);
	return gross[i];
}

double &Sales::operator[](int i)
{
	if(i < 0 || i >= MONTHS)
		throw bad_index(i);
	return gross[i];
}

double LabeledSales::operator[](int i) const
{
	if(i < 0 || i >= MONTHS)
		throw nbad_index(Label(), i);
	return Sales::operator[](i);
}

double &LabeledSales::operator[](int i)
{
	if(i < 0 || i >= MONTHS)
		throw nbad_index(Label(), i);
	return Sales::operator[](i);
}
