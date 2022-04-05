#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	string letter;

	cout << "Enter letter (enter quit to quit):" << endl;
	while(cin >> letter && letter != "quit")
	{
		cout << "Permutation:" << endl;
		sort(letter.begin(), letter.end());
		cout << letter << " ";
		while(next_permutation(letter.begin(), letter.end()))
			cout << letter << " ";
		cout << endl;
		cout << "Enter the next letter (enter quit to quit): ";
	}

	return 0;
}
