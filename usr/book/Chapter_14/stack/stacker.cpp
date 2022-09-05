#include <iostream>
#include "stack.h"
#include <cctype>
#include <string>

using namespace std;

int main(void)
{
	char ch;
//	string po; 正确格式
//	version_1: char* po; cin>>po会报错，po此时指向的是地址，将输入存入地址，且仅仅是一段内存的开头地址，将报错。
//			     此时没有开辟用于存储的空间，相当于把大内存塞入小内存，报错:段错误 核心已转存

//	version_2: char po[40]; 也报错 此时问题在st.pop(po)

//	version_3: char *po = new char[40];
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
