#include <string>

class Bank
{
	private:
		char m_name[50];
		char m_account[50];
		double balance;
	public:
		Bank(const char *name, const char *account, const double balance = 0.0);
		void show(void) const;
		void deposit(const double money);
		void draw(const double money);
}
