#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::string;
using std::auto_ptr;
using std::shared_ptr;
using std::unique_ptr;

class Report
{
    private:
        string str;
    public:
        Report(const string &s) : str(s){cout << "Report object created\n";}
        ~Report(){cout << "Report object deleted\n";}
        void comment() const{cout << str << "\n";}
};

int main(void)
{
/*
	{
		//will be warning
    		auto_ptr<Report> ps(new Report("Using auto_ptr"));
    		ps->comment();
	}
*/

	{
		shared_ptr<Report> ps(new Report("Using shared_ptr"));
    		ps->comment();
	}

	{
		unique_ptr<Report> ps(new Report("Using unique_ptr"));
                ps->comment();
	}
    return 0;
}
