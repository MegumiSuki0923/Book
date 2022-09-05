#include <iostream>

using namespace std;

int main(void)
{
	char ch;
	while(cin >> ch)
	{
		if(ch != '#')
			cout << ch;
		else
		{
			cin.putback(ch);
			break;
		}
	}
	cout << endl;

	if(!cin.eof())
	{
		cin.get(ch);
		cout << ch << " is the next character." << endl;
	}
	else
	{
		cout << "End of file reached" << endl;
		exit(0);
	}

	while(cin.peek() != '#')
	{
		cin.get(ch);
		cout << ch;
	}
	cout << endl;

	if(!cin.eof())
        {
                cin.get(ch);
                cout << ch << " is the next character." << endl;
        }
	else
	{
                cout << "End of file reached" << endl;
                exit(0);
        }

	return 0;
}
