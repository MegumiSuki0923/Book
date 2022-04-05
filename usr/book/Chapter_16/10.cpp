#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(void)
{
	int cast[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> dice(10);

	//copy function
	copy(cast, cast + 10, dice.begin());

	//表示输出迭代器的模板	输入进来是int类型，输出出去是char类型 并在每个元素之间填充空格
	ostream_iterator<int, char> out_iter(cout, " ");
	copy(dice.begin(), dice.end(), out_iter);
	cout << endl;
	cout << "----------------------------------------" << endl;

	//反向输出 rbegin中的r，是reverse，反向的意思
	copy(dice.rbegin(), dice.rend(), out_iter);
	cout << endl;
	cout << "----------------------------------------" << endl;

	vector<int>::reverse_iterator ri;
	for(ri = dice.rbegin(); ri != dice.rend(); ri++)
		cout << *ri << " ";
	cout << endl;

	return 0;
}
