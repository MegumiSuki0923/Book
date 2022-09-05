#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

vector<int> lotto(int ndot, int rdot);

int main(void)
{
	vector<int> winners;

	winners = lotto(51, 6);
	for(auto pt = winners.begin(); pt != winners.end(); pt++)
		cout << *pt << " ";
	cout << endl;

	return 0;
}

vector<int> lotto(int ndot, int rdot)
{
	vector<int> temp;
	srand(time(0));

	for(int i = 0; i < rdot; i++)
		temp.push_back(rand() % ndot);

	return temp;
}
