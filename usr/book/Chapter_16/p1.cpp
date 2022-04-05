#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool same_after_reverse(const string &s);

int main(void)
{
	string str;
	cout << "Please enter a word: ";
	cin >> str;
	if(same_after_reverse(str))
		cout << "Yes, it is." << endl;
	else
		cout << "No, it's not." << endl;

	return 0;
}

bool same_after_reverse(const string &s)
{
	string temp(s);

	reverse(temp.begin(), temp.end());

	return temp == s;

}
