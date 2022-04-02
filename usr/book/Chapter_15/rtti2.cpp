#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Grand
{
	private:
		int hold;
	public:
		Grand(int h = 0) : hold(h){}
		virtual ~Grand(){};
		virtual void Speak() const {cout << "I am a grand class.\n ";}
		virtual int Value() const {return hold;}
};

class Superb : public Grand
{
	public:
		Superb(int h = 0) : Grand(h){}
		virtual ~Superb(){};
		virtual void Speak() const {cout << "I an a superb class.\n";}
		virtual void Say() const {cout << "I hold the superb value of " << Value() << endl;}
};

class Magnificent : public Superb
{
	private:
		char ch;
	public:
		Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c){}
		virtual void Speak() const {cout << "I am a magnificent class.\n";}
		virtual void Say() const {cout << "I hold the character " << ch << " and the integer " << Value() << endl;}
};

Grand *GetOne();

int main(void)
{
	srand(time(0));

	Grand *pg;
	Superb *ps;

	for(int i = 0; i < 5; i++)
	{
		pg = GetOne();
		cout << "Now processing type " << typeid(*pg).name() << endl;
		pg->Speak();

		if(ps = dynamic_cast<Superb *>(pg))
			ps->Say();
	}

	return 0;
}

Grand *GetOne()
{
	Grand *lain;

	switch(rand() % 3)
	{
		case 0:
			lain = new Grand(rand() % 100);
			break;
		case 1:
			lain = new Superb(rand() % 100);
			break;
		case 2:
			lain = new Magnificent(rand() % 100, 'A' + rand() % 26);
			break;
	}

	return lain;
}
