#include "acctabc.h"
#include <iostream>

using namespace std;

const int CLIENTS = 3;

int main(void)
{
	AcctABC *p_clients[CLIENTS];
	string temp;
	long tempnum;
	double tempbal;
	int kind;

	for(int i = 0; i < CLIENTS; i++)
	{
		cout << "Enter the client's name: ";
		getline(cin, temp);
		cout << "Enter client's account number: ";
		cin >> tempnum;
		cout << "Enter opening balance: ";
		cin >> tempbal;
		cout << "Please enter 1 for Brass Account or enter 2 for BrassPlus Acount: ";
		while (cin >> kind && (kind != 1 && kind != 2))
			cout << "Enter 1 or 2: ";
		if(kind == 1)
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else
		{
			double tmax, trate;
			cout << "Enter the overfraft limit: $";
			cin >> tmax;
			cout << "Enter the rate: ";
			cin >> trate;
			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n');	
	}
	cout << endl;

	for (int i = 0; i < CLIENTS; i++)
	{
		p_clients[i]->ViewAcct();
		cout << endl;
	}
	
	for (int i = 0; i < CLIENTS; i++)
		delete p_clients[i];

    return 0;
}
