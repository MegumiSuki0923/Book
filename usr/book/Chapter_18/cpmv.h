#include <string>
#include <iostream>

using namespace std;

class Cpmv
{
        public:
               	struct Info
               	{
                       	string qcode;
                       	string zcode;
               	};

        private:
                Info *pi;

        public:
               	Cpmv();
               	Cpmv(string q, string z);
               	Cpmv(const Cpmv &cp);
               	Cpmv(Cpmv &&mv);
               	~Cpmv();
               	Cpmv &operator=(const Cpmv &cp);
               	Cpmv &operator=(Cpmv &&mv);
               	Cpmv operator+(const Cpmv &obj) const;
               	void Display() const;
};

Cpmv::Cpmv()
{
	pi = nullptr;
	cout << "Default construction." << endl;
}

Cpmv::Cpmv(string q, string z)
{
	pi = new Info;
	pi->zcode = z;
	pi->qcode = q;
	cout << "Construction with args." << endl;
}

Cpmv::Cpmv(const Cpmv &cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	cout << "Copy construction." << endl;
}

Cpmv::Cpmv(Cpmv &&mv)
{
	pi = mv.pi;
	mv.pi = nullptr;
	cout << "Move construction." << endl;
}

Cpmv::~Cpmv()
{
	delete pi;
	cout << "Deconstruction." << endl;
}

Cpmv &Cpmv::operator=(const Cpmv &cp)
{
	if(this == &cp)
		return *this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	cout << "Assignment function." << endl;

	return *this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv)
{
	if(this == &mv)
		return *this;

	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	cout << "Move assignment function." << endl;

	return *this;
}

Cpmv Cpmv::operator+(const Cpmv &obj) const
{
	cout << "Operator +." << endl;
	return Cpmv((pi->qcode + obj.pi->qcode), (pi->zcode + obj.pi->zcode));
}

void Cpmv::Display() const
{
	if(pi == nullptr)
		cout << "pi is null." << endl;
	else
	{
		cout << "Address: " << pi << endl;
		cout << "zcode: " << pi->zcode << endl;
		cout << "qcode: " << pi->qcode << endl;
	}

	cout << "Display() function." << endl;
}
