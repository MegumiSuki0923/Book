#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool same_after_reverse(const string &s);

int main(void)
{
	string str;
	cout << "Please enter a word: ";
	getline(cin, str);
	if(same_after_reverse(str))
		cout << "Yes, it is." << endl;
	else
		cout << "No, it's not." << endl;

	return 0;
}

bool same_after_reverse(const string &s)
{
	string temp;

	for(int i = 0; i < s.size(); i++)
	{
		if(isalpha(s[i]))
			temp += tolower(s[i]);
	}

	string temp1 = temp;

	reverse(temp1.begin(), temp1.end());

	return temp == temp1;

}
