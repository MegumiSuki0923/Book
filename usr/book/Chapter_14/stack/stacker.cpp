#include <iostream>
#include "stack.h"
#include <cctype>
#include <string>

using namespace std;

int main(void)
{
	char ch;
	string po;
	Stack<string> st;

	cout << "Please etner A to push to stack, \n"
	     << "P to pop from stack, Q to quit.\n";

	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;

		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a string you want to push to stack:\n";
				cin >> po;
				if(st.isFull())
					cout << "Stack already full" << endl;
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if(st.isEmpty())
					cout << "Stack is empty" << endl;
				else
				{
					st.pop(po);
					cout << po << " is poped" << endl;
				}
				break;
		}
		cout << "Please etner A to push to stack, \n"
	     	     << "P to pop from stack, Q to quit.\n";
	}

	return 0;
}
