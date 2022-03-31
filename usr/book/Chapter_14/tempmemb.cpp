#include <iostream>

using namespace std;

template<class T>
class Beta
{
	private:
		template<class V>
		class Hold
		{
			private:
				V val;
			public:
				Hold(V v = 0) : val(v) {}
				void Show() const {cout << val << endl;}
				V Value() const {return val;}
		};
		Hold<T> q;
		Hold<int> n;
	public:
		Beta(T t, int i) : q(t), n(i) {}
		void Show() const {q.Show(); n.Show();}
		template <class U>
		U blab(U u, T t) {return (q.Value() + n.Value()) * u / t;}
};

int main(void)
{
	Beta<double> guy(3.5, 3);
	cout << "T was set by double" << endl;
	guy.Show();

	cout << "V == T, they are all double." << endl;
	cout << "U was set to int, so output value is int type" << endl;
	cout << guy.blab(10, 2.3) << endl;

	cout << "U was set to double, so output value is double type" << endl;
	cout << guy.blab(10.0, 2.3) << endl;

	return 0;
}
