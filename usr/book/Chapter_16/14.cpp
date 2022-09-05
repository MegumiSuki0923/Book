#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <algorithm>

using namespace std;

typedef int KeyType;
typedef multimap<KeyType, string> Code;
typedef pair<KeyType, string> Pair;

int main(void)
{
	Code codes;

	codes.insert(Pair(10, "Beijing"));
	codes.insert(Pair(21, "Shanghai"));
	codes.insert(Pair(22, "Tianjin"));
	codes.insert(Pair(23, "Chongqing"));
	codes.insert(Pair(24, "Shenyang"));
	codes.insert(Pair(22, "Nanjing"));

	cout << "The city code 22 have " << codes.count(22) << endl;

	cout << "Now show all data:" << endl;
	cout << "Number\tCity" << endl;
	Code::iterator it;
	for(it = codes.begin(); it != codes.end(); it++)
		cout << (*it).first << "\t" << (*it).second << endl;

	cout << "---------------------------------------" << endl;
	cout << "Cities with area code 22: ";
	pair<Code::iterator, Code::iterator> range = codes.equal_range(22);
	for(it = range.first; it != range.second; it++)
		cout << (*it).second << " ";
	cout << endl;

	return 0;
}
