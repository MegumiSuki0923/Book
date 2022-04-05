#include <iostream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void)
{
	const int N = 6;

	string s1[N] = {"bufoon", "thinkers", "for", "heavy", "can", "for"};
	string s2[N] = {"metal", "any", "food", "elegant", "deliver", "for"};

	//关联容器 去除重复 会排序
	set<string> A(s1, s1 + N);
	set<string> B(s2, s2 + N);

	ostream_iterator<string, char> out(cout, " ");
	cout << "Set A: ";
	copy(A.begin(), A.end(), out);
	cout << endl;

	cout << "Set B: ";
	copy(B.begin(), B.end(), out);
	cout << endl;

	cout << "Union of A and B: ";
	set_union(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "Intersection of A and B: ";
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
	cout << endl;

	cout << "Difference of A and B: ";
        set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
        cout << endl;

	cout << "Set C: ";
	set<string> C;
	set_union(A.begin(), A.end(), B.begin(), B.end(), insert_iterator<set<string>>(C, C.begin()));
	copy(C.begin(), C.end(), out);
	cout << endl;

	string s3("grungy");
	C.insert(s3);
	cout << "After insert a word in C: ";
	copy(C.begin(), C.end(), out);
	cout << endl;

	cout << "Showing a range: ";
	copy(C.lower_bound("ghost"), C.upper_bound("spook"), out);
	cout << endl;

	return 0;
}
