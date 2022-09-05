#include <iostream>

using namespace std;

template<class T>
class HasFriend
{
	private:
		T item;
		static int ct;
	public:
		HasFriend(const T &i) : item(i) {ct++;}
		~HasFriend() {ct--;}
		friend void counts();	//display ct
		friend void reports(HasFriend<T> &);	//display item
};

template<class T>
int HasFriend<T>::ct = 0;

void counts()
{
	cout << "int counts: " << HasFriend<int>::ct << ", ";
	cout << "double counts: " << HasFriend<double>::ct << endl;
}

void reports(HasFriend<int> &hf)
{
	cout << "HasFriend<int> item: " << hf.item << endl;
}

void reports(HasFriend<double> &hf)
{
	cout << "HasFriend<double> item: " << hf.item << endl;
}

int main(void)
{
	cout << "No object declared: ";
	counts();

	HasFriend<int> hfi1(10);
	cout << "After hfi1 declared: ";
	counts();
	reports(hfi1);

	HasFriend<int> hfi2(20);
	cout << "After hfi2 declraed: ";
	counts();
	reports(hfi2);

	HasFriend<double> hfdb(0.5);
	cout << "After hfdb declared: ";
	counts();
	reports(hfdb);

	return 0;
}
