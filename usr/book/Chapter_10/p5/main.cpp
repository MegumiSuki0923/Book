#include "p5.h"

int main(void)
{
	char ch;
	customer cust;
	Stack st;
	double total;

	cout << "Please enter A to push to stack, \n"
	     << "P to pop from stack, Q to quit.\n";

	while(cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;
		switch(ch)
		{
			case 'A':
			case 'a':
				cout << "Enter a customer's fullname you want to push: " << endl;
				cin.getline(cust.fullname, 35);
				cout << "Enter a customer's payment: " << endl;
				cin >> cust.payment;
				if(st.isFull())
					cout << "Stack already full!" << endl;
				else
				{
					st.push(cust);
					cout << "push OK!" << endl;
				}
				break;
			case 'P':
			case 'p':
				if(st.isEmpty())
					cout << "Stack is empty!" << endl;
				else
				{
					st.pop(cust);
					total += cust.payment;
					cout << cust.fullname << " is poped." << endl;
					cout << "sum payment = " << cust.payment << endl;
				}
				break;
		}
	cout << "Please enter A to push to stack, \n"
	     << "P to pop from stack, Q to quit." << endl;
	}
	return 0;
}
