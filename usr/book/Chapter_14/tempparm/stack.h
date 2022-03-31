#ifndef __STACH_H__
#define __STACK_H__

template<class Type>
class Stack
{
	private:
		enum {MAX = 10};
		Type items[MAX];
		int top;
	public:
		Stack();
		bool isEmpty() const;
		bool isFull() const;
		bool push(Type &item);
		bool pop(Type &item);
};

template<class Type>
Stack<Type>::Stack()
{
	top = 0;
}

template<class Type>
bool Stack<Type>::isEmpty() const
{
	return top == 0;
}

template<class Type>
bool Stack<Type>::isFull() const
{
	return top == MAX;
}

template<class Type>
bool Stack<Type>::push(Type &item)
{
	if(top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template<class Type>
bool Stack<Type>::pop(Type &item)
{
	if(top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}


#endif
