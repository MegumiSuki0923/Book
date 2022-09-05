#include "list.h"

List::List()
{
	//让栈顶的指针指向栈中最开始的位置
	top = 0;
}

bool List::isEmpty() const
{
	return top == 0;
}

bool List::isFull() const
{
	return top == MAX;
}

bool List::add(const Items &item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

void List::visit(void (*pd)(Items &))
{
	for(int i = 0; i < top; i++)
		pd(items[i]);
}

void visit_item(Items &item)
{
	cout << "Item = " << item << endl;
}
