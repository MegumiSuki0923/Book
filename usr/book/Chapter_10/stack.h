#ifndef __STACH_H__
#define __STACK_H__

//起一个别名
typedef unsigned long Items;

class Stack
{
	private:
		enum {MAX = 10};
		Items items[MAX];
		int top;
	public:
		Stack();
		bool isEmpty() const;
		bool isFull() const;
		bool push(Items &item);
		bool pop(Items &item);
};

#endif
