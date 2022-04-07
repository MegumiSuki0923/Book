#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>

using namespace std;

class Store
{
        private:
                ofstream &fout;
        public:
                Store(ofstream &out) : fout(out){}
                void operator()(const string &str);
};

void Store::operator()(const string &str)
{
        size_t len = str.size();
        fout.write((char *)&len, sizeof len);
        fout.write(str.data(), len);
}

void GetStrs(ifstream &in, vector<string> &v);
void ShowStr(const string &s);

int main(void)
{
	vector<string> vostr;
	string temp;

	//acquire strings
	cout << "Enter strings (empty line to quit):\n";
	while(getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
        cout << "Here is your input.\n";
        for_each(vostr.begin(), vostr.end(), ShowStr);

        ofstream fout("strings.dat", ios_base::out | ios_base::binary);
        for_each(vostr.begin(), vostr.end(), Store(fout));

        vector<string> vistr;
        ifstream fin("strings.dat", ios_base::in | ios_base::binary);
        if(!fin.is_open())
        {
                cerr << "Could not open file for input.\n";
                exit(EXIT_FAILURE);
        }
        GetStrs(fin, vistr);
        cout << "\nHere are the strings read from file:\n";
        for_each(vistr.begin(), vistr.end(), ShowStr);

	return 0;
}

void ShowStr(const string &s)
{
        cout << s << endl;
}

void GetStrs(ifstream &in, vector<string> &v)
{
        size_t len;
        char *pt;

        while(in.read((char *)&len, sizeof len))
        {
                pt = new char[len];
                in.read(pt, len);
                v.push_back(pt);
                delete []pt;
        }
}