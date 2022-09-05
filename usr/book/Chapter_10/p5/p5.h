#ifndef __P5_H__
#define __P5_H__

#include <iostream>
#include <cctype>

using namespace std;

struct customer
{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack
{
	private:
		enum {MAX = 10};
		Item items[MAX];
		int top;
	public:
		Stack();
		bool isEmpty() const;
		bool isFull() const;
		bool push(Item &item);
		bool pop(Item &item);
};

#endif
