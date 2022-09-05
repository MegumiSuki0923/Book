#include <iostream>

using namespace std;

template <class T1, class T2>
class A
{
	public:
		void Show() const;
};

template <class T1, class T2>
void A<T1, T2>::Show() const
{
	cout << "use general definition" << endl;
}

//explicit generate编译器在编译时，就已经创建这一段空间
template class A<double, double>;

template <>
class A<int, int>
{
	public:
		void Show() const;
};

void A<int, int>::Show() const
{
	cout << "use specialized definition" << endl;
}

template<class T1>
class A<T1, int>
{
	public:
		void Show() const;
};

template<class T1>
void A<T1, int>::Show() const
{
	cout << "use partial specialized definition" << endl;
}

int main(void)
{
	A<char, char> a1;
	a1.Show();

	A<int, int> a2;
	a2.Show();

	A<char, int> a3;
	a3.Show();

	return 0;
}
