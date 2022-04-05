#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void)
{
	set<string> Mat, Pat, Guest;

	cout << "Enter Mat's friend's name (enter quit to quit):" << endl;
	string name;

	while(getline(cin, name) && name != "quit")
	{
		Mat.insert(name);
	}

	cout << "Enter Pat's friend's name (enter quit to quit):" << endl;

        while(getline(cin, name) && name != "quit")
        {
                Pat.insert(name);
        }

	Guest.insert(Mat.begin(), Mat.end());
	Guest.insert(Pat.begin(), Pat.end());

	for(auto pt = Guest.begin(); pt != Guest.end(); pt++)
		cout << *pt << " ";
	cout << endl;

	return 0;
}
