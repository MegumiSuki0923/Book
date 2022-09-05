#ifndef __LIST_H__
#define __LIST_H__

#include <iostream>

using namespace std;

//起一个别名
typedef unsigned long Items;

void visit_item(Items &item);

class List
{
	private:
		enum {MAX = 10};
		Items items[MAX];
		int top;
	public:
		List();
		bool isEmpty() const;
		bool isFull() const;
		bool add(const Items &item);
		//这是一个函数指针
		void visit(void (*pd)(Items &));
};

#endif
