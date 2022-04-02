#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>
#include <string>

template<class Item>
class Queue
{
	private:
		enum{Q_SIZE = 10};
		//struct Node{T item; struct Node *next;};
		class Node
		{
			public:
				Item item;
				Node *next;
				Node(const Item &i) : item(i), next(nullptr) {}
		};

		Node *front;
		Node *rear;
		int items;
		const int qsize;
	public:
		Queue(int qs = Q_SIZE);
		~Queue();
		bool isempty() const;
		bool isfull() const;
		int queuecount() const;
		bool enqueue(const Item &item);
		bool dequeue(Item &item);
};

template<class Item>
Queue<Item>::Queue(int qs) : qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}

template<class Item>
Queue<Item>::~Queue()
{
	Node *temp;

	while(front != nullptr)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<class Item>
bool Queue<Item>::isempty() const
{
	return items == 0;
}

template<class Item>
bool Queue<Item>::isfull() const
{
	return items == qsize;
}

template<class Item>
int Queue<Item>::queuecount() const
{
	return items;
}

template<class Item>
bool Queue<Item>::enqueue(const Item &item)
{
	if(isfull())
		return false;

	Node *add = new Node(item);
	add->item = item;
	add->next = nullptr;
	items++;

	if(front == nullptr)
		front = add;
	else
		rear->next  = add;
	rear = add;

	return true;
}

template<class Item>
bool Queue<Item>::dequeue(Item &item)
{
	if(front == NULL)
		return false;

	item = front->item;
	items--;
	Node *temp = front;
	front = front->next;
	delete temp;

	if(items == 0)
		rear = NULL;

	return true;
}

#endif
