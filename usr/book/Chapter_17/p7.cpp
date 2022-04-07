#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	vector<string> vostr;
	string temp;

	//acquire strings
	cout << "Enter strings (empty line to quit):\n";
	while(getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);

	return 0;
}
