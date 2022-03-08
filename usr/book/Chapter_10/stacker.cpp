#include <iostream>
#include "stack.h"
#include <cctype>

using namespace std;

int main(void)
{
	char ch;
	unsigned long po;
	Stack st;

	cout << "Please enter A to push to stack,\n"
	     << "P to pop from stack, Q to quit.\n";

	while(cin >> ch && toupper(ch) != 'Q')
	{
		//只要缓存区里不是回车，就把它消耗掉
		while(cin.get() != '\n')
			continue;
		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a number you want to push to stack: \n";
				cin >> po;
				if(st.isFull())
					cout << "Stack already full\n";
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if(st.isEmpty())
					cout << "Stack is empty\n";
				else
				{
					st.pop(po);
					cout << po << " is poped\n";
				}
				break;
		}
		cout << "Please enter A to push to stack,\n"
		     << "P to pop from stack, Q to quit.\n";
	}

	return 0;
}
