#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::string;
using std::auto_ptr;

class Report
{
    private:
        string str;
    public:
        Report(const string &s) : str(s){cout << "Report object created";}
        ~Report(){cout << "Report object deleted";}
        void comment() const{cout << str << "\n";}
};

int main(void)
{
    auto_ptr<Report> ps("using auto_ptr");
    ps->comment();

    return 0;
}