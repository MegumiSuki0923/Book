#include <iostream>

using namespace std;

template<class T>
void counts();
template<class U>
void reports(U &);

template<class V>
class HasFriend
{
	private:
		V item;
		static int ct;
	public:
		HasFriend(const V &i) : item(i) {ct++;}
		~HasFriend() {ct--;}
		friend void counts<V>();	//display ct
		friend void reports<HasFriend<V>>(HasFriend<V> &);	//display item
};

template<class T>
int HasFriend<T>::ct = 0;

template<class T>
void counts()
{
	cout << "counts: " << HasFriend<T>::ct << endl;
}

template<class U>
void reports(U &hf)
{
	cout << hf.item << endl;
}

int main(void)
{
	cout << "No object declared: ";
	counts<int>();

	HasFriend<int> hfi1(10);
	cout << "After hfi1 declared: ";
	counts<int>();
	reports(hfi1);

	HasFriend<int> hfi2(20);
	cout << "After hfi2 declraed: ";
	counts<int>();
	reports(hfi2);

	HasFriend<double> hfdb(0.5);
	cout << "After hfdb declared: ";
	counts<double>();
	reports(hfdb);

	return 0;
}
