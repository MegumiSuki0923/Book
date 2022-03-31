#include <iostream>

using namespace std;

template <class T>
class HasFriend
{
	private:
		T item;
		static int ct;
	public:
		HasFriend(const T &i) : item(i) {ct++;}
		~HasFriend() {ct--;}
		friend void counts();
		friend void reports(HasFriend<T> &);
};

template<class T>
int HasFriend<T>::ct = 0;

void counts()
{
	cout << "int count: " << HasFriend<int>::ct << ", ";
	cout << "double count: " << HasFriend<double>::ct << endl;
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
	return 0;
}
