#include "stack.h"

Stack::Stack()
{
	//让栈顶的指针指向栈中最开始的位置
	top = 0;
}

bool Stack::isEmpty() const
{
	return top == 0;
}

bool Stack::isFull() const
{
	return top == MAX;
}

bool Stack::push(Items &item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Items &item)
{
	if(top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}
