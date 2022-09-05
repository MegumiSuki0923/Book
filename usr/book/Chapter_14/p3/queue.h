#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>
#include <string>

using namespace std;

class Worker
{
private:
    string fullname;
    long id;

public:
    Worker() : fullname("none one"), id(0) {}
    Worker(const string &s, long n) : fullname(s), id(n) {}
    ~Worker() {}
    void Set();
    void Show() const;
};

template <class T>
class Queue
{
private:
    enum
    {
        Q_SIZE = 10
    };
    struct Node
    {
        T item;
        struct Node *next;
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
    bool enqueue(const T &item);
    bool dequeue(T &item);
};

template <class T>
Queue<T>::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

template <class T>
Queue<T>::~Queue()
{
    Node *temp;

    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <class T>
bool Queue<T>::isempty() const
{
    return items == 0;
}

template <class T>
bool Queue<T>::isfull() const
{
    return items == qsize;
}

template <class T>
int Queue<T>::queuecount() const
{
    return items;
}

template <class T>
bool Queue<T>::enqueue(const T &item)
{
    if (isfull())
        return false;

    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    items++;

    if (front == NULL)
        front = add;
    else
        rear->next = add;
    rear = add;

    return true;
}

template <class T>
bool Queue<T>::dequeue(T &item)
{
    if (front == NULL)
        return false;

    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;

    if (items == 0)
        rear = NULL;

    return true;
}

#endif